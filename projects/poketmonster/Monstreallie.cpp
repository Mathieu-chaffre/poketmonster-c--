#include "Monstreallie.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Monstreallie::setPv(int _pv){

  pv += _pv;
  
};

int Monstreallie::getPv(){
  return pv;
}

Monstreallie::Monstreallie(): pv(100){};
