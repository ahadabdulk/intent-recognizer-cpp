#pragma once

#include "Intent.h"
#include <string>

class IntentCalender : public Intent
{
public:
    IntentCalender() = default;
    ~IntentCalender();

    virtual void ProcessIntent() override;
    std::string CheckCalender();

};