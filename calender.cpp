#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Cal {
    public:
        Cal(void);
        void getYearly(int year);
    protected:
        int mYear;
        string mMonths[13];
        string mWeekDays [8];
        int mDays [13];
        int first_DayOfMonth(int , int,int );
        static const int YEAR_ROW_WIDTH  = 35;
};
Cal::Cal(void) {
        mMonths[0] = "";
        mMonths[1] = "January";
        mMonths[2] = "February";
        mMonths[3] = "March";
        mMonths[4] = "April";
        mMonths[5] = "May";

        mMonths[6] = "June";

        mMonths[7] = "July";

        mMonths[8] = "August";

        mMonths[9] = "September";
        mMonths[10] = "October";

        mMonths[11] = "November";

        mMonths[12] = "December";



        mDays[0] =0;

        mDays[1] = 31;

        mDays[2] = 28;

        mDays[3] = 31;

        mDays[4] = 30;

        mDays[5] = 31;

        mDays[6] = 30;
        mDays[7] = 31;

        mDays[8] = 31;
        mDays[9] = 30;

        mDays[10] = 31;

        mDays[11] = 30;

        mDays[12] = 31;

        mWeekDays[0] = "";

        mWeekDays[1] = "Sun";

        mWeekDays[2] = "Mon";

        mWeekDays[3] = "Tue";

        mWeekDays[4] = "Wed";

        mWeekDays[5] = "Thu";

        mWeekDays[6] = "Fri";

        mWeekDays[7] = "Sat";
}
 int Cal::first_DayOfMonth(int x, int y,int z) {
     int month,year;
     month=x;
     year=y;
     int d=(((year%100)/10)*10)+(year%10);
     int yc=(d+(d/4))%7;
     int mc[12]={0,3,3,6,1,4,6,2,5,0,3,5};
     int dow;
     if(year<=1999)
     {
         if((month==1||month==2)&&z==1)
         dow=(yc+mc[month-1])%7;
         else
            dow=(yc+mc[month-1]+1)%7;
     }
     else
     {
         if((month==1||month==2)&&z==1)
        dow=(yc+mc[month-1]+6)%7;
        else
            dow=(yc+mc[month-1]+7)%7;
     }
    return dow;
}
void Cal::getYearly(int year)
{
    mYear = year;
    int check=0;
    if ((mYear < 1900) || (mYear > 2199))
        {
        cout << "Year must be between 1900 and 2100" << endl;
       }
    if ((mYear % 4 == 0 && mYear % 100 != 0) || (mYear % 400 == 0))
    {
        mDays[2] = 29;
        check=1;
    }
        for(int i=1;i<=12;i++)
        {
            int f=1;
        cout << mMonths[i] << endl;


        for (int j = 1; j <= 7; j++) {

            cout << setw(5) << mWeekDays[j] ;
        }
        cout << endl;



        int daysPrinted = 0;

        for (int j = 1; j <= mDays[i]; j++) {


            if (j == 1) {

                int dow = first_DayOfMonth(i, mYear,check);

                for (int spaces=0; spaces < dow; spaces++) {
                    cout << setw(5) << "     " ;

                    daysPrinted ++;

                }

            }



            cout <<setw(5)<<j;

            daysPrinted ++;

            if (daysPrinted % 7 == 0) {
                    f=0;
                cout<<endl;
                daysPrinted = 0;
            }
             else
                f=1;
        }
        if(f==1)
        cout<<endl;
    }
        cout << endl << setw(35) << "----------------------------------------------------------------" << endl;

    }

int main() {


    Cal shivam;
    int year;
    cout<<"\n                           Enter Your Year between 1900 to 2099                              \n">
    cin>>year;
    shivam.getYearly(year);

}
