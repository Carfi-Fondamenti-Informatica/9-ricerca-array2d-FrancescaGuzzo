
#include "lib.h"

void init(char matrice[10][20]){
    for (int i=0; i<10; i++){
        for (int j=0; j<20; j++){
            matrice[i][j]=' ';
        }
    }
}

void inserimento(char nome[10][20], int contatore){
    while(contatore<10){
        cin >> nome[contatore];
        contatore++;
    }
}

void init(char array[20]){
    for (int i=0; i<20; i++){
        array[i]=' ';
    }
}

int ricerca(char matrice[10][20], char array[20]){
    int x;
    for (int i=0; i<10; i++){
        x=0;
        for (int j=0; j<20; j++){
            if(matrice[i][j]==array[j]){
                x++;
            }else{
                break;
            }
        }
        if(x==20){
            return i;
        }
    }
    return -1;

}
