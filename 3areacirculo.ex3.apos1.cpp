/*algoritimo"area_circulo"
Fun��o: Calcular aarea de uma circunferencia
Data 08/2022
*/
#include <iostream>

using namespace std;

int main()
{
   // Declara��o das vari�veis
	float raio, pi=3.14, area;

   // Entrada de Dados
   cout << "Digite o raio do circulo :";

   // Apresenta��o do resultado
   cin >> raio;

   // C�lculo da �rea da circunfer�ncia
   area = (pi*raio*raio);

   //apresenta�ao resultado
   cout<< " Area do circulo :"<<area;

   cout << endl;

   return 0;

}
