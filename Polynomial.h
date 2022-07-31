//
//  Polynomial.h
//  opp
//
//  Created by אליה שיפרוביץ on 27/07/2022.
//

#ifndef Polynomial_h
#define Polynomial_h

#include <stdio.h>
#include <iostream>
using namespace std;


class Polynomial{
    
private:
    static int _Max_Degree;
    int _Poly_Degree;
    int _size_of_arry;
    double* _arry_of_poly;
   
    
public:
    

    //----constructers-------
    
    Polynomial();
    Polynomial(int);
    Polynomial(double*,int);
    Polynomial(Polynomial&);
    ~Polynomial();
    
    //----funcs------
    static int getMaxDegree();
    void print();
    
    
    //------setters-------------
    
    void setCoeff(int, double);
    
    //------getters-------------
    int getDegree(bool) const;
    double getCoeff(int index) const;
    
};

#endif /* Polynomial_h */
