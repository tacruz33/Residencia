# include <iostream>
using namespace std;

 int main ( void) {

        int a ,b ;
        int soma,divisao, multiplicacao, subtracao,resto;

        cout << " Abaixo será realizado algumas operações matemáticas, com dois números digitados pelo usuário."<< endl ;
        cout << "Digite um numero : " ;
        cin >> a;
        cout << "Digite um numero : ";
        cin >> b;

        soma = a+b;
        subtracao = a- b;
        multiplicacao = a * b;
        divisao = a / b;
        resto = a % b;

         cout << " Soma é igual a : " << soma;
          cout << endl;
           cout << " Subtração é igual a : " << subtracao;
            cout << endl;
             cout << " Multiplicaçao é igual a : "<< multiplicacao;
              cout << endl;
               cout << " Divisão é igual a : " << divisao;
                cout << endl;
                 cout << " O resto da Divisão é : " << resto << endl;


         return 0;
 }