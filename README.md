# Pointers_Shallow_Copy_vs_Deep_Copy

> Write 2 classes to practice how to use the constructor, copy constructor, copy assign operator and destructor and compare the deep copy with shallow copy.

Both of the Student_shallow and Student_deep has one member integer pointer id.

- Student_shallow
  - Write a **default constructor** to allocate and initialize id to 0
  - Write a **parameterized constructor** to initialize id
     DESTRUCTOR NOT REQUIRED --> - Write a **destructor** to print "Delete Student_shallow!"

- Student_deep
  - Write a **default constructor** to allocate and initialize id to 0
  - Write a **parameterized constructor** to initialize id
  - Write a **destructor** to print "Delete Student_deep!" and delete the integer pointer
  - Write a **copy constructor** with **deep copy**
  - Write a **copy assignment operator** with **deep copy**

```c++
class Student_shallow
{
public:
    int* id;
    Student_shallow();
    Student_shallow(int);
    ~Student_shallow();
};
class Student_deep
{
public:
    int* id;
    Student_deep();
    Student_deep(int);
    ~Student_deep();
    Student_deep(const Student_deep&);
    Student_deep& operator=(const Student_deep&);
};
```

Eaxmple:
```
Student_shallow a;
Student_shallow b = a;
Student_shallow c;
c = a;
cout << *a.id << *b.id << *c.id << endl;
*c.id = 1;
cout << *a.id << *b.id << *c.id << endl;

Student_deep a;
Student_deep b = a;
Student_deep c;
c = a;
cout << *a.id << *b.id << *c.id << endl;
*c.id = 1;
cout << *a.id << *b.id << *c.id << endl;
```
Exepcted output:
```
000
111
000
001
Delete Student_deep!
Delete Student_deep!
Delete Student_deep!
Delete Student_shallow!
Delete Student_shallow!
Delete Student_shallow!
```


## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/Pointers_Shallow_Copy_vs_Deep_Copy.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
You can run unit tests using [`blaze`](#installing-bazel):

```bash
bazel test tests:tests
```

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
