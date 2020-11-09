#include "../include/IntentFact.h"
#include <iostream>

IntentFact::~IntentFact()
{

}

void IntentFact::ProcessIntent()
{
    std::cout<<GetFact()<<std::endl;
}

std::string IntentFact::GetFact()
{
    return "Get Fact";
}