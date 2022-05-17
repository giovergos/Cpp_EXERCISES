#include "ElectricalScooter.h"

ElectricalScooter::ElectricalScooter() : Scooter()
{
  charg=0;
}

ElectricalScooter::ElectricalScooter(int a, int b, int c) : Scooter(a, b)
{
  charg=c;
}

double ElectricalScooter::getPollutionScore()
{
  return (charg*300)/365.0;
}

double ElectricalScooter::getTaxes()
{
  return ((2022-year)*12.5)-((2022-year)*12.5)*20/100;
}

int ElectricalScooter::getChargingTime()
{
  return charg;
}

void ElectricalScooter::setChargingTime(int a)
{
  charg=a;
}
