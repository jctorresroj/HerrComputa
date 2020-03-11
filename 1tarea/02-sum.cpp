/*Escriba un programa que CALCULA LA SUMA ARMONICA  \sigma_{i=1}^{N} \frac{1}{i}
como funcion de N, para 1<=N<=100. EL programa debe imprimir a pantalla simple-
mente una tabla (dos columnas) en donde la primera columna es el valor de N y 
la segunda el valor de la suma.
*/

#include<iostream>

double armonica(double i, double N);

int main(void)
{
  double a=1.0;
  double b=100.0;
  std::cout << armonica(a,b)<<std::endl;

  return 0;
}


double armonica(double i, double N) //i es el Entero que corre con la suma
// y N El numero maximo
{
  float suma = 0;
  std::cout <<"N" <<"  Suma "<< std::endl;
  for(i=1;i<=N;i++)
    {
      suma = 1/i + suma;
      std::cout << i <<"   "<< suma << std::endl;
    }  
}
