#include <iostream>
using namespace std;

double raiz (double num1){
  double gues=1;
  double prom = num1;
  while ((prom-gues)>.00001){
  prom = (prom+gues)/2;
   gues = num1/prom;
 }
 return prom;
}

int main (){
  double num1, guess;
  cout<<"Please enter the number you want to calculate the square root: "<< endl;
  cin>> num1;
  cout<< "your answer is:"<< raiz(num1)<<endl;
  return 0;
}
