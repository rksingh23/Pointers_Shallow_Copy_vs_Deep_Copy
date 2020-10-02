#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Q4_Student, HandlesDefaultConstructorShallow) {
  Student_shallow s;
  int* g=0;
  EXPECT_EQ (s.id,g);
}

TEST(Q4_Student, HandlesParametrizedConstructorShallow) {
  int n=2;
  int* g=&n;
  Student_shallow s(*g);
  EXPECT_EQ (*s.id,*g);
}

TEST(Q4_Student, HandlesCopyConstructorShallow) {
  int n=2;
  int* g=&n;
  Student_shallow s(*g);
  Student_shallow d=s;
  EXPECT_EQ (*s.id,*g);
  EXPECT_EQ (*d.id,*g);
}

TEST(Q4_Student, HandlesDefaultConstructorDeep) {
  Student_deep s;
  int* g=0;
  EXPECT_EQ (s.id,g);
}

TEST(Q4_Student, HandlesParametrizedConstructorDeep) {
  int n=2;
  int* g=&n;
  Student_deep s(*g);
  EXPECT_EQ (*s.id,*g);
}

TEST(Q4_Student, HandlesCopyConstructorDeep) {
  int n=2;
  int* g=&n;
  Student_deep s(*g);
  Student_deep d=s;
  EXPECT_EQ (*s.id,*g);
  EXPECT_EQ (*d.id,*g);
}

TEST(Q4_Student, HandlesCopyOperator) {
  int n=2;
  int* g=&n;
  Student_deep s(*g);
  Student_deep d;
  d=s;
  EXPECT_EQ (*s.id,*g);
  EXPECT_EQ (*d.id,*g);
}

TEST(Q4_Student, HandlesShallowCopy) {
  int n=2;
  int* g=&n;
  Student_shallow s(*g);
  Student_shallow d=s;
  Student_shallow e=d;
  *s.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*s.id);
  EXPECT_EQ (*e.id,*s.id);
  *d.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*d.id);
  EXPECT_EQ (*e.id,*d.id);
  *e.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*d.id);
  EXPECT_EQ (*e.id,*e.id);
}



TEST(Q4_Student, HandlesDeepCopy) {
  int n=2;
  int* g=&n;
  Student_deep s(*g);
  Student_deep d=s;
  Student_deep e=d;
  *s.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*d.id);
  EXPECT_EQ (*e.id,*e.id);
  *d.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*d.id);
  EXPECT_EQ (*e.id,*e.id);
  *e.id=5;
  EXPECT_EQ (*s.id,*s.id);
  EXPECT_EQ (*d.id,*d.id);
  EXPECT_EQ (*e.id,*e.id);
}