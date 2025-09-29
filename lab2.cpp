/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double grav, speed, t, mass, dragCoefficient, step1, step2, tMax1, tMax2;
  grav = 9.81;
  t = 0;
  tMax1 = 1.0;
  tMax2 = 5.0;
  step1 = 0.25;
  step2 = 1.0;
  
  cout << "Mass=";
  cin >> mass;
  cout << "Drag coefficient=";
  cin >> dragCoefficient;
  
  while (t < tMax1) {
    speed = sqrt(grav * mass / dragCoefficient) * tanh ( t * sqrt(grav * dragCoefficient / mass));
    t = t + step1;
    
    cout << "Время:" << t << endl
         << "Скорость:" << speed << endl;
  }
  
  do {
    speed = sqrt(grav * mass / dragCoefficient) * tanh ( t * sqrt(grav * dragCoefficient / mass));
    t = t + step2;
    
    cout << "Time:" << t << endl
         << "Speed:" << speed << endl;
  }  while (t < tMax2);
  
}