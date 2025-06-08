#include <iostream>
using namespace std;

class A {

public :
 virtual void print(){

cout << "Inside  Print of Class A " << endl ;

}

};

class B : public A {

public :
 void print(){

  cout << "Inside Print Of class B " << endl ;

 }

};


int main(){

//A a ;
//a.print();

//B b ;
//b.print();


 //A a ;
//A *p ;
//p = &a ;
//p -> print();



B b ;
A *p ;
p = & b ;
p -> print();






}