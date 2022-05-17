#include "Scooter.h"

Scooter::Scooter()
{
  maxKM=year=0;
}

Scooter::Scooter(int a, int b)
{
  maxKM=a;
  year=b;
}

int Scooter::getMaxKM()
{
  return maxKM;
}

int Scooter::getYear()
{
  return year;
}

double Scooter::getPollutionScore()
{
  return (maxKM*250)/365.0;
}

double Scooter::getTaxes()
{
  return (2022-year)*12.5;
}

