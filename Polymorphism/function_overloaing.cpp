#include <iostream>
using namespace std ;

class test {


    public:
    int sum(int x){
       
       return x ;

    }

    int sum(int x , int y){

     return x + y;

    }

    float sum(float x , int y){

       return x + y ;

    }

    float sum(int x , float y){

        return x + y ;

    }

    float sum (float x , float y){

       return x + y ;

    }


};

int main(){

test t ;

cout<<" " <<  t.sum(10) << endl ; 
cout << " " <<  t.sum(10,20)<< endl ;
cout << " " <<  t.sum(10.2f,10)<< endl ;
cout << " " <<  t.sum(10,22.3f) << endl ;
cout << " " <<  t.sum(22.3f,55.3f) << endl ;




}
