#include "../include/IntentCalender.h"
#include <iostream>

IntentCalender::~IntentCalender()
{

}

void IntentCalender::ProcessIntent()
{
    std::cout<<CheckCalender()<<std::endl;
}

std::string IntentCalender::CheckCalender()
{
    return "Check calender";
}