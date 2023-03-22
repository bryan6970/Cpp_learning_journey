//
// Created by wong2 on 20/3/2023.
//

#include <iostream>
#include <string>

using namespace std;

class Water{

protected:
    const double temp;

public:
    explicit Water(double _temp)
    : temp(_temp){
}

    double getTemp(){
        return temp;
    }

};

class Weather :protected Water{

public:
    string getWeather(){
        return "The weather is " + to_string(getTemp());
    }

};


int main(){
    Weather myDay(10.5);

    myDay.getWeather()

    return 0;
}

