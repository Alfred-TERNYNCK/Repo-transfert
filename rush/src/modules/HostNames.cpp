/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** HostNames
*/

#include <csignal>
#include <climits>
#include "HostNames.hpp"
#include "../../include/modules/ModuleError.hpp"

Krell::HostNames::HostNames() : AKeyValueDisplayedMonitorModule("Host names")
{

}

void Krell::HostNames::refreshData()
{
    char *username = getlogin();
    char hostname[HOST_NAME_MAX + 1];

    if (!username)
        throw ModuleError("Cannot get username.");
    if (gethostname(hostname, HOST_NAME_MAX) == -1)
        throw ModuleError("Cannot get hostname.");
    this->data.clear();
    this->data.insert({"Username", username});
    this->data.insert({"Hostname", hostname});
}

int Krell::HostNames::getId() const
{
    return 0;
}

std::string Krell::HostNames::getName() const
{
    return "Host names";
}

