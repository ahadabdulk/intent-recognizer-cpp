# intent-recognizer-cpp
Simple command line regex based intent recognizer tool

# Directory Structure

```bash
intent-recogniser-cpp
|
├── CMakeLists.txt
├── README.md
├── external
│   ├── CMakeLists.txt
│   └── gtest.cmake
├── include
│   ├── Intent.h
│   ├── IntentCalender.h
│   ├── IntentFact.h
│   ├── IntentFactory.h
│   ├── IntentWeather.h
│   └── IntentWeatherCity.h
├── src
│   ├── CMakeLists.txt
│   ├── IntentCalender.cpp
│   ├── IntentFact.cpp
│   ├── IntentFactory.cpp
│   ├── IntentWeather.cpp
│   ├── IntentWeatherCity.cpp
│   └── main.cpp
└── test
    ├── CMakeLists.txt
    ├── main.cpp
    └── unitTests.cpp
    
```

## Requirements
``` bash
# Following tools need to be installed
>> cmake (3.17 or above)
>> Apple clang version 11.0.3 (clang-1103.0.32.59) ( or equivalent gcc )
```

## Build
```bash
# change directory to project directory (intent-recognizer-cpp)
>> mkdir build
>> cd build
>> cmake ..
>> make
>> make install
#make install will copy the executables in build/bin directory
```

## Run tool
```bash
>> cd build/bin
>> ./intentRecognizer
```

## Run test (Unit tests)
```bash
>> cd build/bin
>> ./testintentRecognizer
```

