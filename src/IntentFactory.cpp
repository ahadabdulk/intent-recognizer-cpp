#include "../include/Intent.h"
#include "../include/IntentFactory.h"


std::shared_ptr<Intent> IntentFactory::CreateIntent(const std::string& str)
{
    std::regex regexWeatherIntent("([\\w\\s]+[Ww]eather\\slike\\s[\\w]+)", std::regex_constants::icase );
    std::regex regexWeatherCityIntent("([\\w\\s]+[Ww]eather)\\slike\\sin\\s[\\w\\s]+", std::regex_constants::icase );
    std::regex regexCalenderIntent("([\\w\\s]+[0-9]?[0-9]{1}:[0-5]{1}[0-9]{1}\\s(AM|PM)[\\w\\s]+)", std::regex_constants::icase );

    return std::make_shared<Intent>(nullptr);
}

bool IntentFactory::ConfirmIntent(const std::string& str, const std::regex& reg ) const
{
    return false;
}