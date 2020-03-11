/*Escriba un programa que imprima cuantos numeros primos hay entre 500 y 12,100
y que imprima tambien  su suma:
1) Defina una funcion que  indique si un numero es  primo o no 
2) implemente un Loop  que nos permita sumar y contar los numeros*/

#include<iostream>
#include<list>

bool primo(int a);


int main(void)
{
  int a=4;    //limite inferior
  int b=115;   //limite superior
  int suma=0;  //La suma
  int contador=0; //contador
  
  for(a;a<=b;a++)
    {
      if (primo(a))
	{
	  contador=contador+1;
	  suma=suma + a;
	  std::cout << a << std::endl;
	}
    }
  std::cout << "La suma es " << suma << std::endl;
  std::cout << "La cantidad de numeros primos es " << contador << std::endl;
}

bool primo(int a)
{
  int divisibles=0;
  for (int b=2; b<=a;b++) //El for actua como sumatoria
    {
       //Elemento que lleva la cantidad de divisibles
      int result=a%b;   //Genera el residuo/modulo de la division
      
      if (result==0)
	{
	  divisibles= divisibles +1;
	  // std::cout << a << " es divisible por "<< b << std::endl;
	  // std::cout<<divisibles<<std::endl;
	  //La intension del  if es seleccionar los numero que dividen a
	}
      if(divisibles>1)
	{
	  // std::cout<< " es primo" << std::endl;
	  return false;
	}
    }
  return true;
} 
  
