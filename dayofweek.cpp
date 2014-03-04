/*
Title: CSCI 135 Homework 3, Question 12
Author: Shoeb Rehman
Created on: 9/28/2013
Description: Asks the user for month, day, and year and provides the day of the week of that specific day.
*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) // determines if the year is a leap year
     {
          if ((year / 400) == 0)
          {
               return true;
          }
          else if (((year / 4) == 0) && (year / 100 != 0))
          {
               return true;
          }
          
          else 
          {
               return false;
          }
     }
     
int getCenturyValue(int year) // user-defined function with outputs a century value for later calculations
    {
          int remainder, CenturyValue;
          
          remainder = (year % 100);
          CenturyValue = year - remainder;
          CenturyValue = CenturyValue / 100;
          CenturyValue = CenturyValue % 4;
          CenturyValue = 3 - CenturyValue;
          return CenturyValue * 2;
    }
    
int getYearValue(int year) // user-defined function with outputs a year value for later calculations
    {
          int remainder, yearValue;
          yearValue = year % 100;
          remainder = yearValue;
          remainder = remainder - (remainder % 4);
          remainder = remainder / 4;
          yearValue = yearValue + remainder;
          return yearValue;
    }

int getMonthValue(int month, int year) // user-defined function with outputs a month value for later calculations
    {
     if(isLeapYear(year) == false)
     {
          if(month == 1)
          {
                   return 0;     
          }
          if(month == 2)
          {
                   return 3;
          }
          if(month == 3)
          {
                   return 3;
          }
          if(month == 4)
          {
                   return 6;     
          }
          if(month == 5)
          {
                   return 2;
          }
          if(month == 6)
          {
                   return 4;
          }
          if(month == 7)
          {
                   return 6;     
          }
          if(month == 8)
          {
                   return 3;
          }
          if(month == 9)
          {
                   return 5;
          }
          if(month == 10)
          {
                   return 0;     
          }
          if(month == 11)
          {
                   return 3;
          }
          if(month == 12)
          {
                   return 5;
          }
     }
     if(isLeapYear(year) == true)
     {
          if(month == 1)
          {
                   return 6;     
          }
          if(month == 2)
          {
                   return 2;
          }
          if(month == 3)
          {
                   return 3;
          }
          if(month == 4)
          {
                   return 6;     
          }
          if(month == 5)
          {
                   return 2;
          }
          if(month == 6)
          {
                   return 4;
          }
          if(month == 7)
          {
                   return 6;     
          }
          if(month == 8)
          {
                   return 3;
          }
          if(month == 9)
          {
                   return 5;
          }
          if(month == 10)
          {
                   return 0;     
          }
          if(month == 11)
          {
                   return 3;
          }
          if(month == 12)
          {
                   return 5;
          }
     }
    }
int main()
{
          int day, month, year, total;
          cout << "Please enter the month, from 1-12." << endl;
          cin >> month;

          cout << "Please enter the day." << endl;
          cin >> day;

          cout << "Please enter the year." << endl;
          cin >> year;
          
          total = day + (getMonthValue(month, year)) + (getYearValue(year)) + (getCenturyValue(year)); // carries out calculations
          total = total % 7; // calculates the remainder, which will be used to determine the weekday
          
          if(total == 0)
          {
                   cout << "The day of the week is Sunday." << endl;
          }
          
          if(total == 1)
          {
                   cout << "The day of the week is Monday." << endl;
          }
          if(total == 2)
          {
                   cout << "The day of the week is Tuesday." << endl;
          }
          
          if(total == 3)
          {
                   cout << "The day of the week is Wednesday." << endl;
          }
          if(total == 4)
          {
                   cout << "The day of the week is Thursday." << endl;
          }
          
          if(total == 5)
          {
                   cout << "The day of the week is Friday." << endl;
          }
          
          if(total == 6)
          {
                   cout << "The day of the week is Saturday." << endl;
          }

          system("pause");
    
}
