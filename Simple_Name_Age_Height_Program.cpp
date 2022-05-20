#include<iostream>
#include<string>
using namespace std;
class People
{
    private:
     public:
    int P_Heights;
    int P_Age;
    char P_Name[10];
    int Age();
    };
int Age()
{
    People P;
    cout<<"Enter Your Name";
    cin>>P.P_Name;
    cout<<"\nEnter your age: ";
    cin>>P.P_Age;
    cout<<"\n Enter You Height";
    cin>>P.P_Heights;
    return 0;
}
void Compare(){
    People P1;
if(P1.P_Heights>6)
{
    cout<<P1.P_Name<<" is tall"; 
}
 else 
    {
        cout<<"\n"<<P1.P_Name<<" is short";
    }

if(P1.P_Age>50)
{
    cout<<"\n"<<P1.P_Name<<" is old";
}
    else
    {
        cout<<"\n"<<P1.P_Name<<" is Young";
    }
}
int main()
{
    Age();
    Compare();
    return 0;
}