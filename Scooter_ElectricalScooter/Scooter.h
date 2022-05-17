#ifndef SCOOTER_H
#define SCOOTER_H

class Scooter
{
  protected:
    int maxKM, year;
  public:
    Scooter();
    Scooter(int a, int b);
    int getMaxKM();
    int getYear();
    virtual double getPollutionScore();
    virtual double getTaxes();
};

#endif
