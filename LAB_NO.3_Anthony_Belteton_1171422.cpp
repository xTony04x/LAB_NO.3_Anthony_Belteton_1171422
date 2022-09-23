#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include "chrono"
#include "thread"


using namespace System;
using namespace std;
// aca se hara el recorrido de cada animal.
void recorrido()
{
    bool comp = false;
    //numeros rand
    
    int conejo;
    int tortuga;
    int contC = 0;
    int contT = 0;

    //conejo
    char C = 'C';
    char Vacia_C = '-';
    char C_pista[70];
    C_pista[0] = C;
    C_pista[1] = Vacia_C;
    // punteros de conejo
    char* Pc = &C;
    char newC = *Pc;
    //tortuga
    char T = 'T';
    char Vacia_T = '-';
    char T_pista[70];
    T_pista[0] = T;
    T_pista[1] = Vacia_T;
    //punteros de tortuga
    char* Pt = &T;
    char newT = *Pt;

    
    
        for (int i = 0; i <= 61;i++)
        {
            conejo = rand() % 11;
            tortuga = rand() % 11;

            
            
                if (conejo > tortuga)//moviminetos de conejo
                {
                    if (conejo >= 8 && conejo <= 10)
                    {
                        contC = contC + 9;
                        C_pista[contC] = newC;
                        cout << "\n super salto!! + 9 cuadros!! - pos: " << contC;
                        this_thread::sleep_for(0.5s);
                    }
                    else if (conejo >= 4 && conejo <= 7)
                    {
                        contC = contC + 1;
                        C_pista[contC] = newC;
                        cout << " \n salto pequeño!! + 1 cuadros!! - pos: " << contC;
                        this_thread::sleep_for(0.5s);
                    }
                    else if (conejo == 1)
                    {
                        if (contC > 12)
                        {
                            contC = contC - 12;
                            C_pista[contC] = newC;
                            cout << " \nGRAN RESBALON!! - 12 cuadros!! - pos: " << contC;
                            this_thread::sleep_for(0.5s);
                        }
                        else
                        {
                            cout << " \n no se mueve!! " << contC;;
                            this_thread::sleep_for(0.5s);
                        }
                    }
                    else if (conejo == 2)
                    {
                        if (contC > 2)
                        {
                            contC = contC - 2;
                            C_pista[contC] = newC;
                            cout << " \n resbalon!! - 2 cuadros!! - pos: " << contC;
                            this_thread::sleep_for(0.5s);
                        }
                        else
                        {
                            
                         cout<<"\n no se mueve de donde esta!! " << contC;
                         this_thread::sleep_for(0.5s);
                        }
                        
                    }
                    else
                    {
                       
                        cout << "\nSe ha quedado dormido!! + 0 cuadros!! - pos: " << contC;
                        this_thread::sleep_for(0.5s);
                    }
                }
                else if (tortuga > conejo)// movimientos de tortuga
                {
                    if (tortuga >= 1 && tortuga <= 5)
                    {
                        contT = contT + 3;
                        T_pista[contT] = newT;
                        cout << "\n tortuga: paso veloz!! + 3 cuadros! -  pos : " << contT;
                        this_thread::sleep_for(0.5s);
                    }
                    else if (tortuga >= 8 && tortuga <= 10)
                    {
                        contT = contT + 1;
                        T_pista[contT] = newT;
                        cout << "\ntortuga: Paso lento! + 1 cuadro! -  pos : " << contT;
                        this_thread::sleep_for(0.5s);
                    }
                    else
                    {
                        if (contT > 6)
                        {
                            contT = contT - 6;
                            T_pista[contT] = newT;
                            cout << "\ntortuga: Resbalon!! - 6  cuadros! - pos: " << contT;
                            this_thread::sleep_for(0.5s);
                        }
                        else
                        {
                            contT = contT;
                            cout << "\ntortuga: no se mueve de donde esta " << contT;
                            this_thread::sleep_for(0.5s);
                        }
                        
                    }
                }
                else// mordida
                {
                    cout << "\n Mordida!!!";
                    this_thread::sleep_for(0.5s);
                }
            
        }
        if (contC >=70)
        {
            cout << "\n \n Fin de la carrera, gana el conejo - conejo: Ni hablar!\n";
            this_thread::sleep_for(0.5s);

        }
        else if (contT >=70)
        {
            cout << "\n \n Fin de la carrera, gana la tortuga - Tortuga: ¡BRAVO!\n";
            this_thread::sleep_for(0.5s);

        }
        cout << "\n Recorrido realizado por cada animal, la C son las pos donde el conejo paso y las T donde la tortuga paso \n";
        cout << "\n Conejo ";
        for (int o = 0; o < 70; o++)
        {
            cout << C_pista[o] << ",";
            
        }
        cout << "\n";

        cout<<"\n tortuga: ";
        for (int q = 0; q < 70; q++)
        {
            cout << T_pista[q] << ",";

        }
        cout << "\n";
    
}



int main()
{
    cout << "HOY SE HARA UNA GRAN CARRERA EN LA CIUDAD, LA LIEBRE CONTRA LA TORTUGA!! \n";
    cout << "Listooos?!\n";
    cout << " 1... \n 2... \n 3!! \n";
    this_thread::sleep_for(3s);
    cout << " BANG!! Y ARRANCA LA CARRERA! \n";
    cout << "\n";
    this_thread::sleep_for(0.5s);
    recorrido();
}
