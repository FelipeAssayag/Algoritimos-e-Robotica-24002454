//Código de equação da reta
//Importar bibliotecas
#include<iostream>
using namespace std;
//Iniciar código principal
int main()
{
    //Criação de variáveis
    float x, y, z, w;
    //Entrada de dados pelos usuários
    cout << "\nInsira o numero de visitantes da primeira semana :";
    cin >> x;
    cout << "\nInsira o numero de visitantes da segunda semana :";
    cin >> y;
    cout << "\nInsira o numero de visitantes da terceira semana :";
    cin >> z;
    cout << "\nInsira o numero de visitantes da quarta semana :";
    cin >> w;
    //Processos
    float R = x + y + z + w;
    //Saída
    cout << "\nNeste mes foram recebidos " << R << " visitantes.";
}
