#include<iostream>
using namespace std;

int main()
{
    //variáveis
    float x, y, z, w;
    //Numero de visitantes
    cout << "\nInsira o numero de visitantes da primeira semana :";
    cin >> x;
    cout << "\nInsira o numero de visitantes da segunda semana :";
    cin >> y;
    cout << "\nInsira o numero de visitantes da terceira semana :";
    cin >> z;
    cout << "\nInsira o numero de visitantes da quarta semana :";
    cin >> w;
    //Calculo
    float R = x + y + z + w;
    //Saída
    cout << "\nNeste mes foram recebidos " << R << " visitantes.";
}
