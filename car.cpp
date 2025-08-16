#include<iostream>
using namespace std;

void admin()
{
    cout<<"\n----------------------------\n";
    cout<<"ADMIN PROCESS\n";
    cout<<"----------------------------\n";
    string username, password,check;
    cout<<"Admin check? (yes/no): \n";
    cin >> check;
    if (check == "yes") 
    {
        while(true)
        {
            cout << "\nAdmin login check" << endl;
            cout << "Enter username: ";
            cin >> username;    
            cout << "Enter password: ";
            cin >> password;
            if (username == "admin" && password == "admin123") 
            {
                cout << "\nAdmin login successful!" << endl;
                //adminApplication();                              
                break; 
            } 
            else 
            {
                cout << "\nInvalid username password. Please try again." << endl;
            }
        }
    }
    else
    {
        cout << "Exiting admin check." << endl;
        // registeredUser();
    }
    
}                                                                                   

int main()
{
    cout<<"Welcome to car rental system"<<endl;
    cout<<"\nChecking admin credentials..."<<endl;
    admin();
    cout<<"\nThank you for using the car rental system!"<<endl;
    cout<<"\n\n";
}