#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h> 


//Jeg har ændret funktionen til en bool funktion. Den returner true, hvis rækken er en jolly jumper og false, hvis det ikke er. 
bool isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/

// Hvis seq[] kun indeholder 1 tal, så er det per definition en jolly jumper, derfor:
    if (size == 1) {
        return true;
    }

    //Jeg benytter et boolean array, som kun kan indeholde værdierne true og false. Jeg vil efterfølgende bruge det til at gemme 
    //difference allerede har været der. Da det skal være alle tal fra 1 til n-1, må en genganger af en difference altså betyde, at det
    //ikke er en jollyjumper. 

    //Først sætter jeg boolean arreayet til false som default. 
    bool diffs_found[size-1];
    for (int i = 0; i < size-1; i++){
        diffs_found[i] = false;
    }
    //Nu laver jeg et for-loop til først at udregne forskellen mellem to tal og dernæst bestemme, hvad jeg skal gøre med den.
    for (int i = 0; i < size-1; i++) {
        //Jeg gemmer differencen i variablen diff. 
        int diff = seq[i] - seq[i+1];

        //Det her giver mig den absolutte værdi af diff. 
        if (diff < 0){
            diff = diff * -1;
        }
        //Her tjekker jeg for samtlige "fejl" som giver en ikke jolly jumper. Da differencen skal være mellem 1 og n-1, må den altså ikke være 0.
        //Hvis differencen er større end size -1, kan den ikke være n-1. Hvis diffs_found[diff] == true, betyder det, at differencen allerede 
        //er fundet, dermed kan det heller ikke være en jolly jumper. 
        //Hvis en af disse ting er true, så returner jeg funktionen som false. 
        if (diff == 0 || diff > size -1 || diffs_found[diff-1] == true){
            return false;
        }

        
        //Hvis det er første gang denne difference er fundet, så ændres "dens" plads i boolean arrayet til true. 
        diffs_found[diff-1] = true;
    }

    //Hvis det stykke kode hernede køres, betyder det, at tallet er en jolly jumper. Derfor returner jeg true. 
    return true;
}



