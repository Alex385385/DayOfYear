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
   DayOfYear d1(5);
   DayOfYear d2(80);
   DayOfYear d3(40);

   d1.print();
   d1.operator++();
   d1.print();
   d2.print();
   d3.print();
}
