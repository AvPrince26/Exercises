/*Un rilevatore di temperatura fornisce per ogni giorno il valore della temperatura media (espresso con numeri decimali) in un range di valori compresi tra -5 e +5 (effettuare la validazione dell'input).
Scrivere un programma che, dopo una settimana, fornisce il valore di temperatura che si è verificato più frequentemente.
In caso di exequo fornire il valore maggiore.*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


//Non cambia niente a farlo con cin e do while per la validazione (cambia solo il fatto che non sia decimale)
int main(){
srand(time(NULL));
string giorni[7]={"Lunedì","Martedì","Mercoledì","Giovedì","Venerdì","Sabato","Domenica"};
int temp,max[11]={0},maxVal; //max per dire quante volte è uscito un numero
for (int i=0;i<7;i++){
    
    temp=rand()%11-5;
    cout<<giorni[i]<<" ha avuto una temperatura media di "<<temp<<" gradi"<<endl;
    max[temp+5]++;//temp va da -5 a +5 mentre nell'array non possono andarci i numeri negativi si aggiunge +5, la casella viene aumentata
    }
   for (int i=0; i<11; i++) {
    if (max[i] >= maxVal) {
        maxVal = max[i]; /*un po come trovare il valore massimo valvecchio=valnuovo se una condizione è vera
        in altri esercizi, e poi assegnare a un altra variabile il valore del contantatore (0-11) max 0-7 per ogni casella*/
        temp = i;//0-11, 
    }
}
          
        
        cout << "La temperatura più frequente è " << temp - 5; 
        
    }
    














