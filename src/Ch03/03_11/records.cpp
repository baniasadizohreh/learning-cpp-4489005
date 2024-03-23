#include "records.h"

Student::Student(int the_id, std::string the_name){
 id = the_id;
 name = the_name;
};
int Student::get_id() const{
 return id;
};

std::string Student::get_name() const{
    return name;
};