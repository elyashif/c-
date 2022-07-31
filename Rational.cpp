//
//  Rational.cpp
//
//  Created by אליה שיפרוביץ on 27/07/2022.
//


#include "Rational.h"

//---------constructers/destructers-------------------
Rational::Rational () :nom(0),denom(1){}

Rational::Rational (Polynomial& a, Polynomial& b) : nom(a),denom(b) {}

//---------funcs-------------------
void Rational::print(){
    
    nom.print();
    cout<<"-----------"<<endl;
    if(!nom.getDegree(true)){cout<<"Polynomial = 1"<<endl;}
    else
        denom.print();
}

Polynomial Rational::getNom(){
    
    return this->nom;
}


Polynomial Rational::getDenom(){
    
    return this->denom;
}
