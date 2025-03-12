//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int N, i = 1;
//
//    cout << "Enter a positive number (N): ";
//    cin >> N;
//
//    if (N <= 0) {
//        cout << "Please enter a positive number greater than zero.\n";
//        return 1; 
//    }
//
//
//    while (i <= N) {
//        cout << i << " ";
//        i++; 
//    }
//
//    cout << endl; 
//    return 0;
//}



/// task 2///
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num, i = 1;
//
//
//    cout << "Enter a number to display its multiplication table: ";
//    cin >> num;
//
//    
//    if (num == 0) {
//        cout << "Multiplication table for zero is always zero.\n";
//        return 1;
//    }
//
//    while (i <= 10) {
//        cout << num << " x " << i << " = " << (num * i) << endl;
//        i++; 
//    }
//
//    return 0;
//}

///task 3 /////
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;
//
//    while (true) {
//        cout << "Enter a positive number: ";
//        cin >> num;
//
//        if (num > 0) {
//            cout << "You entered: " << num << endl;
//            break; 
//        } else {
//            cout << "Error: Please enter a positive number greater than zero.\n";
//        }
//    }
//
//    return 0;
//}

//task 4////****///
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int sum = 0, i = 1;
//
//
//    while (i <= 5) {
//        sum += i;
//        i++;     
//    }
//
//
//    cout << "The sum of the first five natural numbers is: " << sum << endl;
//
//    return 0;
//}
//task 5///
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    double balance = 1000.0; 
//    int choice;
//    double amount;
//
//    while (true) {
//        
//        cout << "\n===== Simple Banking System =====\n";
//        cout << "1. Deposit Money\n";
//        cout << "2. Withdraw Money\n";
//        cout << "3. Check Balance\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            
//            cout << "Enter amount to deposit: ";
//            cin >> amount;
//            if (amount > 0) {
//                balance += amount;
//                cout << "Deposit successful! New balance: $" << balance << endl;
//            } else {
//                cout << "Invalid amount! Please enter a positive value.\n";
//            }
//        } 
//        else if (choice == 2) {
//        
//            cout << "Enter amount to withdraw: ";
//            cin >> amount;
//            if (amount > 0 && amount <= balance) {
//                balance -= amount;
//                cout << "Withdrawal successful! New balance: $" << balance << endl;
//            } else {
//                cout << "Invalid transaction! Either insufficient balance or invalid amount.\n";
//            }
//        } 
//        else if (choice == 3) {
//            
//            cout << "Your current balance is: $" << balance << endl;
//        } 
//        else if (choice == 4) {
//        
//            cout << "Thank you for using our banking system!\n";
//            break;
//        } 
//        else {
//            cout << "Invalid choice! Please enter a number between 1 and 4.\n";
//        }
//    }
//
//    return 0;
//}


///task 6//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    string correctPassword = "1234";  
//    string userPassword;
//
//    do {
//        cout << "Enter the password: ";
//        cin >> userPassword;
//
//        if (userPassword != correctPassword) {
//            cout << "Incorrect password! Try again.\n";
//        }
//    } while (userPassword != correctPassword);
//
//    cout << "Access granted!\n";
//    return 0;
//} 



///task 7///
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int choice, quantity;
//    double totalBill = 0;
//    char continueOrdering;
//
//    do {
//        cout << "\n----- Restaurant Menu -----\n";
//        cout << "1. Chicken Karahi - $15 per kg\n";
//        cout << "2. Biryani - $10 per plate\n";
//        cout << "3. BBQ Tikka - $12 per piece\n";
//        cout << "4. Drinks - $3 per bottle\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice (1-5): ";
//        cin >> choice;
//
//    
//        switch (choice) {
//            case 1:
//                cout << "Enter quantity (kg): ";
//                cin >> quantity;
//                totalBill += quantity * 15;
//                break;
//            case 2:
//                cout << "Enter quantity (plates): ";
//                cin >> quantity;
//                totalBill += quantity * 10;
//                break;
//            case 3:
//                cout << "Enter quantity (pieces): ";
//                cin >> quantity;
//                totalBill += quantity * 12;
//                break;
//            case 4:
//                cout << "Enter quantity (bottles): ";
//                cin >> quantity;
//                totalBill += quantity * 3;
//                break;
//            case 5:
//                cout << "Thank you for visiting!\n";
//                return 0; 
//            default:
//                cout << "Invalid choice! Please select a valid option.\n";
//                continue;  
//        }
//
//    
//        cout << "Do you want to order more? (y/n): ";
//        cin >> continueOrdering;
//
//    } while (continueOrdering == 'y' || continueOrdering == 'Y');
//
//
//    cout << "Your total bill is: $" << totalBill << "\n";
//    cout << "Thank you for ordering!\n";
//
//    return 0;
//}



