//
//  Polynomial.cpp
//
//  Created by אליה שיפרוביץ on 27/07/2022.
//

#include "Polynomial.h"



int Polynomial::_Max_Degree= 0;

//------------------------------------------

Polynomial::Polynomial(){
    
    _Poly_Degree = 0;
    _arry_of_poly = new double[0];
    _size_of_arry = 0;
}
//------------------------------------------

Polynomial::Polynomial(int size){
    
    _arry_of_poly =new double[size];
    
    for(int i=0;i<size;++i){
        _arry_of_poly[i] = 0;
    }
    _Poly_Degree = 0;
    _size_of_arry = size;
}
//------------------------------------------

Polynomial::Polynomial(double* arr,int size){
    
    _arry_of_poly =new double[size];
    _size_of_arry = size;
    for(int i=0;i<=size;++i){
        _arry_of_poly[i] = arr[i];
        if(arr[i]!=0){_Poly_Degree = i;}
    }
    
    _Max_Degree = _Max_Degree > _Poly_Degree ? _Max_Degree:_Poly_Degree;
}

Polynomial::Polynomial(Polynomial& p){
    
    this->_Poly_Degree = p._Poly_Degree;
    this->_size_of_arry = p._size_of_arry;
    this->_arry_of_poly = new double[_size_of_arry];
    for(int i=0;i<=_size_of_arry;++i){
        _arry_of_poly[i] = p._arry_of_poly[i];
    }
    _Max_Degree = _Max_Degree > _Poly_Degree ? _Max_Degree:_Poly_Degree;
}

//------------------------------------------

Polynomial::~Polynomial(){
    
    if(_size_of_arry>0)
        delete [] _arry_of_poly;
}

//------------------------------------------


void Polynomial::setCoeff(int place_in_arry, double coeff){
    
    this->_arry_of_poly[place_in_arry] = coeff;
    
        _Poly_Degree = 0;
        for(int i=0;i<_size_of_arry;++i){
            if(_arry_of_poly[i]!=0)
                _Poly_Degree = i;
        }
    
}


//------------------------------------------


int Polynomial::getMaxDegree(){
    
    return _Max_Degree;
}

//------------------------------------------

void Polynomial::print(){
    
    if(!this->_Poly_Degree){ cout<<"Polynomial = "<<_Poly_Degree<<endl;}
    
    else if(this ->_Poly_Degree){
        cout<<"Polynomial = ";
        for(int i=0;i<=_Poly_Degree;++i){
            if(i==0) cout<<_arry_of_poly[i];
            else
                cout<<"+"<<_arry_of_poly[i]<<"X^"<<i;
        }
        cout<<endl;
        }
   
}

//------------------------------------------

 int Polynomial::getDegree(bool a) const{  // returns actual degree if true else returns size of allocation
    
    if(a)
        return  _Poly_Degree;
    else
        return _size_of_arry;
    
}

//------------------------------------------

double Polynomial::getCoeff(int index) const{
    
    if(index >_Poly_Degree || index < 0) return 0;
    else
        return this->_arry_of_poly[index];
}
