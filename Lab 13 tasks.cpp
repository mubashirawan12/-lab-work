//#include<iostream>
//using namespace std;
//int main(){
//	int var=20;
//	int *ptr;
//	ptr=&var;
//	cout<<"The number is : "<<*ptr<<endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int var=20;
//	int *ptr;
//	ptr=&var;
//	*ptr=40;
//	cout<<"The number is : "<<*ptr<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3]={2,5,7};
//	int *ptr;
//	ptr=arr;
//	for(int i=0;i<3;i++){
//		
//	cout<<"The number is : "<<ptr<<endl;
//	cout<<"The number is : "<<*ptr<<endl;
//	ptr++;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int num(int *a,int *b){
//	int c=*a;
//	*a=*b;
//	*b=c;
//}
//int main(){
//	int a=20;
//	int b=40;
//	cout<<"a = "<<a<<"b = "<<b<<endl;
//	num(&a,&b);
//	cout<<"a = "<<a<<"b = "<<b<<endl;
//
//}



//***********ptr**********
//#include<iostream>
//using namespace std;
//int main(){
//	int a=45;
//	int *ptr=NULL;
//	ptr=&a;
//	if(ptr==NULL){
//		cout<<"NULL pointer"<<endl;
//	}else{
//		cout<<*ptr<<endl;
//	}
//}



//**********ptr*********8
//#include<iostream>
//using namespace std;
//int main(){
//	int var=15;
//	void *ptr;
//	ptr=&var;
//	cout<<*(int*)ptr<<endl;
//	return 0;
//}

//***********home task********

#include <iostream>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* ptr = new int;  

    // Assign value to dynamically allocated memory
    *ptr = 100;


    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;


    delete ptr;

    
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size]; 

    
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Stored numbers: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    delete[] arr;

    return 0;
}

