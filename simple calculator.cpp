#include<iostream>
using namespace std;
int main(){
	cout<<"Hello!"<<endl;
	cout<<"i am Munazha"<<endl;
	
	int choice;
	do{
	cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    double num,sum = 0,product =1 ;
    int n;
    switch(choice)
    {case 1:
    cout<<"How many numbers do you want to add?";
    cin>>n;
    for (int i = 0; i < n; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> num;
                sum += num;
            }
            cout << "Sum: " << sum << endl;
            break;
            case 2:
            cout << "How many numbers do you want to subtract? ";
            cin >> n;
            cout << "Enter number 1: ";
            cin >> sum;
            for (int i = 1; i < n; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> num;
                sum -= num;
            }
            cout << "Result: " << sum << endl;
            break;
            case 3:
            cout << "How many numbers do you want to multiply? ";
            cin >> n;
            cout << "Enter number 1: ";
            cin >> product;
            for (int i = 1; i < n; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> num;
                product *= num;
            }
            cout << "Product: " << product << endl;
            break;
            case 4:
            cout << "How many values do you want to divide? ";
            cin >> n;
            cout << "Enter number 1: ";
            cin >> sum;
            for (int i = 1; i < n; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> num;
                if (num == 0)
                {
                    cout << "Division by zero is not allowed!!!" << endl;
                    break;
                }
                sum /= num;
            }
            cout << "Result: " << sum << endl;
            break;
            case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;

	}
	}while (choice!=5);
	return 0;}
