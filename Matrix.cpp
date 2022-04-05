#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>

#include "Matrix.hpp"
using namespace zich;

namespace zich{
        
        // a contructor
        Matrix::Matrix(vector<double> matrix, int row, int column){
                this->matrix = matrix;
                this->row=row;
                this->column= column;
        }

        // a decontructor
        Matrix::~Matrix(){}

        //PLUS,ADD,PLUS ONRI
        void operator+= (const Matrix& mat, const Matrix& mat1){}
        Matrix operator+ (const Matrix& mat, const Matrix& mat1){return mat;}
        Matrix operator+ (const Matrix& mat){return mat;}

        //MINUS,SUB,SUB ONRI
        void operator-= (const Matrix& mat, const Matrix& mat1){}
        Matrix operator- (const Matrix& mat, const Matrix& mat1){return mat;}
        Matrix operator- (const Matrix& mat){return mat;}

        //multi mat x scalar
        Matrix operator *= (double number, const Matrix& mat1){return mat1;}
        Matrix operator *= (const Matrix& mat, double number){return mat;}

        //multi mat x mat1
        Matrix operator * (const Matrix& mat, const Matrix& mat1){return mat1;}
        Matrix operator * (const Matrix& mat, double number){return mat;}
        Matrix operator * (double number,const Matrix& mat){return mat;}

        //boolean operator
        bool operator >(const Matrix& mat, const Matrix& mat1){return true;}
        bool operator >=(const Matrix& mat, const Matrix& mat1){return true;}
        bool operator < (const Matrix& mat, const Matrix& mat1){return true;}
        bool operator <=(const Matrix& mat, const Matrix& mat1){return true;}
        bool operator ==(const Matrix& mat, const Matrix& mat1){return true;}
        bool operator!=(const Matrix& mat, const Matrix& mat1){return true;}

        //add/or sub 1 (increment)
        void operator++ (const Matrix& mat){}
        void operator-- (const Matrix& mat){}


        //IO stream operators
        ostream& operator<< (ostream& output, const Matrix& mat){return output;}
        istream& operator>> (istream& input , Matrix& mat){return input;}



}