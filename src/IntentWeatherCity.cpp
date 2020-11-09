#include "../include/Intent.h"
#include "../include/IntentWeatherCity.h"
#include <iostream>

IntentWeatherCity::~IntentWeatherCity()
{

}

void IntentWeatherCity::ProcessIntent()
{
    std::cout<<GetWeatherCity()<<std::endl;
} 

std::string  IntentWeatherCity::GetWeatherCity()
{
    return "Get Weather City";
}
