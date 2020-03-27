#include <iostream>
#include <tuple>
#include <vector>
#include <array>
#include <bits/stdc++.h> 
using namespace std;

void mochila(vector<tuple<int,int>> lista)
{
    int capacidad = 6;
    int pesoActual = 0;
    int beneficio = 0;

    for(int i = 0; i < lista.size(); i++)
    {
        if((pesoActual+get<0>(lista[i]))<=capacidad)
        {
            pesoActual += get<0>(lista[i]);
            beneficio += get<1>(lista[i]);
        }
    }

    cout<<"Capacidad: "<<pesoActual<<"/6"<<endl;
    cout<<"Beneficio: "<<beneficio<<endl;
}

void fontanero()
{
    int arr[10];

	for (int i = 0; i < 10; i++)
	{
        arr[i] = rand () % 100;
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr, arr+n);

    int acumulado = 0;
    for(int i = 0; i < 10; i++)
    {
        if((arr[i]+acumulado)<=arr[i]*3)
        {
            cout<<arr[i]<<": Satisfecho"<<endl;
        }
        else
        {
            cout<<arr[i]<<": Insatisfecho"<<endl;
        }
        acumulado += arr[i];
    }
		
}

int main()
{
    vector<tuple<int,int>> lista;

    lista.emplace_back(make_tuple(10,100));
    lista.emplace_back(make_tuple(5,11));
    lista.emplace_back(make_tuple(3,6));
    lista.emplace_back(make_tuple(3,6));
    
    //mochila(lista);

    fontanero();

    return 0;
}