/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int k, m, step2; 
  double g, v, t, step1;
  g = 9.81;
  t = 0;
  step1 = 0.25;
  step2 = 1;
  
  cout << "m=";
  cin >> m;
  cout << "k=";
  cin >> k;
  
  while (t < 1) {
    v = sqrt(g * m / k) * tanh ( t * sqrt(g * k / m) );
    t = t + step1;
    
    cout << t << endl
         << v << endl;
  }
  
  do {
    v = sqrt(g * m / k) * tanh ( t * sqrt(g * k / m) );
    t = t + step2;
    
    cout << t << endl
         << v << endl;
  }  while (t < 5);
  
}