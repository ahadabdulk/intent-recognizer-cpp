#include "gtest/gtest.h"
#include "IntentWeather.h"
#include "IntentCalender.h"
#include "IntentFact.h"
#include "IntentFactory.h"

class TestIntent :  public ::testing::Test{
protected:
    virtual void SetUp() {
        u_factory = std::make_unique<IntentFactory>();
    }   

    virtual void TearDown() {
        if( u_factory )
        {   
            u_factory.reset();
        }   
    }   

    std::unique_ptr<IntentFactory> u_factory = nullptr;
    std::shared_ptr<Intent> s_intent;
};

TEST_F(TestIntent, testFactoryCreation)
{
    EXPECT_TRUE( nullptr != u_factory );    
}