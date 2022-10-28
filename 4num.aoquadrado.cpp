/*algoritimo"calculos"
Fun��o: Calcular numero ao quadrado, ao cubo e raiz quadrada
Data 08/2022
*/

#include <math.h>
#include <iostream>

using namespace std;

int main()
 {

    float numero,potencia,raiz;


    cout << "Digite um numero: ";//entrada de dados

    cin >> numero;//variavel inteira ,

    potencia  = pow(numero,2);//pow =potencia�ao

    cout << "Numero ao Quadrado = "<< potencia;

    cout << endl;

    potencia  = pow(numero,3);

    cout << "Numero ao Cubo = "<< potencia;

    cout<<endl;//cout << endl apresenta em nova linha

    raiz = sqrt(numero);// sqrt Raiz

    cout << "Numero ao quadrado : "<< raiz;

    cout <<endl;


    return 0;
}
