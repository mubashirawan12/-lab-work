//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;
//    cout << "Enter a positive number: ";
//    cin >> N;
//
//    cout << "Numbers from 1 to " << N << " are: ";
//    for (int i = 1; i <= N; i++) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter a number to display its multiplication table: ";
//    cin >> num;
//
//    cout << "Multiplication table of " << num << ":\n";
//    for (int i = 1; i <= 10; i++) {
//        cout << num << " x " << i << " = " << num * i << endl;
//    }
//
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int N, sum = 0;
//    cout << "Enter a positive number: ";
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        sum += i;
//    }
//
//    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;
//    cout << "Enter the number of rows: ";
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;  // Using long long to handle large numbers

    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << N << " is: " << factorial << endl;
    }

    return 0;
}



