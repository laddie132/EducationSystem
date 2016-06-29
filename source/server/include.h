#ifndef INCLUDE_H
#define INCLUDE_H

//定义C++标准头文件以及所有类的前向声明

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <exception>

//普通类
class Course;
class Obligatory_course;
class Elective_course;
class Course_student;
class Course_teacher;
//class Course_admin;
class Course_user;
class User;
class Student;
class Teacher;
class Admin;
class Envir;
class Config_file;

enum user_type
{
    student,
    teacher,
    admin
};

#endif // INCLUDE_H