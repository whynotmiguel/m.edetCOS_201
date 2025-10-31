#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int numcourse;
    int numhouse;
    double lodgefee;
    double totalfees;
    double regfee;
    int days;
    cout << "Welcome to PAU's Short Courses regitration programme" <<endl;
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << ", please pick a number between 1 and 5 for your course (1: Photography, 2: Painting, 3: Fish Farming, 4: Baking, 5: Public Speaking): " << endl;
    cin >> numcourse;
    if (numcourse == 1){
        regfee= 10000.00;
        days = 3;
        cout <<"You have picked Photography. The registation fee is " << regfee << "."<<endl;
    }
    else if (numcourse == 2){
        regfee= 8000.00;
        days = 5;
        cout <<"You have picked Painting. The registation fee is " << regfee << "."<<endl;
    }
    else if (numcourse == 3){
        regfee= 15000.00;
        days = 7;
        cout <<"You have picked Fish farming. The registation fee is " << regfee << "."<<endl;
    }
    else if (numcourse == 4){
        regfee= 13000.00;
        days = 5;
        cout <<"You have picked Baking. The registation fee is " << regfee << "."<<endl;
    }
    else if (numcourse == 5){
        regfee= 5000.00;
        days = 2;
        cout <<"You have picked Photography. The registation fee is " << regfee << "."<<endl;
    }
    else{
        cout<<"Invalid input. Please start over and read the instructions carefully";
        return 0;
    }
    
    cout <<"Pick a number btwn 1 and 5 for your lodgings (1: House A, 2: House B, 3: House C, 4: House D, 5: House E)"<<endl;
    cin >> numhouse;
    if (numhouse == 1){
       double lodgepda= 10000.00 ;
       cout<<"You have selected House A. The lodging per day fee is " << lodgepda <<"." <<endl;
       lodgefee= lodgepda * days;
       cout<<"Your fee has been calculated to be "<<lodgefee<< "."<<endl;
    }
    else if(numhouse == 2){
       double lodgepdb= 8000.00 ;
       cout<<"You have selected House B. The lodging per day fee is " << lodgepdb <<"." <<endl;
       lodgefee= lodgepdb * days;
       cout<<"Your fee has been calculated to be "<<lodgefee<< "."<<endl;
    }
    else if (numhouse == 3){
       double lodgepdc= 15000.00 ;
       cout<<"You have selected House C. The lodging per day fee is " << lodgepdc <<"." <<endl;
       lodgefee= lodgepdc * days;
       cout<<"Your fee has been calculated to be "<<lodgefee<< "."<<endl;
    }
    else if (numhouse == 4){
       double lodgepdd= 13000.00 ;
       cout<<"You have selected House D. The lodging per day fee is " << lodgepdd <<"." <<endl;
       lodgefee= lodgepdd * days;
       cout<<"Your fee has been calculated to be "<<lodgefee<< "."<<endl;
    }
    else if (numhouse == 5){
       double lodgepdd= 5000.00 ;
       cout<<"You have selected House E. The lodging per day fee is " << lodgepdd <<"." <<endl;
       lodgefee= lodgepdd * days;
       cout<<"Your fee has been calculated to be "<<lodgefee<< "."<<endl;
    }
    else{
        cout<<"Invalid Input. Please start over and read instructions carefully.";
        return 0;
    }
    
        

    bool paustudent;
    cout<<"You are already a student of PAU? True/False"<<endl;
    cin>> paustudent;
    if (paustudent == true, regfee > 12000.00, days>5)
    {
        cout<<"You get a 5 percent discount on your lodgings and 3 percent discount on registration."<<endl;
        totalfees=(lodgefee*1.05)+(regfee *1.03);
        cout<<"Your total is: "<<totalfees <<"."<<endl;
    }
    else if (paustudent == true)
    {
        cout<<"You get a 5 percent discount on your total fees";
        totalfees=(lodgefee*1.05)+regfee;
        cout<<"Your total is: "<<totalfees <<"."<<endl;
    }
    else if (paustudent == false, regfee > 12000.00, days>5)
    {
        cout<<"You get a 3 percent discount on registration"<<endl;
        totalfees=lodgefee+(regfee *1.03);
        cout<<"Your total is: "<<totalfees <<"."<<endl;
    }
    else
    {
        totalfees=lodgefee+regfee;
        cout<<"Your total is: "<<totalfees <<"."<<endl;
    }

    int seed = time(0);
    srand(seed);
    int promo = rand()%100+1;
    if (promo == 7,promo == 77 ){
        cout<<"Congratulations! You were given a 500 naira discount."<<endl;
        cout<< promo<<endl;
        double df_fees=totalfees-500;
        cout<<"Discounted and Final fees are: "<< df_fees<<"."<<endl;
    }
    else{
        cout<<"Sorry your number wasn't the promo number. Better luck next time!";
        cout<< promo;
        cout<<"Your fee still remains: "<<totalfees<< ".";
    }

    return 0;
}