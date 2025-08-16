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

void adminApplication()
{
    cout<<"\n----------------------------\n";
    cout<<"ADMIN APPLICATION PROCESS\n";
    cout<<"----------------------------\n";
    cout<<"\nWelcome to the admin application!\n";
    cout<<"\nHere you can manage the car rental system.\n";
    cout<<"\nChoose any functionality you want to implement.\n";
    int choice;
    while(true)
    {
        cout<<"1. Add new car to the system\n"; 
        cout<<"2. Answer customer queries\n";
        cout<<"3. Logout from admin panel\n";
        cout<<"\nEnter your choice: \n";
        cin >> choice;
        if(choice == 1)
        {
            cout<<"\nAdding new car to the system...\n";
            cout<<"\nNew car added successfully!\n";
        }
        else if(choice == 2)
        {
            cout<<"\nAnswering customer queries...\n";
            cout<<"\nAll customer queries answered successfully!\n";
        }
        else{
            break;
        }
    }
    cout<<"\nLogging out from admin application...\n";
    cout<<"\nThank you for using the admin application!\n";
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
                adminApplication();                              
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