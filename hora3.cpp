#include<iostream>
#include<cstdlib>
#include "hora.h"
#include<windows.h>

using namespace std;

int main(){
    system("pause");
    Hora h;
    for (int i = 0; i < 24; i++)
        for (int j = 0;j < 60;j++)
            for (int k = 0;k <60;k++){
                    h.estableceHora(i,j,k);
                    cout<<endl;
                    h.imprimeEstandar();
                    Sleep(1000);
                    system("cls");
            }
}
