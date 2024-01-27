/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** DateTIme
*/

#include <chrono>
#include <ctime>
#include "DateTime.hpp"

Krell::DateTime::DateTime() : AKeyValueDisplayedMonitorModule("Date & Time")
{

}

void Krell::DateTime::refreshData()
{
    std::time_t currentTime = std::time(nullptr);
    std::tm *timeStruct = std::localtime(&currentTime);
    std::string date = (timeStruct->tm_mday < 10 ? "0" : "") + std::to_string(timeStruct->tm_mday) + "/" +
                       (timeStruct->tm_mon < 10 ? "0" : "") + std::to_string(timeStruct->tm_mon + 1) + "/" +
                       std::to_string(timeStruct->tm_year + 1900);
    std::string time = (timeStruct->tm_hour < 10 ? "0" : "") + std::to_string(timeStruct->tm_hour) + ":" +
                       (timeStruct->tm_min < 10 ? "0" : "") + std::to_string(timeStruct->tm_min) + ":" +
                       (timeStruct->tm_sec < 10 ? "0" : "") + std::to_string(timeStruct->tm_sec);
    this->data.clear();
    this->data.insert({"Date", date});
    this->data.insert({"Time", time});
}

int Krell::DateTime::getId() const
{
    return 0;
}

std::string Krell::DateTime::getName() const
{
    return "Date & Time";
}

