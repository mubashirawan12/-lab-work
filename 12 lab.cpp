#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int number;
cout<<"enter the number"<<endl;
cin>>number;
cout<<sqrt(number)<<endl;
cout<<abs(number)<<endl;
cout<<sin(number)<<endl;
cout<<cos(number)<<endl;
cout<<pow(number,3)<<endl;
}

         //program 2@@@***//
//void function()
//{
//	cout<<"Hello, welcome to the function"<<endl;
//	
//}
//int main()
//{
//	function();
//	return 0;
//}

///program 3//@@@@
//void even(int a)
//{
//	if(a%2==0)
//	
//	
//	{
//			cout<<"the number is even"<<endl;
//	}
//	else{
//	cout<<"the number is odd"<<endl;
//	
//}
//	
//}
//int main(){
//	int number;
//cout<<"enter the number"<<endl;
//cin>>number;
//
//	even(number);
//return 0;
//}
//program 4 //
//void  factorial(int a)
//{
//	int fact=1;
//	if(a>0){
//	
//	for(int i=1;i<=a; i++){
//		
//		fact*=i;
//		
//	}
//		cout<<fact;}
//	else if(a==0){
//		cout<<1;
//	}
//	else{
//		cout<<"not exsist";
//	}
//
//}
//int main(){
//	int num1;
//	cout<<"Enter any number: ";
//	cin>>num1;
//	factorial(num1);
//
//}
/*********** bill ******************///
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//// Function to display the menu
//void displayMenu() {
//    cout << "Welcome to Our Restaurant\n";
//    cout << "--------------------------\n";
//    cout << "1. Burger - $5.00\n";
//    cout << "2. Pizza - $8.00\n";
//    cout << "3. Pasta - $7.50\n";
//    cout << "4. Sandwich - $4.50\n";
//    cout << "5. Coffee - $3.00\n";
//    cout << "6. Exit\n";
//}
//
//// Function to calculate the cost of an item
//double calculateCost(int choice, int quantity) {
//    double price;
//    switch (choice) {
//        case 1: price = 5.00; break;
//        case 2: price = 8.00; break;
//        case 3: price = 7.50; break;
//        case 4: price = 4.50; break;
//        case 5: price = 3.00; break;
//        default: price = 0.00; 
//    }
//    return price * quantity;
//}
//
//// Function to calculate the final bill with tax
//double calculateFinalBill(double total) {
//    const double taxRate = 0.10;  // 10% tax
//    return total + (total * taxRate);
//}
//
//int main() {
//    int choice, quantity;
//    double total = 0.0;
//
//    do {
//        displayMenu();
//        cout << "Enter the number of your choice: ";
//        cin >> choice;
//
//        if (choice >= 1 && choice <= 5) {
//            cout << "Enter quantity: ";
//            cin >> quantity;
//            total += calculateCost(choice, quantity);
//        } else if (choice != 6) {
//            cout << "Invalid choice! Please try again.\n";
//        }
//
//    } while (choice != 6);
//
//    if (total > 0) {
//        double finalAmount = calculateFinalBill(total);
//        cout << fixed << setprecision(2);
//        cout << "Total before tax: $" << total << endl;
//        cout << "Total after 10% tax: $" << finalAmount << endl;
//    } else {
//        cout << "No items ordered.\n";
//    }
//
//    cout << "Thank you for dining with us!\n";
//    return 0;
//}




















