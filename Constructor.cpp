#include <iostream>
using namespace std;
class room
{
    private:
    int area,l,b;
    
    public:
    room()
    {
        cout<<"The object is created."<<endl;
    }
    room(int l1,int b1)
    {
        l=l1;
        b=b1;
    }
    void calculatearea()
    {
        area=l*b;
    }
    void put()
    {
        cout<<"Area is:"<<area<<endl;
    }
};
int main()
{
   room a(40,15),v;
   a.calculatearea();
   a.put();
    return 0;
}