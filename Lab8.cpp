﻿#include <iostream>
#include <String>
#include <stdio.h>
using namespace std;




#pragma region 1

//Ex. 1
//Design a data structure to handle the information about student.Write a program that uses definded data structure.

//struct student
//{
//    char name[50];
//    int roll;
//    float marks;
//};
//
//int main()
//{
//    student s;
//    cout << "Enter information," << endl;
//    cout << "Enter name: ";
//    cin >> s.name;
//    cout << "Enter roll number: ";
//    cin >> s.roll;
//    cout << "Enter marks: ";
//    cin >> s.marks;
//
//    cout << "\nDisplaying Information," << endl;
//    cout << "Name: " << s.name << endl;
//    cout << "Roll: " << s.roll << endl;
//    cout << "Marks: " << s.marks << endl;
//    return 0;
//}
#pragma endregion
#pragma region 3

//Ex. 3
//Use enum type to define months.Write a function which uses this enum typeand translates names of months from english to your native language.
//Write a program to use this function.

//int main()
//{
//    enum month {
//        January=1, February, March, April, May, June,
//        July, August, September, October, November, December
//    };
//    cout << "months translation " << endl;
//    cout << "Please select number 1 to 1: ";
//   
//    int i;
//    cin >> i;
//   
//    switch (i) {
//    case January:
//        cout << "January = Ocak";
//        break;
//    case February:
//        cout << "February = Subat";
//        break;
//    case March:
//        cout << "March = Mart";
//        break;
//    case April:
//        cout << "April = Nisan";
//        break;
//    case May:
//        cout << "May = Mayis";
//        break;
//    case June:
//        cout << "June = Haziran";
//        break;
//    case July:
//        cout << "July = Temmuz";
//        break;
//    case August:
//        cout << "August = Agustos";
//        break;
//    case September:
//        cout << "September = Eylul";
//        break;
//    case October:
//        cout << "October = Ekim";
//        break;
//    case November:
//        cout << "November = Kasım";
//        break;
//    case December:
//        cout << "December = Aralık";
//        break;
//    default:
//        cout << "wrong value";
//        break;
//    }
//    return 0;
//}


#pragma region 4
//Ex. 7
//Design a class to store information about student.Write two constructorsand function which prints information.
//Instantiate objectsand check how it works.


//class student
//{
//private:
//    char  name[30];
//    int   rollNo;
//    float perc;
//public:
//    void getDetails(void);
//    void putDetails(void);
//};
//
//void student::getDetails(void) {
//    cout << "Enter name: ";
//    cin >> name;
//    cout << "Enter roll number: ";
//    cin >> rollNo;
//    
//}
//
//void student::putDetails(void) {
//    cout << "Student details:\n";
//    cout << "Name:" << name << ",Roll Number:" << rollNo  << endl;
//}
//
//int main()
//{
//    student std;       
//    int n, loop;
//
//    cout << "Enter total number of students: ";
//    cin >> n;
//    for (loop = 0; loop < n; loop++) {
//        cout << "Enter details of student " << loop + 1 << ":\n";
//        std.getDetails();
//    }
//    cout << endl;
//    for (loop = 0; loop < n; loop++) {
//        cout << "Details of student " << (loop + 1) << ":\n";
//        std.putDetails();
//    }
//
//    return 0;
//}
#pragma endregion


