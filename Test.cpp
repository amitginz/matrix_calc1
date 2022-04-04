/**
 *
 * AUTHORS: amit ginzberg
 * 
 * Date: 2021-04
 */
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>

#include "Matrix.hpp"
using namespace zich;


TEST_CASE("bad-input-illlegal multi"){
    for(double i = 0 ; i < 50; i++){
        vector<double> mati = {i,0,0,0,i,0,0,i,0};
        vector<double> mati1 = {i,0,0,0,i,0,0,i,0,0,0,i,i,0,0};
        Matrix mat1(mati,3,3);
        Matrix mat2(mati1,4,4);
        CHECK_THROWS(mat2 + mat1);
        CHECK_THROWS(mat2 += mat1);
        CHECK_THROWS(mat2 + mat1);
        CHECK_THROWS(mat2 += mat1);
        CHECK_THROWS(mat2 - mat1);
        CHECK_THROWS(mat2 -= mat1);
        CHECK_THROWS(mat2 * mat1);
        CHECK_NOTHROW(mat1 * i);
        CHECK_NOTHROW(i * mat1);
        CHECK_NOTHROW(mat2 *= i);
        CHECK_NOTHROW(i *= mat2);

        ;
    }
}



TEST_CASE("Good input") {
    for(double i = 0 ; i < 50; i++){
        vector<double> mati = {i,0,0,0,i,0,0,i,0};
        vector<double> mati1 = {i,0,0,0,i,0,0,i,0};
        Matrix mat1(mati,3,3);
        Matrix mat2(mati1,3,3);
        CHECK_NOTHROW(mat2 + mat1);
        CHECK_NOTHROW(mat2 += mat1);
        CHECK_NOTHROW(mat2 + mat1);
        CHECK_NOTHROW(mat2 += mat1);
        CHECK_NOTHROW(mat2 - mat1);
        CHECK_NOTHROW(mat2 -= mat1);
        ;
    }
}

TEST_CASE("good input") {
	
   for(double i = 0 ; i< 50; i++){
        vector<double> mati = {i,0,0,0,i,0,0,0,i};
        vector<double> mati1 = {5*i,0,0,0,5*i,0,0,5*i,0};
        Matrix mat1(mati,3,3);
        Matrix mat2(mati1,3,3);
        CHECK(mat2 == 5*mat1); 
        CHECK(mat2*3 == 15*mat1); 
        CHECK_FALSE(mat2*5 == 3*mat1); 
        CHECK((mat2 == 5*mat1) == true);
        CHECK_FALSE((mat2 == 5*mat1) == false); 
   }
    

	
}