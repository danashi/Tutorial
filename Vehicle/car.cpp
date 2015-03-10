#include "car.h"

using namespace vehicle;
Car::Car(int numberOfPassengers,
    int topSpeed,
    double kilometresPerLitre,
    int numberOfAirBags,
    bool abs,
    int numberOfWheels)
    : MotorVehicle(numberOfPassengers,topSpeed,numberOfWheels,kilometresPerLitre)
    ,  m_numberOfAirbags(numberOfAirBags)
    , m_abs(abs)
{}

Car::Car(int numberOfPassengers,
    int topSpeed,
    double kilometresPerLitre,
    std::string color,
    int numberOfAirBags,
    bool abs,
    int numberOfWheels)
    : MotorVehicle(numberOfPassengers,topSpeed,numberOfWheels,color, kilometresPerLitre)
    , m_numberOfAirbags(numberOfAirBags)
    , m_abs(abs)
{}
Car::~Car()
{}

int Car::getSafetyRating(){
    int SafetyRating = 0;
    if(m_numberOfAirbags >= 4){
        SafetyRating += 3;
    }
    else if (m_numberOfAirbags >= 2)
        {
            SafetyRating += 2;
        }
    else if (m_numberOfAirbags > 0)
    {
        SafetyRating += 1;
    }
    if (m_abs)
    {
        SafetyRating += 2;
    }
    return SafetyRating;
}

