#pragma once

#include "Intent.h"
#include <string>

class IntentWeatherCity : public Intent
{
public:
    IntentWeatherCity() = default;
    ~IntentWeatherCity();

    virtual void ProcessIntent() override;
    std::string GetWeatherCity();

};