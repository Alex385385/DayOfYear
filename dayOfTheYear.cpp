#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
   int day;
   string month;
public:
   DayOfYear(int x)
   {
      day = x;
   }
   DayOfYear(string m, int d)
   {
      month = m;
      day = d;
   }
   void print()
   {
      if(day <= 31)
      {
         cout << "January " << day << endl;
      }
      else if(day >= 32 && day <= 59)
      {
         cout << "February " << (day - 31) << endl;
      }
      else if(day >= 60 && day <= 90)
      {
         cout << "March " << (day - 59) << endl;
		}
      else if (day>90 && day<=120)
      {
         cout << "April " << (day-90) <<endl;
      }
      else if (day>120 && day<=151)
      {
         cout << "May " << (day-120) <<endl;
      }
      else if (day>151 && day<=181)
      {
         cout << "June " << (day-151) <<endl;
      }
      else if (day>181 && day<=212)
      {
         cout << "July " << (day-181) <<endl;
      }
      else if (day>212 && day<=243)
      {
         cout << "August " << (day-212) <<endl;
      }
      else if (day>243 && day<=273)
      {
         cout << "September " << (day-243) <<endl;
      }
      else if (day>273 && day<=304)
      {
         cout << "October " << (day-273) <<endl;
      }
      else if (day>304 && day<=334)
      {
         cout << "November " << (day-304) <<endl;
      }
      else if (day>334 && day<=365)
      {
         cout << "December " << (day-334) <<endl;
      }
   }
   void print(string m, int d)
   {
      cout << m << " " << d << endl;
   }
   void operator++()
   {
      ++day;
   }
   void operator++(int x)
   {
      day++;
   }
   void operator--()
   {
      --day;
   }
   void operator--(int x)
   {
      day--;
   }
};

int main()
{
   int day, day2, holder;
   string month;
   string monthName[12] = {"January","February","March","April","May","June",
                           "July","August","September","October","November","December"};
   int monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
   while(day < 1 || day > 365)
   {
      cout << "Enter day of year: ";
      cin >> day;
   }
   DayOfYear d1(day);


   cout << "Enter Month ";
   cin >> month;
   for(int i = 0; i < 12; i++)
   {
      if(month == monthName[i])
      {
         holder = monthDay[i];
      }
   }
   do
   {
      cout << "Enter day in range of month ";
      cin >> day2;
   }while(day2 < 1 || day2 > holder);

   DayOfYear d2(month, day2);

   d1.print();
   cout << "Day incremented ";
   d1.operator++();
   d1.print();
   d2.print(month, day2);

   return 0;
}
