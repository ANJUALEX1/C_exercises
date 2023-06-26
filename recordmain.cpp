#include <iostream>
#include<string>
#include "records.h"
#include "records.cpp"
using namespace std;
Student my_student(32, "Hector");
Course my_course(7, "Physics", 'a');
Grade my_grade(2,7,'A');
int main(){
cout<<"The credit obtained by "<<my_student.get_name() << " for the subject " << my_course.get_name()<<" is "<<my_course.get_credits()<<endl;



    return(0);
}