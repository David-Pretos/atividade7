#include <iostream>
#include <iomanip> 

int main() 
{
  // Está é a versão 1.0.1 Com algumas modificações de terminologia 

  float imc, peso, altura;

  cout<< "\n Digite o seu peso em Kg: (ex.: 68)\n";
  cin>> peso;
  cout<< "Digite a sua altura em metros: (ex.: 1.78)\n";
  cin>>altura;

  imc = peso/(altura*altura);

  cout << fixed << setprecision(2);

  cout << " \n Índice de Massa Corporal= "<< imc << endl;

    if(imc<18.5)
    {
      cout<< "Obs: Você se encontra abaixo do peso sem dúvida.\n";
     }
    if(imc>=18.5 && imc<24)
    {
      cout<< "Obs: Você aprensenta peso normal, parabéns!\n";
     }
    if(imc>=24 && imc<29)
    {
      cout<< "Obs: Você está um pouco acima do peso, bom se cuidar!\n";
     }
    if(imc>29)
    {
      cout<< "Obs: Desafortunadamente, você apresenta um quadro de obesidade, procure seu médico com urgência!\n";
     }
    return 0; 
}