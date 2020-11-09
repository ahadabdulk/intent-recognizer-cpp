#include "Intent.h"
#include "IntentFactory.h"
#include "IntentWeather.h"
#include "IntentWeatherCity.h"
#include "IntentCalender.h"
#include "IntentFact.h"


std::shared_ptr<Intent> IntentFactory::CreateIntent(const std::string& str)
{
    std::regex regexWeatherIntent("([\\w\\s]+[Ww]eather\\slike\\s[\\w]+)", std::regex_constants::icase );
    std::regex regexWeatherCityIntent("([\\w\\s]+[Ww]eather)\\slike\\sin\\s[\\w\\s]+", std::regex_constants::icase );
    std::regex regexCalenderIntent("([\\w\\s]+[0-9]?[0-9]{1}:[0-5]{1}[0-9]{1}\\s(AM|PM)[\\w\\s]+)", std::regex_constants::icase );

    if( ConfirmIntent(str, regexWeatherIntent) )
    {
        return std::make_shared<IntentWeather>();
    }
    else if( ConfirmIntent(str, regexWeatherCityIntent ) )
    {
        return std::make_shared<IntentWeatherCity>();
    }
    else if( ConfirmIntent(str, regexCalenderIntent) )
    {
        return std::make_shared<IntentCalender>();
    }
    else
    {
        return std::make_shared<IntentFact>();
    }

}

bool IntentFactory::ConfirmIntent(const std::string& str, const std::regex& reg ) const
{
    bool hasMatched = false;

    std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
    std::sregex_iterator lastMatch;
    std::smatch match;

    while( currentMatch != lastMatch ){
        match = *currentMatch;
        currentMatch++;
    } 
    
    hasMatched = match.ready();

    return hasMatched;
}