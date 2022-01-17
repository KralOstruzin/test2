#include <iostream>
#include "vozidlo.h"
#include "auto.h"
#include "kolo.h"
#include "vozovypark.h"

using namespace std;

int main()
{
    cout << "Vitejte ve vozovem parku.\n" << endl;


    Auto *auto1 = new Auto(Vozidlo::dlouhe, "BMW", 4, 1250000, 32, 8);
    //auto1->printInfo();
    //cout << "Zbyva: " << auto1->getRemainingDistance() << " km." << endl;

    Kolo *kolo1 = new Kolo("Author", 20000, true, 10000);
    //kolo1->printInfo();
    //cout << "Zbyva: " << kolo1->getRemainingDistance() << " km." << endl;

    // Soucet ujetych km dvou vozidel pretizenim operatoru
    double soucetKm = *auto1 + *kolo1;
    cout << "Soucet: " << soucetKm << endl;

    // Vozovy park - demonstrace
    VozovyPark<Vozidlo*> vozovyPark;
    vozovyPark.setSpravce("Karel Novak");
    cout << "Spravce parku: " << vozovyPark.spravce() << endl;

    vozovyPark += new Auto(Vozidlo::dlouhe, "Audi", 4, 1500000, 32, 8);
    vozovyPark += new Kolo("Specialized", 28000, true, 12500);

    vozovyPark.vypisVozidla();

    vozovyPark.soucetKm(); // Sum all kilometers
    cout << "Km celeho parku: " << vozovyPark.vsechnyKm() << endl; // Print them using getter


    return 0;
}
