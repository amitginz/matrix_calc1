#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>

namespace zich{
    class Matrix
    {
    private:
        int row;
        int column;
        vector<double> matrix;
    public:
        
        Matrix(vector<double> matrix, int row, int column);
        ~Matrix();
        //PLUS,ADD,PLUS ONRI
        friend void operator+= (const Matrix& mat, const Matrix& mat1);
        friend Matrix operator+ (const Matrix& mat, const Matrix& mat1);
        friend Matrix operator+ (const Matrix& mat);

        //MINUS,SUB,SUB ONRI
        friend void operator-= (const Matrix& mat, const Matrix& mat1);
        friend Matrix operator- (const Matrix& mat, const Matrix& mat1);
        friend Matrix operator- (const Matrix& mat);

        //multi mat x scalar
        friend Matrix operator *= (double number, const Matrix& mat1);
        friend Matrix operator *= (const Matrix& mat, double number);

        //multi mat x mat1
        friend Matrix operator * (const Matrix& mat, const Matrix& mat1);
        friend Matrix operator * (const Matrix& mat, double number);
        friend Matrix operator * (double number,const Matrix& mat);

        //boolean operator
        friend bool operator >(const Matrix& mat, const Matrix& mat1);
        friend bool operator >=(const Matrix& mat, const Matrix& mat1);
        friend bool operator < (const Matrix& mat, const Matrix& mat1);
        friend bool operator <=(const Matrix& mat, const Matrix& mat1);
        friend bool operator ==(const Matrix& mat, const Matrix& mat1);
        friend bool operator!=(const Matrix& mat, const Matrix& mat1);

        //add/or sub 1 (increment)
        friend void operator++ (const Matrix& mat);
        friend void operator-- (const Matrix& mat);


        //IO stream operators
        friend ostream& operator<< (ostream& output, const Matrix& mat);
        friend istream& operator>> (istream& input , Matrix& mat);

    };
    
    
    
};