#include"Payment.h"
#include<iostream>
#include<cstring>
using namespace std;

 void Payment::payment(int P_ID, string P_Date, string P_Mode, int P_Amount){

   paymentID = P_ID;
   paymentDate = P_Date;
   paymentMode = P_Mode;
   paymentAmount = P_Amount;
}
void Payment::displayPaymentDetails(){

	cout<<"Pyment ID: "<<paymentID<<endl;
	cout<<"Payment Date "<<paymentDate<<endl;
	cout<<"Payment Mode "<<paymentMode<<endl;
	cout<<"Payment Amount "<<paymentAmount<<endl;
}

void Payment::calPayment(){
	
}
void Payment::updateDetails(){
}

