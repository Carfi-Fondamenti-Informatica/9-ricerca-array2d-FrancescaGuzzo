#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char nome[10][20];
    char n[20];
    init(nome);
    init(n);

    for (int i=0; i<10; i++){
        cin >> nome[i];
    }
   
    cin >> n;

    int a= ricerca(nome,n);
    if(a!=-1){
        cout<<a;
    } else{
        cout<<"non presente"<<endl;
    }

    return 0;
}
