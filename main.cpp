#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char nome[10][20];
    init(nome);

    int contatore=0;
    inserimento(nome, contatore);

    char n[20];
    init(n);
    cin >> n;

    int a= ricerca(nome,n);
    if(a!=-1){
        cout<<a;
    } else{
        cout<<"non presente"<<endl;
    }

    return 0;
}
