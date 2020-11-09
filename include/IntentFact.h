#include "Intent.h"
#include <string>

class IntentFact : public Intent
{
public:
    IntentFact() = default;
    ~IntentFact();

    virtual void ProcessIntent() override;
    std::string GetFact();

};