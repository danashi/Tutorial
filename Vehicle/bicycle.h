#ifndef BICYCLE_H
#define BICYCLE_H

#include "vehicle.h"

namespace vehicle
{
    class Bicycle : public Vehicle
    {
    public:
        Bicycle(int numberOfPassengers,
            int topSpeed,
            bool helmetUsed = false,
            int numberOfWheels = 2);

        Bicycle(int numberOfPassengers,
            int topSpeed,
            std::string color,
            bool helmetUsed = false,
            int numberOfWheels = 2);
        ~Bicycle();
        int getSafetyRating();
    protected:
        bool m_helmetUsed;
    };
}
#endif // BICYCLE_H
