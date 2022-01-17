#ifndef KOLO_H
#define KOLO_H

#include <string>
#include "vozidlo.h"


class Kolo : public Vozidlo
{
public:
    Kolo(std::string nazev, double porizovaciCena, bool crosove, double zbyvajiciKm);

    // Getters and setters
    bool crosove() const;
    void setCrosove(bool newCrosove);

    double zbyvajiciKm() const;
    void setZbyvajiciKm(double newZbyvajiciKm);

    // Class methods
    virtual void printInfo() override; // Print information about the vehicle
    virtual double getRemainingDistance() override; // Count and return remaining distance of the vehicle by it's member variables

protected:
    bool m_crosove;
    double m_zbyvajiciKm;
};

#endif // KOLO_H
