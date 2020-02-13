#include <iostream>

using namespace std;

int
main ()
{
  char palabra[20];
  int cont, nvocales, salir;
  char vocales[] = { 'a', 'e', 'i', 'o', 'u' }
  ;
  int longitud = 0;
  ;
  int cont2 = 0;
  ;
  cout << "Dime una palabra: ";
  cin >> palabra;
  while (palabra[cont2] != '\0')
    {
      longitud++;
      cont2++;
    }

  if (longitud < 6)
    {
      for (cont = 0; cont < 20; cont++)
	{
	  for (nvocales = 0; nvocales < 5; nvocales++)
	    {
	      if (palabra[cont] == vocales[nvocales])
		{
		  palabra[cont] = 'o';
		}
	    }
	}
    }
  ;
  cout << "palabra nueva: " << palabra;
  cin >> salir;

}

