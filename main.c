
/*Scrivere un programma in cui viene definita la struttura Auto con i seguenti campi: anno immatricolazione,
cilindrata, carburante (definire un enumerazione benzina, metano, diesel), numero cavalli.
Scrivere poi il codice che generi casualmente i valori relativi a due variabili di tipo Auto e
le stampi a video dicendo con un messaggio aggiuntivo se la cilindrata è maggiore di 900 (usare l’operatore ternario).
Non devono essere presenti magic number (fare quindi uso di macro opportune), commentare opportunatamente
tutto il codice.*/



#include <stdio.h>
#include <stdlib.h> //libreria per generazione casuale
#include <time.h>//libreria per generazione casuale

typedef enum {Benzina,Metano,Diesel} Carburante; //definizione enumerazione

//definizione struttura auto
typedef struct{
    int annoImmatricolazione;
    int cilindrata;
    int numeroCavalli;
}Auto;//nome struttura

int main() {

//dichiarzione variabili
    Carburante Carburante_VWGolf;
    Carburante CarburantePandino;
    Auto VWGolf;
    Auto Pandino;
    _Bool verificacc;

    srand(time(NULL)); //inizializzazione del seed


    VWGolf.annoImmatricolazione = 1900 + rand() %(2020 - 1900 + 1); //n = MIN + rand()%(MAX-MIN+1);
    printf("\nL'anno di immatricolazione della VW Golf e\'%d", VWGolf.annoImmatricolazione);
    VWGolf.cilindrata = 1300 + rand() %(2000 - 1300 + 1);
    printf("\nLa cilindrata della VW Golf e\'%dcc", VWGolf.cilindrata);

    //inizio verifica cc.
    verificacc = VWGolf.cilindrata >= 900 ? 1 : 0;

    if(verificacc == 1){
        printf("\nLa cilindrata e' maggiore di 900cc");
    }//fine verica cc


    VWGolf.numeroCavalli = 100 + rand() %(200 - 100 + 1);
    printf("\nI Cavalli della VW Golf sono %dcc", VWGolf.numeroCavalli);
    Carburante_VWGolf = Diesel;
    printf("\nCarburante %d[0=Benzina, 1=Metano, 2=Diesel]",Carburante_VWGolf);

    printf("\n");

    Pandino.annoImmatricolazione = 1900 + rand() %(2000 - 1900 + 1);
    printf("\nL'anno di immatricolazione del Pandino e\'%d", Pandino.annoImmatricolazione);
    Pandino.cilindrata = 800 + rand() %(1000 - 800 + 1);
    printf("\nLa cilindrata del Pandino e\'%.dcc", Pandino.cilindrata);

    //inizio verifica cc.
    verificacc = Pandino.cilindrata >= 900 ? 1 : 0; //operatore ternario
    if(verificacc == 1){
        printf("\nLa cilindrata e' maggiore di 900cc");
    }//fine verifica cc

    Pandino.numeroCavalli = 50 + rand() %(80 - 50 + 1);
    printf("\nI Cavalli del Pandino sono %d", Pandino.numeroCavalli);

    CarburantePandino = Benzina; //richiamo enumerazione
    printf("\nCarburante %d[0=Benzina, 1=Metano, 2=Diesel]",CarburantePandino);


    return 0;
}