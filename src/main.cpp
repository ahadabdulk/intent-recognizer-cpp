#include <iostream>
#include "Intent.h"
#include "IntentFactory.h"

typedef std::unique_ptr<IntentFactory> IntentFactoryUniquePtr;
typedef std::shared_ptr<Intent> IntentPtr;

int main()
{
    std::string userIntent;
    IntentPtr intentPtr;
    char choice = 'N';

    IntentFactoryUniquePtr intentFactoryPtr = std::make_unique<IntentFactory>();

    do  
    {   
        std::cout<<"Enter Intent: ";
        std::getline(std::cin.ignore(), userIntent);
        intentPtr = intentFactoryPtr->CreateIntent(userIntent);

        if(nullptr != intentPtr )
        {   
            intentPtr->ProcessIntent();
        }   
        else
        {   
            std::cout<<"\n Something went wrong!!!"<<std::endl;
        }
        
        std::cout<<"Do you want to continue?(Y/N) : ";
        std::cin >> choice;

    }while(choice == 'Y' || choice == 'y' );

}