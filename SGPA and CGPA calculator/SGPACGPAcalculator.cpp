#include <string>
#include <iostream>
using namespace std;

void calculate_SGPA();
void calculate_CGPA();
void quit();

int main()
{
    system("cls");
    int menu;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"                     SGPA & CGPA Calculator                         "<<endl;
    cout<<"--------------------------------------------------------------------\n"<<endl;
    cout<<"                 MENU:"<<endl;
    cout<<"                 1. Calculate SGPA"<<endl;
    cout<<"                 2. Calculate CGPA"<<endl;
    cout<<"                 3. Exit\n"<<endl;
    cout<<"--------------------------------------------------------------------\n"<<endl;
    
    back:
    cout<<"Enter your choice: ";
    cin>>menu;
    switch(menu)
    {
        case 1:
        calculate_SGPA();
        break;

        case 2:
        calculate_CGPA();
        break;

        case 3:
        quit();
        break;

        default:
        cout<<"You have entered a wrong input."<<endl;
        cout<<"Try again!\n"<<endl;
        goto back;
        break;
    }
}

void calculate_SGPA()
{
    int n;
    system("cls");
    cout<<"--------- SGPA Calculating ---------"<<endl;
    cout<<"\nNumber of subject : ";
    cin>>n;
    cout<<"\n-------------------------------------\n\n"<<endl;
    float credit [n];
    string grade [n];
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Subject "<<i+1<<"\n"<<endl;
        cout<<"-----------------------------------\n"<<endl;
        cout<<"Enter the credit : ";
        cin>>credit[i];
        cout<<"Enter the grade : ";
        cin>>grade[i];
        cout<<"\n-----------------------------------\n\n"<<endl;
    }

    float sum = 0;
    float total;
    for(int j=0;j<n;j++)
    {
        if (grade[j] == "O"||grade[j] == "o")
        total=credit[j]*10;

        else if (grade[j] == "A+"||grade[j] == "a+")
        total=credit[j]*9;

        else if (grade[j] == "A"||grade[j] == "a")
        total=credit[j]*8;

        else if (grade[j] == "B+"||grade[j] == "b+")
        total=credit[j]*7;

        else if (grade[j] == "B"||grade[j] == "b")
        total=credit[j]*6;

        else if (grade[j] == "C"||grade[j] == "c")
        total=credit[j]*5;

        else 
        total=credit[j]*0;

        sum=sum+total;
    }

    float total_credit=0;
    for(int k=0;k<n;k++)
    {
        total_credit=total_credit+credit[k];
    }

    cout<<"\n-----------------------------------\n"<<endl;
    cout<<"Total Credits: "<<total_credit<<endl;
    cout<<"Total GPA: "<<sum/total_credit<<endl;
    cout<<"\n-----------------------------------\n\n"<<endl;


    back:
    int menu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit\n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>menu;

    switch(menu)
    {
        case 1:
        calculate_SGPA();
        break;

        case 2:
        main();
        break;

        case 3:
        quit();

        default:
        cout<<"\n\nYou have Entered Wrong Input!"<<endl;
        cout<<"Please Choose Again!"<<endl;
        goto back;
    }
}
void calculate_CGPA()
{
    system("cls");
    int m;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<" Number of subject : ";
    cin>>m;
    cout<<"\n\n"<<endl;
    float sem_result[m];

    for(int i=0;i<m;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>sem_result[i];
        cout<<"\n"<<endl;
    }

    float sem_total=0;
    for(int j=0;j<m;j++)
    {
        sem_total=sem_total+sem_result[j];
    }

    cout<<"******** Your CGPA is "<<sem_total/m<<" **********"<<endl;


    back:
    int menu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>menu;

    switch(menu)
    {
        case 1:
                calculate_CGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                quit();

        default:
              cout<<"\n\nYou have Entered Wrong Input!"<<endl;
              cout<<"Please Choose Again!"<<endl;
              goto back;
    }

}
void quit()
{
    system("cls");
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"                              THANK YOU !!                                "<<endl;
    cout<<"--------------------------------------------------------------------------\n";
    exit(EXIT_SUCCESS);
}