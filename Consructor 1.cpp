#include <iostream>
using namespace std;
class student
{
    private:
    int total,mark1,mark2;
    
    public:
    student()
    {
        cout<<"Enter Marks for Subject 1:"<<endl;
        cin>>mark1;
        cout<<"Enter Marks for Subject 2:"<<endl;
        cin>>mark2;
        cout<<"The object is created."<<endl;
    }
    student(int m1,int m2)
    {
        mark1=m1;
        mark2=m2;
    }
    void sum()
    {
        total=mark1+mark2;
        cout<<"Sum is:"<<total<<endl;
    }
};
int main()
{
   student s1,s2(50,65);
   s1.sum();
   s2.sum();
    return 0;
}