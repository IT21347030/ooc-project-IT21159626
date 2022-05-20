#include"Payment.h"
#include<iostream>
using namespace std;
int main()
{
	Payment cp1;
	cp1.payment(21348,"2022/01/07","Card payment", 17000);
	
	
	Payment cp2;
	cp2.payment(21148,"2022/01/10","Card payment", 5000);
	
	
	Payment cp3;
	cp3.payment(21577,"2022/01/15","Cash payment", 7500);
	
	
	Payment cp4;
	cp4.payment(77848,"2022/01/11","Check payment", 80000);
	
	
	Payment cp5;
	cp5.payment(57912,"2022/01/24","Card payment", 10000);	
	return 0;
}

