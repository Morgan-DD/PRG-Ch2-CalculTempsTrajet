/* --------------------------- 
Laboratoire : 02
Auteur(s) : Dussault Morgan
Date : 23.09.26
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <cstdlib>


static double calulateTime(double distanceY, double distanceX, double distanceL1, double speedL1, double speedL2) {

    return (distanceL1 / speedL1) + (sqrt(pow((distanceY - distanceL1),2) + pow(distanceX,2)) / speedL2);
}

int main() {
    // Problème principal
    double distanceY = 10.; // en Km
    double distanceX = 3.;  // en Km

    double distanceL1 = 6.; // en Km

    double speedL1 = 5.; // en Km/h
    double speedL2 = 2.; // en Km/h

    double distanceL2 =  sqrt(pow((distanceY - distanceL1),2) + pow(distanceX,2));

    double timeL1 = distanceL1 / speedL1;
    double timeL2 = distanceL2 / speedL2;

    double totalTime = calulateTime(distanceY, distanceX, distanceL1, speedL1, speedL2);

    std::cout << "Temp que le robot va prendre pour récuperer l'objet: " <<totalTime << " h" << std::endl;

    // Problème Bonus

    bool exitLoop = false;
    long double lastDistance1=10.;
    long double lastDistance2=0.;
    long double bestTIme = totalTime;
    long double newTime;
    double newDistanceL1;
    int exitCounter = 0;

    while (lastDistance1 != lastDistance2) {
        newDistanceL1 = ((lastDistance1+lastDistance2)/2);
        newTime = calulateTime(distanceY, distanceX, newDistanceL1, speedL1, speedL2);
        if ( newTime< bestTIme) {
            bestTIme = newTime;
            lastDistance1 = newDistanceL1;
            exitCounter = 0;
        }else {
            lastDistance2 =newDistanceL1;
            exitCounter++;
        }
    }

    std::cout<<"Meilleur temp: "<<bestTIme<<"h, valeure de L1: " << newDistanceL1<<std::endl;
}