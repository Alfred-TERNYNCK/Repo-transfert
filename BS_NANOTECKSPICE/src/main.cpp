#include <iostream>
#include <memory>
#include "AndComponent.hpp"
#include "FalseComponent.hpp"
#include "TrueComponent.hpp"
#include "NotComponent.hpp"
#include "OrComponent.hpp"

std::ostream& operator<<(std::ostream& s, nts::Tristate v)
{
    if (v == nts::Tristate::UNDEFINED)
        return s << "1";
    return s << static_cast<int>(v);
}


int main() {
    // Création des composants
    std::unique_ptr<nts::IComponent> gate = std::make_unique<nts::AndComponent>();
    std::unique_ptr<nts::IComponent> input1 = std::make_unique<nts::FalseComponent>();
    std::unique_ptr<nts::IComponent> input2 = std::make_unique<nts::TrueComponent>();
    std::unique_ptr<nts::IComponent> inverter = std::make_unique<nts::NotComponent>();

    // Connexion des composants
    gate->setLink(1, *input1, 1);
    gate->setLink(2, *input2, 1);
    inverter->setLink(1, *gate, 3);

    // Affichage du résultat
    std::cout << "!(" << input1->compute(1) << " && " << input2->compute(1) << ") -> "
              << inverter->compute(2) << std::endl;

    return 0;
}
