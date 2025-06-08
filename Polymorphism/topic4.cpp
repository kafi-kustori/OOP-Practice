#include <iostream>
using namespace std;

 class A {

public :
virtual void print() = 0 ;

};

class B : public A {

public :
 void print(){

  cout << "Inside Print Of class B " << endl ;

 }

};


int main(){

B b ;
A *p ;
p = &b ;
p -> print();




}