#include<iostream>
using namespace std;
class tes
{
  int c,d;
  public:
  tes(int x, int y)
  {
    c=x;
    d=y;
  }
  
  friend void sum(tes p);

};
void sum(tes p)
{
    
    cout<<"sum="<<p.c+p.d;
}
int main()
{
    int a,b;
    cout<<"a and b";
    cin>>a>>b;

    tes obj(a,b);
     sum(obj);
}