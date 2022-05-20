#include <iostream>
using namespace std;
class Payment {
	
	private:
		
		int paymentID;
		string paymentDate;
		string paymentMode;
		int paymentAmount;
		
	public:
		
		void payment(int P_ID, string P_Date, string P_Mode, int P_Amount);
		void displayPaymentDetails();
		void updateDetails();
		void calPayment();
		  
};

