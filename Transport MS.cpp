
#include <iostream>
#include <string>

using namespace std;

//Declaring variables 
int choice;
int transport_id;
string transport_name;
string transport_type;
int seat_available;
int student_id;
string student_name;
int booking_id;

//Declaring functions
void transport_details();
void student_details();
void booking_details();

int main(){
    cout<<"Main menu"<<endl;
    cout<<"1) Transport details"<<endl;
    cout<<"2) Student details"<<endl;
    cout<<"3) Booking details"<<endl;
    cout<<"4) Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    
    switch(choice){
        case 1: 
            transport_details();
            break;
        case 2:
            student_details();
            break;
        case 3:
            booking_details();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }
    return 0;
}

void transport_details(){
    int choice_1;
    cout<<"Transport details"<<endl;
    cout<<"1) View all transport"<<endl;
    cout<<"2) Add transport"<<endl;
    cout<<"3) Delete transport"<<endl;
    cout<<"4) Update transport"<<endl;
    cout<<"5) Search transport"<<endl;
    cout<<"6) Main menu"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice_1;
    
    switch(choice_1){
        case 1:
           transport_details();
            break;
        case 2:
            cout<<"Add transport"<<endl;
            cout<<"Enter transport id : ";
            cin>>transport_id;
            cout<<"Enter transport name : ";
            cin>>transport_name;
            cout<<"Enter transport type : ";
            cin>>transport_type;
            cout<<"Enter how many seat available : ";
            cin>>seat_available;
            char choice_2;
            cout<<"Press enter (Y) to add another transport or enter (N) to go main menu : ";
            cin>>choice_2;
            if(choice_2 == 'Y' || choice_2 == 'y'){
                transport_details();
            }
            else if(choice_2 == 'N' || choice_2 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 3:
            cout<<"Delete transport"<<endl;
            cout<<"Enter transport id : ";
            cin>>transport_id;
            char choice_3;
            cout<<"Press enter (Y) to delete another transport or enter (N) to go main menu : ";
            cin>>choice_3;
            if(choice_3 == 'Y' || choice_3 == 'y'){
                transport_details();
            }
            else if(choice_3 == 'N' || choice_3 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 4:
            cout<<"Update transport"<<endl;
            cout<<"Enter transport id : ";
            cin>>transport_id;
            cout<<"Enter transport name : ";
            cin>>transport_name;
            cout<<"Enter transport type : ";
            cin>>transport_type;
            char choice_4;
            cout<<"Press enter (Y) to update another transport or enter (N) to go main menu : ";
            cin>>choice_4;
            if(choice_4 == 'Y' || choice_4 == 'y'){
                transport_details();
            }
            else if(choice_4 == 'N' || choice_4 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 5:
            cout<<"Search transport"<<endl;
            cout<<"Enter transport id : ";
            cin>>transport_id;
            //Display transport details
            char choice_5;
            cout<<"Press enter (Y) to search another transport or enter (N) to go main menu : ";
            cin>>choice_5;
            if(choice_5 == 'Y' || choice_5 == 'y'){
                transport_details();
            }
            else if(choice_5 == 'N' || choice_5 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 6:
            main();
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }

}
void student_details(){
    int choice_1;
    cout<<"Student details"<<endl;
    cout<<"1) View all student"<<endl;
    cout<<"2) Add student"<<endl;
    cout<<"3) Delete student"<<endl;
    cout<<"4) Update student"<<endl;
    cout<<"5) Search student"<<endl;
    cout<<"6) Main menu"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice_1;
    
    switch(choice_1){
        case 1:
            //Display all students
            break;
        case 2:
            cout<<"Add student"<<endl;
            cout<<"Enter student id : ";
            cin>>student_id;
            cout<<"Enter student name : ";
            cin>>student_name;
            char choice_2;
            cout<<"Press enter (Y) to add another student or enter (N) to go main menu : ";
            cin>>choice_2;
            if(choice_2 == 'Y' || choice_2 == 'y'){
                student_details();
            }
            else if(choice_2 == 'N' || choice_2 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 3:
            cout<<"Delete student"<<endl;
            cout<<"Enter student id : ";
            cin>>student_id;
            char choice_3;
            cout<<"Press enter (Y) to delete another student or enter (N) to go main menu : ";
            cin>>choice_3;
            if(choice_3 == 'Y' || choice_3 == 'y'){
                student_details();
            }
            else if(choice_3 == 'N' || choice_3 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 4:
            cout<<"Update student"<<endl;
            cout<<"Enter student id : ";
            cin>>student_id;
            cout<<"Update student name : ";
            cin>>student_name;
            char choice_4;
            cout<<"Press enter (Y) to update another student or enter (N) to go main menu : ";
            cin>>choice_4;
            if(choice_4 == 'Y' || choice_4 == 'y'){
                student_details();
            }
            else if(choice_4 == 'N' || choice_4 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 5:
            cout<<"Search student"<<endl;
            cout<<"Enter student id : ";
            cin>>student_id;
            //Display student details
            char choice_5;
            cout<<"Press enter (Y) to search another student or enter (N) to go main menu : ";
            cin>>choice_5;
            if(choice_5 == 'Y' || choice_5 == 'y'){
                student_details();
            }
            else if(choice_5 == 'N' || choice_5 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 6:
            main();
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }

}

void booking_details(){
    int choice_1;
    cout<<"Booking details"<<endl;
    cout<<"1) View all booking"<<endl;
    cout<<"2) Add booking"<<endl;
    cout<<"3) Delete booking"<<endl;
    cout<<"4) Update booking"<<endl;
    cout<<"5) Search booking"<<endl;
    cout<<"6) Booking seat"<<endl;
    cout<<"7) Show how many seats are booked or how many remaining"<<endl;
    cout<<"8) Main menu"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice_1;
    
    switch(choice_1){
        case 1:
            //Display all bookings
            break;
        case 2:
            cout<<"Add booking"<<endl;
            cout<<"Enter booking id : ";
            cin>>booking_id;
            cout<<"Enter student id : ";
            cin>>student_id;
            cout<<"Enter transport id : ";
            cin>>transport_id;
            char choice_2;
            cout<<"Press enter (Y) to add another booking or enter (N) to go main menu : ";
            cin>>choice_2;
            if(choice_2 == 'Y' || choice_2 == 'y'){
                booking_details();
            }
            else if(choice_2 == 'N' || choice_2 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 3:
            cout<<"Delete booking"<<endl;
            cout<<"Enter booking id : ";
            cin>>booking_id;
            char choice_3;
            cout<<"Press enter (Y) to delete another booking or enter (N) to go main menu : ";
            cin>>choice_3;
            if(choice_3 == 'Y' || choice_3 == 'y'){
                booking_details();
            }
            else if(choice_3 == 'N' || choice_3 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 4:
            cout<<"Update booking"<<endl;
            cout<<"Enter booking id : ";
            cin>>booking_id;
            cout<<"Update student id : ";
            cin>>student_id;
            cout<<"Update transport id : ";
            cin>>transport_id;
            char choice_4;
            cout<<"Press enter (Y) to update another booking or enter (N) to go main menu : ";
            cin>>choice_4;
            if(choice_4 == 'Y' || choice_4 == 'y'){
                booking_details();
            }
            else if(choice_4 == 'N' || choice_4 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 5:
            cout<<"Search booking"<<endl;
            cout<<"Enter booking id : ";
            cin>>booking_id;
            //Display booking details
            char choice_5;
            cout<<"Press enter (Y) to search another booking or enter (N) to go main menu : ";
            cin>>choice_5;
            if(choice_5 == 'Y' || choice_5 == 'y'){
                booking_details();
            }
            else if(choice_5 == 'N' || choice_5 == 'n'){
                main();
            }
            else{
                cout<<"Invalid Choice!"<<endl;
            }
            break;
        case 6:
            //Booking seat
            break;
        case 7:
            //Show how many seats are booked or how many remaining
            break;
        case 8:
            main();
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }

}


