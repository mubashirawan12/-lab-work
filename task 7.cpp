#include<iostream>
using namespace std;
int main()

//***************************************************lab 07*************************************//
/*
{int a;
cout<<"enter the no:";
cin>>a;
if(a>0){
	cout<<"the no is positive";
       }
else if(a==0){cout<<"the no is zero";
       }
else{cout<<"the no is negative";
    }
}*/

/*
{int t;
cout<<"enter the temperature: ";
cin>>t;
if(t>=40)
{cout<<"stay indoor";
}else
if(t>30&&t<=39)
{cout<<"drink plenty of water";
}else 
if(t>=20&&t<=29)
{cout<<"the weather is pleasant and suitable for out door activities";
}
else{cout<<"I recommended to wear warm clothes to stay confortable in the cooler weather";
}
}*/
//program no 3
/*

{
     string name;
	 string password;
	 cout<<"enter your user name:";
	 cin>>name;
	 cout<<"enter your password:";
	 cin>>password;
	 if(name=="admin" && password=="12345")
	 {cout<<"Acess granted";
		 }	
	else if(password!="12345"&&name=="admin")
	{cout<<"wrong password";
	}
	else if(password=="12345" &&name !="admin")
	{cout<<"user not found";
	}
	else {cout<<" both are incorrect ";
	}
}*/

/*
//program no 4
{int percentage,marksa,marksb,marksc,allmarks;
cout<<"enter marks one by one:";
cin>>marksa>>marksb>>marksc;
allmarks=marksa+marksb+marksc;
char grade;
percentage=(allmarks/3);

if(percentage>=90){
	grade='A';
	cout<<"your grade is :"<<grade;
}else if(percentage>=80)
{grade='B';
cout<<"your grade is :"<<grade;
}else if(percentage>=70)
{grade='C';
cout<<"your grade is :"<<grade;
}else if(percentage>=60){
	grade='D';
	cout<<"your grade is :"<<grade;
}else{
	grade='F';
	cout<<"your grade is :"<<grade;
}

if(marksa<60 ||marksb<60 ||marksc<60){
	cout<<"\nyou are failed";
	return 0;
}
if(grade=='A'||allmarks>=270){
	cout<<"\nyou are eligible for a merit scholarship";
}else
if(grade=='B'||allmarks>=240){
	cout<<"\nyou are eligible for a regular scholarship";
}else{
	cout<<"\nyou are not elligible for any scholarship";
}




}*/


//task 5******//
// {
//    int age;
//    double income;
//
//  
//    cout << "Enter your age: ";
//    cin >> age;
//    
//    // Check age requirement
//    if (age < 18) {
//        cout << "You are not eligible for a loan" << endl;
//    } else {
//        cout << "Enter your annual income ($): ";
//        cin >> income;
//        
//        
//        if (income < 30000) {
//            cout << "You  are not eligible for a loan because your income is below $30,000." << endl;
//        } else {
//            cout << "Congratulations! You are eligible for a loan." << endl;
//        }
//    }
//
//    return 0;
//}

//*****task 7***
// {
//    string username, password, role;
//
//    
//    string correctUsername = "admin";
//    string correctPassword = "password123";
//
//    
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//
//    if (username == correctUsername && password == correctPassword) {
//        cout << "Authentication Successful!\n";
//
//       
//        cout << "Enter your role (Admin/Guest/User/etc.): ";
//        cin >> role;
//
//       
//        if (role == "Admin") {
//            cout << "Full Access granted.\n";
//        } else if (role == "Guest") {
//            cout << "Limited Access granted.\n";
//        } else {
//            cout << "No Access granted.\n";
//        }
//
//    } else {
//        cout << "Authentication Failed. Access Denied.\n";
//    }
//
//    return 0;
//}


	
