#include "lib.h"

void init(char mat[10][20]){
    for (int i=0; i<10; i++){
        for (int j=0; j<20; j++){
            mat[i][j]=0;
        }
    }
}

void init(char arr[20]){
    for (int i=0; i<20; i++){
        arr[i]=0;
    }
}

int ricerca(char nome[10][20], char n[20]){
    int x;
    for (int i=0; i<10; i++){
        x=0;
        for (int j=0; j<20; j++){
            if(nome[i][j]==n[j]){
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
