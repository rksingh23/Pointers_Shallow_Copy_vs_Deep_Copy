#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

Student_shallow::Student_shallow() 
{
        Student_shallow::id=new int;
        //pointers take only 0 as an integer input, rest all intergers initialized to a pointer throw error
        //& is address of, * is dereferncing i.e value of
        id=0;
        //cout<<id<<"     "<<&id<<std::endl;
}

Student_shallow::Student_shallow(int& a) 
{
        //Student_shallow::id=new int;
        id=&a;
        //cout<<*id<<"     "<<&id<<std::endl;
}

Student_shallow::~Student_shallow() 
{
     std::cout<<"Delete Student_shallow! "<<std::endl;
     Student_shallow::id=nullptr;
     delete Student_shallow::id;
}


Student_shallow::Student_shallow(const Student_shallow &p2)
{
    id=p2.id;
}

Student_deep::Student_deep()
{
    Student_deep::id=new int;
    id=0;
}

Student_deep::Student_deep(int& a)
{
    Student_deep::id=new int;
     id=&a;
}

Student_deep::Student_deep(const Student_deep &p2)
{
    id = new int(*p2.id);
}

Student_deep& Student_deep::operator=(const Student_deep &p3)
{
    //static Student_deep f1;
    id = new int(*p3.id);
     return *this;
}

Student_deep::~Student_deep()
{
     std::cout<<"Delete Student_deep! "<<std::endl;
     Student_deep::id=nullptr;
     delete Student_deep::id;
}