#pragma once

#include "Intent.h"
#include <regex>
#include <memory>

class IntentFactory
{
public:
    IntentFactory() = default;

    std::shared_ptr<Intent> CreateIntent(const std::string& str);
    bool ConfirmIntent(const std::string& str, const std::regex& reg ) const;
};