#include "../include/Intent.h"
#include "../include/IntentWeather.h"
#include <iostream>

IntentWeather::~IntentWeather()
{

}

void IntentWeather::ProcessIntent()
{
    std::cout<<GetWeather()<<std::endl;
} 

std::string  IntentWeather::GetWeather()
{
    return "Get Weather";
}
