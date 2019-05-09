#include <iostream>
#include"myCalculatorLib.h"

  myCal::myCal():num1(0),num2(1){}
void   myCal::get_num(){std::cout<<"Enter the number"<<std::endl ;std::cin>>num1>>num2;}
double myCal::add(){return(num1+num2);}
double myCal::sub(){return(num1-num2);}
void   myCal::print(double& _result) { std::cout << _result << std::endl;}


//int add(int num1, int num2){return (num1+num2);}