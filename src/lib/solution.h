#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Student_shallow
{
public:
    int* id;
    Student_shallow();
    Student_shallow(int &a);
    ~Student_shallow();
    Student_shallow(const Student_shallow &p2);
};


class Student_deep
{
public:
    int* id;
    Student_deep();
    Student_deep(int &a);
    ~Student_deep();
    Student_deep(const Student_deep &p2);
    Student_deep& operator=(const Student_deep &p3);
};


#endif