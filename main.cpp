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
    // Problème principal
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

    // Problème Bonus

    /*
     Les variables du premier problèmesont réutilisée, les variables de tempe et de la distance L2 seront recalculés

    \left(10-x\right)/5+\:\sqrt{\left(9+x^2\right)}/2
    -b/2a
     */


}