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
    
    std::string weatherIntent = "What is the weather like today?";
    std::string weatherCityIntent = "What is the weather like in New York today?";
    std::string calenderIntent = "Am I free at 13:00 PM tomorrow?";
    std::string factIntent = "Tell me an interesting fact.";


};

TEST_F(TestIntent, testFactoryCreation)
{
    EXPECT_TRUE( nullptr != u_factory );    
}

TEST_F(TestIntent, testIntentWeatherObjectCreation)
{
    s_intent = u_factory->CreateIntent(weatherIntent);
    EXPECT_TRUE( nullptr != s_intent );
}

TEST_F(TestIntent, testIntentWeather)
{
    std::string expected = "Get Weather\n";
    s_intent = u_factory->CreateIntent(weatherIntent);
    testing::internal::CaptureStdout();
    s_intent->ProcessIntent();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ( expected.c_str(), output.c_str() );  
}

TEST_F(TestIntent, testIntentCalenderObjectCreation)
{
    s_intent = u_factory->CreateIntent(calenderIntent);
    EXPECT_TRUE( nullptr != s_intent );
}

TEST_F(TestIntent, testIntentCalender)
{
    std::string expected = "Check calender\n";
    s_intent = u_factory->CreateIntent(calenderIntent);
    testing::internal::CaptureStdout();
    s_intent->ProcessIntent();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ( expected.c_str(), output.c_str() );  
}