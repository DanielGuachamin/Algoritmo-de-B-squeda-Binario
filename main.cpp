#include <iostream>
#include <fstream>

using namespace std;


int main()
{
  ofstream Archivo_busqueda;
  int b,i,j,k;
  int a[10]={1,2,3,4,5,6,7,8,9};
  Archivo_busqueda.open("Binario.txt", ios::out);
  cout << "Ingrese el elemento a buscar: ";
  cin >> b;
  i= 0;
  j= 10-1;
  for (int c = 0; c < 9; ++c)
  {
    Archivo_busqueda << "Arreglo[" << c+1 << "]= " << a[c] << '\n' ;
  }
  Archivo_busqueda << "Elemento a buscarse es: " << b<< '\n' ;
  do 
  { 
    k= (i+j)/2;
    if (a[k]<=b)
      i=k+1;
    if (a[k]>=b)
      j= k-1;
  } while (i<=j);
  if (a[k] == b)
  {
    Archivo_busqueda << "El elemento ha sido encontrado y está en la ubicación: " << k+1 << '\n';
  }
  else
  {
    Archivo_busqueda << "El elemento no ha sido encontrado";
  }
  cout << "Elemento esta en " << a[k] << '\n';
}