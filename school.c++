#include<iostream>
using namespace std;
class Students
{
private:
    string names[10];
    int ages[10];
    int bn[10];
    int StudentChoice;
public:
    Students()
    {
        cout<<"Enter the number of students: ";
        cin>>StudentChoice;
        cout<<"<------------------------------------>\n";
        for(int s=0; s < StudentChoice; s++)
        {
            cout<<"Enter student name "<<s+1<<" : "<<endl;
            cin>>names[s];
            cout<<"Enter student age "<<s+1<<" : "<<endl;
            cin>>ages[s];
            cout<<"Enter student bench Number "<<s+1<<" : "<<endl;
            cin>>bn[s];
            cout<<"<------------------------------------>\n";
        }
        for(int S=0; S<StudentChoice; S++)
        {
            cout<<"Student number "<<S+1<<endl;
            cout<<"Name: "<<names[S]<<endl;
            cout<<"Age: "<<ages[S]<<endl;
            cout<<"Bench Number: "<<bn[S]<<endl;
            cout<<"<------------------------------------>\n";
        }
        
    }
};
class Teachers
{
private:
    string name;
    int age;
    int salary;
    int TeacherChoice;
    string names[10];
    int ages[10];
    int salaries[10];
public:
    Teachers()
    {
        cout<<"Enter the number of techers: ";
        cin>>TeacherChoice;
        cout<<"<------------------------------------>\n";
        for(int i=0; i<TeacherChoice; i++)
        {
        cout<<"Enter Teacher name "<<i+1<<" : "<<endl;
        cin>>names[i];
        cout<<"Enter Teacher age "<<i+1<<" : "<<endl;
        cin>>ages[i];
        cout<<"Enter Teacher salary "<<i+1<<" : "<<endl;
        cin>>salaries[i];
        cout<<"<---------------------------------------->\n";
        }
         for(int j=0; j<TeacherChoice; j++)
        {
            cout<<"Teacher number "<<j+1<<endl;
            cout<<"Name: "<<names[j]<<endl;
            cout<<"Age: "<<ages[j]<<endl;
            cout<<"salary: "<<salaries[j]<<endl;
            cout<<"<----------------------------------------------------->\n";             
        }
    }
};
void MainFunc()
{
    int choice;
    do{
    cout<<"\n<-------------- System Options -------------->\n";
    cout<<"press 1- To Add Teachers\n";
    cout<<"Press 2- To Add Students\n";
    cout<<"Press 3- To Exit\n";
    cout<<"<-------------------------------------->\n";
    cout<<"enter a number: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        Teachers();
    break;
    case 2:
        Students();
    break;
    case 3:
        cout<<"Thank You :)";
    break;
    }
    }while(choice <3);
}
int main()
{
    MainFunc();
    return 0; 
}