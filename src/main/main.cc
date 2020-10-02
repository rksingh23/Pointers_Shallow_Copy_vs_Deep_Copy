#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() 
{
    int g=0;
    Student_shallow a(g);
    Student_shallow f=a;
    Student_shallow s=a;
   
    std::cout<<"SHALLOW COPY :"<<std::endl;
    std::cout<<*s.id<<" "<<*a.id<<" "<<*f.id<<std::endl;
    *a.id=5;
    std::cout<<*s.id<<" "<<*a.id<<" "<<*f.id<<std::endl;


    int j=0;
    Student_deep d(j);
    Student_deep e=d;
    Student_deep c;
    c=d;
   
    std::cout<<"DEEP COPY :"<<std::endl;
    std::cout<<*e.id<<" "<<*d.id<<" "<<*c.id<<std::endl;
    *d.id=3;
    std::cout<<*e.id<<" "<<*d.id<<" "<<*c.id<<std::endl;

  return 0;
}