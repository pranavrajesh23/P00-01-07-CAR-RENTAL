#include<iostream>
using namespace std;

void registeredUser()
{
    cout<<"\n----------------------------\n";
    cout<<"REGISTERED USER PROCESS\n";
    cout<<"----------------------------\n";
    string username, password,check;
    cout<<"Registered User check? (yes/no): \n";
    cin >> check;
    if (check == "yes")
    {
        cout<<"\nRedirecting to login page...\n";
    }
    else
    {
        cout<<"\nNew uses in the system!\n";
        cout<<"\nPlease register first.\n";
        cout<<"Enter username: ";
        cin >> username;    
        cout<<"Enter password: ";
        cin >> password;
        cout<<"\nRegistration successful!\n";
        //saveToDatabase(username, password);
        cout<<"\nYou can now login with your credentials.\n";
    }
    //login();
}

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
        registeredUser();
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