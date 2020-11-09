#pragma once

class Intent
{
public:
    Intent() = default;
    virtual ~Intent(){};
    
    virtual void ProcessIntent() = 0;

};