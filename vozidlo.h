#ifndef VOZIDLO_H
#define VOZIDLO_H
#include <string>


class Vozidlo
{
public:
    enum trasa { kratke, stredni, dlouhe };

    // Full constructor
    Vozidlo(trasa typTrasy, std::string nazev, int pocetCestujicich, double porizovaciCena);

    // Bike constructor - short distance and 1 person only
    Vozidlo(std::string nazev, double porizovaciCena);

    // Getters and setters
    trasa typTrasy() const;
    void setTypTrasy(trasa newTypTrasy);

    const std::string &nazev() const;
    void setNazev(const std::string &newNazev);

    int pocetCestujicich() const;
    void setPocetCestujicich(int newPocetCestujicich);

    double porizovaciCena() const;
    void setPorizovaciCena(double newPorizovaciCena);

    // Class methods
    virtual void printInfo();
    virtual double getRemainingDistance() = 0; // absolute

    // Operators
    double operator+(Vozidlo &v1);

protected:
    trasa m_typTrasy = kratke;
    std::string m_nazev = "neuvedeno";
    int m_pocetCestujicich = 0;
    double m_porizovaciCena = 0;
};


#endif // VOZIDLO_H
