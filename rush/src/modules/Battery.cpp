/*
** EPITECH PROJECT, 2024
** B-PDG-300-BAR-3-1-PDGRUSH3-etienne.namur
** File description:
** Battery
*/

#include <fstream>
#include "Battery.hpp"
#include "../../include/modules/ModuleError.hpp"


Krell::Battery::Battery() : AKeyValueDisplayedMonitorModule("Battery")
{

}

void Krell::Battery::refreshData()
{
    std::ifstream capacityFile("/sys/class/power_supply/BAT0/capacity");
    std::ifstream statusFile("/sys/class/power_supply/BAT0/status");

    std::string capacity, status;

    if (capacityFile.is_open() && std::getline(capacityFile, capacity)) {
        this->data["Battery Capacity :"] = capacity + "%";
    } else {
        this->data["Battery Capacity :"] = "N/A";
    }

    if (statusFile.is_open() && std::getline(statusFile, status)) {
        this->data["Battery Status : "] = status;
    } else {
        this->data["Battery Status : "] = "N/A";
    }
}

int Krell::Battery::getId() const
{
    return 1;
}

std::string Krell::Battery::getName() const
{
    return "Battery";
}
