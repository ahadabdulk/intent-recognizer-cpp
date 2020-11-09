#pragma once

#include "Intent.h"
#include <string>

class IntentWeather : public Intent
{
public:
    IntentWeather() = default;
    ~IntentWeather();

    virtual void ProcessIntent() override;
    std::string GetWeather();

};