
//#include "pch.h"
#include <iostream>
#include"myCalculatorLib.h"


int main()
{

	double result;
	myCal obj;
	obj.get_num();
	std::cout<<"Sum and Difference are : "<<std::endl;
	result=obj.add();
	obj.print(result);
	result=obj.sub();
	obj.print(result);
	return 0;
	
	/*int a=10, b=45;
	std::cout<<"The numbers are :  "<<a<<" ,and " <<b<<std::endl;
	std::cout<<"THE SUM IS :"<<add(a,b);
	*/
	return  0;

}

