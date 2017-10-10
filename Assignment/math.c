#include "math.h"

int math(int num1, int num2, char Operator){
	if(Operator == "+"){
		return num1 + num2;
	}
	else if(Operator == "-"){
        return num1 - num2;
    }
	else if(Operator == "*"){
	        return num1 * num2;
    }
	else if(Operator == "/"){
	        return num1 / num2;
    }
	else if(Operator == "%"){
	        return num1 % num2;
    }
	return -1;
}
