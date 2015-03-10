#include "bicycle.h"
using namespace vehicle;
Bicycle::Bicycle(int numberOfPassengers,
                 int topSpeed,
                 bool helmetUsed,
                 int numberOfWheels):
                Vehicle(numberOfPassengers, topSpeed, numberOfWheels)
              , m_helmetUsed(helmetUsed)
{}
//remember the class then two colons!
Bicycle::Bicycle(int numberOfPassengers,
                 int topSpeed,
                 std::string color,
                 bool helmetUsed,
                 int numberOfWheels):
Vehicle(numberOfPassengers, topSpeed, numberOfWheels, color)
, m_helmetUsed(helmetUsed)
{}
//deconstructor
Bicycle::~Bicycle()
{}
//define the pure virtual method
int Bicycle::getSafetyRating()
{
    if (m_helmetUsed)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
