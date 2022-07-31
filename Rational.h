//
//  Rational.h
//  opp
//
//  Created by אליה שיפרוביץ on 27/07/2022.
//

#ifndef Rational_h
#define Rational_h

#include <stdio.h>
#include "Polynomial.h"
#include <iostream>
using namespace std;

class Rational{
    
    //-----mambers---------------
private:

    Polynomial nom;
    Polynomial denom;
    
public:
    
    
//---------freinds------------------------------------
    
//---------constructers/destructers-------------------
   
    Rational ();
    Rational (Polynomial&, Polynomial&);
    ~Rational(){}
        
//---------getters------------
    
   Polynomial getNom() ;
    Polynomial getDenom();
    
//---------setters------------
  
//---------funcs--------------
   
    void print();
};
 

#endif /* Rational_h */


