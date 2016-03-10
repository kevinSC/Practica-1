#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
int main (){
  int secreto, user, counter = 0;
  srand (time(NULL));
  secreto = rand() % 100 + 0;
  do {
    printf ("Ingresa un numero del 0 al 100: ");
    scanf ("%d", &user);
    if (secreto < user) 
      puts ("es menor");
    else if (secreto>user)
      puts ("es mayor");
    counter++;
  } while (secreto!=user);
  std::cout << "Ganaste en "<< counter <<" intentos !!!!!!";
  return 0;
}