#include "Scooter.h"

#ifndef ELECTRICALSCOOTER_H
#define ELECTRICALSCOOTER_H

class ElectricalScooter : public Scooter
{
    int charg;
  public:
    ElectricalScooter();
    ElectricalScooter(int a, int b, int c);
    double getPollutionScore();
    double getTaxes();
    int getChargingTime();
    void setChargingTime(int a);
};

#endif