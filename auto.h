#ifndef AUTO_H
#define AUTO_H

#include "vozidlo.h"

class Auto : public Vozidlo
{
public:
    Auto(trasa typTrasy, std::string nazev, int pocetCestujicich, double porizovaciCena, double objem, double spotreba);

    // Getters and setters
    double objem() const;
    void setObjem(double newObjem);

    double spotreba() const;
    void setSpotreba(double newSpotreba);

    // Class methods
    virtual void printInfo() override; // Print information about the vehicle
    virtual double getRemainingDistance() override;  // Count and return remaining distance of the vehicle by it's member variables

protected:
    double m_objem;
    double m_spotreba;
};

#endif // AUTO_H
