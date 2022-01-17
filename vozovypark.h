#ifndef VOZOVYPARK_H
#define VOZOVYPARK_H

#include <vector>
#include "vozidlo.h"

template <class T>
class VozovyPark {
public:
    void vypisVozidla();
    void soucetKm();

    template<class T1, class T2>
    friend void operator += (VozovyPark<T1> &d, T2 * z);

    const std::string &spravce() const;
    void setSpravce(const std::string &newSpravce);

    double vsechnyKm() const;

protected:
    std::vector<T> m_vozidla;
    std::string m_spravce;
    double m_vsechnyKm;
};




// Get spravce
template<class T>
const std::string &VozovyPark<T>::spravce() const
{
   return m_spravce;
}

// Set spravce
template<class T>
void VozovyPark<T>::setSpravce(const std::string &newSpravce)
{
   m_spravce = newSpravce;
}

// Get sumed kilometers
template<class T>
double VozovyPark<T>::vsechnyKm() const
{
   return m_vsechnyKm;
}

// Print info about all vehicles
template <class T>
void VozovyPark<T>::vypisVozidla() {
    for (auto v: m_vozidla) {
        v->printInfo();
    }
}

// Sum kilometers of all vehicles
template <class T>
void VozovyPark<T>::soucetKm() {
    for (auto v: m_vozidla) {
        m_vsechnyKm += v->getRemainingDistance();
    }
}

// Add new vehicle to the park using operator
template <class T1, class T2>
void operator+=(VozovyPark<T1> &d, T2 * v){
    d.m_vozidla.push_back(v);
}

#endif // VOZOVYPARK_H
