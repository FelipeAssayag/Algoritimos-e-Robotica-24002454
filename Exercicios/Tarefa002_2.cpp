
#include<iostream>
using namespace std;

int main()
{
    //variáveis
    float Sd, R, D;
    //valores
    cout << "\nEntre com o saldo desatualisado : R$";
    cin >> Sd;
    cout << "\nEntre com a receita : R$";
    cin >> R;
    cout << "\nEntre com a despesa : R$";
    cin >> D;
    //calculo
    float Sa = Sd + R - D;
    //saída
    cout << "\nSaldo atualizado = R$" >> Sa;
}
