#include <iostream>

using namespace std;

int main()
{
    char name[10],sub[10];
    int mark[5];
    float avg;
    cout << "Welcome to My School Grading System" << endl;
    cout << "Enter user name :" << endl;
    cin>>name;

    for(int i=5;i<5;i++)
    {
        cout << "Enter subject name :" << endl;
        cin>>sub[i];
        cout<<"Enter subject's marks:" <<endl;
        cin>>mark[i];
    }
    for(int j=5;j<5;j++)
    {

    }
    avg=(float)(mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/5;
    cout<<"The average of your mark is :"<<avg<<endl;
    if (avg>85)
    {
        cout<<"Grade is :A";
    }
    else if(avg>70)
    {
        cout<<"Grade is :B";
    }

        cout<<"Hi "<<name<<", you have obtained the grade: "<< <<endl;

    return 0;
}
