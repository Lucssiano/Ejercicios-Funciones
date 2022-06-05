/* 5- Desarrollar una función que dados n y m devuelva el combinatorio de m tomados de a n.
Usar función punto 2
m!/n!(m-n)! */

#include <iostream>

using namespace std;

int factorial(int a);
int combinatorio(int m, int n);

int main()
{
  int n, m;
  cout << "Ingrese dos valores: ";
  cin >> m >> n;
  cout << combinatorio(m, n);
  return 0;
}

int factorial(int a)
{
  unsigned factorial = 1;

  for (int i = 1; i <= a; i++)
  {
    factorial *= i;
  }

  cout << "Factorial " << factorial << endl;
  return factorial;
}

int combinatorio(int a, int b)
{
  int combinatorio;
  combinatorio = factorial(a) / (factorial(b) * factorial(a - b));
  return combinatorio;
}