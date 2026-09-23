/* --------------------------- 
Laboratoire : 02
Auteur(s) : Dussault Morgan
Date : 23.09.26
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <cstdlib>

int main() {

    double distanceY = 10.; // en Km
    double distanceX = 3.;  // en Km

    double distanceL1 = 6.; // en Km

    double speedL1 = 5.; // en Km/h
    double speedL2 = 2.; // en Km/h

    double distanceL2 =  sqrt(pow((distanceY - distanceL1),2) + pow(distanceX,2));

    double timeL1 = distanceL1 / speedL1;
    double timeL2 = distanceL2 / speedL2;

    double totalTime = timeL1 + timeL2;

    std::cout << "Temp que le robot va prendre pour récuperer l'objet: " <<totalTime << " h" << std::endl;
}