// IModule.hpp

#pragma once

class IModule {
public:
    virtual ~IModule() = default;
    virtual int getId() const = 0;
    virtual std::string getName() const = 0;
};
