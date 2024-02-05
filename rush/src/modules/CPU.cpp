/*
** EPITECH PROJECT, 2024
** B-PDG-300-BAR-3-1-PDGRUSH3-etienne.namur
** File description:
** CPU
*/

#include "CPU.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>
#include <thread>
#include <cpuid.h>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include "../../include/modules/ModuleError.hpp"


Krell::CPU::CPU() : AKeyValueDisplayedMonitorModule("CPU")
{

}

void Krell::CPU::refreshData()
{
    std::ifstream cpuinfo("/proc/cpuinfo");
    std::string line;
    std::unordered_map<std::string, std::string> data;

    while (std::getline(cpuinfo, line)) {
        std::istringstream iss(line);
        std::string key, value;

        if (std::getline(iss, key, ':') && std::getline(iss, value)) {
            key.erase(0, key.find_first_not_of(" \t"));
            key.erase(key.find_last_not_of(" \t") + 1);
            value.erase(0, value.find_first_not_of(" \t"));
            value.erase(value.find_last_not_of(" \t") + 1);

            if (key == "model name") {
                this->data.insert({"Model Name", value});
            } else if (key == "cpu cores") {
                this->data.insert({"Number of Cores", value});
            } else if (key == "cpu MHz") {
                data.insert({"CPU Frequency (MHz)", value});
            } else if (key == "cache size") {
                this->data.insert({"Cache Size", value});
            }
        }
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::ifstream cpuFrequencyFile("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq");
    std::string frequency;
    if (cpuFrequencyFile >> frequency) {
        int freqKHz = std::stoi(frequency);
        std::ostringstream oss;
        oss << std::setw(4) << std::setfill('0') << freqKHz / 1000;
        this->data["CPU Frequency (MHz)"] = oss.str();
    } else {
        this->data["CPU Frequency (MHz)"] = "N/A";
    }

    std::ifstream cpuTemperatureFile("/sys/class/thermal/thermal_zone4/temp");
    std::string temperature;
    if (cpuTemperatureFile >> temperature) {
        int tempMilliC = std::stoi(temperature);
        int tempC = tempMilliC / 1000;
        this->data["CPU Temperature"] = std::to_string(tempC) + "°C";
    } else {
        this->data["CPU Temperature"] = "N/A";
    }
}

int Krell::CPU::getId() const
{
    return 2;
}

std::string Krell::CPU::getName() const
{
    return "CPU";
}

