# include<iostream>
using namespace std;

struct stDate {

	short Day;
	short Month;
	short Year;
};

bool IsLeapYear(short Year) {

	return (Year % 400 == 0 || Year % 4 == 0 && Year % 100 != 0);
}

short NumberDaysInMonth(short Month, short Year) {

	short arrDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? IsLeapYear(Year) ? 29 : 28 : arrDays[Month - 1];
}

short ReadDayNumber() {

	short Day;

	cout << " Enter please number of Day   : ";
	cin >> Day;

	return Day;
}

short ReadMonthNumber() {

	short Month;

	cout << " Enter please number of Month : ";
	cin >> Month;

	return Month;

}

short ReadYearNumber() {

	short Year;

	cout << " Enter please number of Year  : ";
	cin >> Year;

	return Year;
}

stDate ReadAllInfo() {

	stDate Date;

	Date.Day = ReadDayNumber();
	Date.Month = ReadMonthNumber();
	Date.Year = ReadYearNumber();

	return Date;
}

bool CheckIsLastDayInMonthOrNot(stDate Date) {

	return (NumberDaysInMonth(Date.Month, Date.Year) == Date.Day);


}

stDate IncreaseDateByOneDay(stDate Date) {

	if (CheckIsLastDayInMonthOrNot(Date)) {

		if (Date.Month == 12) {

			Date.Year++;
			Date.Month = 1;
			Date.Day = 1;

		}
		else
		{
			Date.Month++;
			Date.Day = 1;


		}


	}
	else
	{

		Date.Day++;

	}

	return Date;
}

stDate IncreasesDateByXDays(stDate Date, short DayNumber) {

	for (short i = 1; i <= DayNumber; i++) {

		Date = IncreaseDateByOneDay(Date);
	}
	return Date;
}

stDate IncreasesDateByOneWeek(stDate Date) {

	for (short i = 1; i <= 7; i++) {

		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

stDate IncreaseDateByXWeeks(stDate Date, short Weeks) {

	for (short i = 1; i <= Weeks; i++) {

		Date = IncreasesDateByOneWeek(Date);
	}
	return Date;
}

stDate IncreaseDateByOneMonth(stDate Date) {

	if (Date.Month == 12) {

		Date.Month = 1;
		Date.Year++;
	}
	else
	{
		Date.Month++;
	}

	short NumberOfDaysInCurrentMonth = NumberDaysInMonth(Date.Month, Date.Year);
	if (Date.Day > NumberOfDaysInCurrentMonth) {

		Date.Day = NumberOfDaysInCurrentMonth;
	}

	return Date;
}

stDate IncreaseDateByXMonth(stDate Date, short DayNumber) {

	for (int i = 1; i <= DayNumber; i++) {

		Date = IncreaseDateByOneMonth(Date);
	}

	return Date;
}

stDate IncreaseDateByOneYear(stDate Date) {

	Date.Year++;

	return Date;
}

stDate IncreaseDateByXYear(stDate Date, short Years) {

	for (short i = 1; i <= Years; i++) {

		Date = IncreaseDateByOneYear(Date);

	}
	return Date;

}

stDate IncreaseDateByXYearFaster(stDate Date, short Year) {

	Date.Year += Year;

	return Date;

}

stDate IncreaseDateByOneDecade(stDate Date) {

	Date.Year += 10;
	return Date;
}

stDate IncreaseDateByXDecade(stDate Date, short Decades) {

	for (short i = 1; i <= Decades; i++) {

		Date = IncreaseDateByOneDecade(Date);
	}
	return Date;
}

stDate IncreaseDateByXDecadeFaster(stDate Date, short Decades) {

	Date.Year += Decades * 10;

	return Date;
}

stDate IncreaseDateByOneCentury(stDate Date) {

	Date.Year += 100;
	return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date) {

	Date.Year += 1000;
	return Date;
}


stDate DecoreaseDateByOneDay(stDate Date) {

	if (Date.Day == 1) {

		if (Date.Month == 1) {

			Date.Month = 12;
			Date.Year--;
			Date.Day = 31;
		}
		else
		{
			Date.Month--;
			Date.Day = NumberDaysInMonth(Date.Month, Date.Year);
		}
	}
	else
	{

		Date.Day--;
	}

	return Date;
}

stDate DecoreaseDateByXDay(stDate Date, short Days) {

	for (short i = 1; i <= Days; i++) {

		Date = DecoreaseDateByOneDay(Date);
	}

	return Date;
}

stDate DecoreaseDateByOneWeek(stDate Date) {

	for (short i = 1; i <= 7; i++) {

		Date = DecoreaseDateByOneDay(Date);
	}
	return Date;
}

stDate DecoreaseDateByXWeek(stDate Date, short Weeks) {

	for (short i = 1; i <= Weeks; i++) {

		Date = DecoreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate DecoreaseDateByOneMonth(stDate Date) {

	if (Date.Month == 1) {

		Date.Month = 12;
		Date.Year--;
	}
	else
	{
		Date.Month--;
	}

	short NumberTheDay = NumberDaysInMonth(Date.Month, Date.Year);
	if (Date.Day > NumberTheDay) {

		Date.Day = NumberTheDay;
	}
	return Date;
}
stDate DecoreaseDateByXMonth(stDate Date, short Month) {

	for (short i = 1; i <= Month; i++) {

		Date = DecoreaseDateByOneMonth(Date);
	}
	return Date;

}

stDate DecoreaseDateByOneYear(stDate Date) {

	Date.Year--;

	return Date;
}

stDate DecoreaseDateByXYear(stDate Date) {

	for (short i = 1; i <= 10; i++) {

		Date = DecoreaseDateByOneYear(Date);
	}
	return Date;
}

stDate DecoreaseDateByXYearFaster(stDate Date) {

	Date.Year -= 10;

	return Date;
}

stDate DecoreaseDateByOneDecade(stDate Date) {

	Date.Year -= 10;

	return Date;
}

stDate DecoreaseDateByXDecade(stDate Date, short Decades) {

	for (short i = 1; i <= Decades; i++) {

		Date = DecoreaseDateByOneDecade(Date);
	}
	return Date;
}

stDate DecoreaseDateByXDecadeFaster(stDate Date, short Decades) {

	Date.Year -= Decades * 10;

	return Date;
}

stDate DecoreaseDateByOneCentury(stDate Date) {

	Date.Year -= 100;

	return Date;
}

stDate DecoreaseDateByOneMillennium(stDate Date) {

	Date.Year -= 1000;

	return Date;

}

int main() {

	stDate Date1 = ReadAllInfo();

	cout << "\n\n Date After Increases :\n";
	cout << " -----------------------\n\n";

	Date1 = IncreaseDateByOneDay(Date1);
	cout << " 01-Adding one day is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreasesDateByXDays(Date1, 10);
	cout << " 02-Adding 10 days is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreasesDateByOneWeek(Date1);
	cout << " 03-Adding One Week is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByXWeeks(Date1, 10);
	cout << " 04-Adding 10 Week is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByOneMonth(Date1);
	cout << " 05-Adding one Month is       : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByXMonth(Date1, 5);
	cout << " 06-Adding 5 Month is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByOneYear(Date1);
	cout << " 07-Adding One Year is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXYear(Date1, 10);
	cout << " 08-Adding 10 Year is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXYearFaster(Date1, 10);
	cout << " 09-Adding 10 Year is (Faster): " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneDecade(Date1);
	cout << " 10-Adding One Decode is      : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXDecade(Date1, 10);
	cout << " 11-Adding 10 Decode is       : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXDecadeFaster(Date1, 10);
	cout << " 12-Adding 10 Decode (Faster) : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneCentury(Date1);
	cout << " 13-Adding One Century is     : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneMillennium(Date1);
	cout << " 14-Adding One Millennium is  : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;




	cout << "\n\n Date After Decorises: \n";
	cout << " ----------------------\n\n";

	Date1 = DecoreaseDateByOneDay(Date1);
	cout << " 01-Substracting one day is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByXDay(Date1, 10);
	cout << " 02-Substracting 10 day is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;



	Date1 = DecoreaseDateByOneWeek(Date1);
	cout << " 03-Substracting One Week is       : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;



	Date1 = DecoreaseDateByXWeek(Date1, 10);
	cout << " 04-Substracting 10 Week is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByOneMonth(Date1);
	cout << " 05-Substracting One Month is      : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByXMonth(Date1, 5);
	cout << " 06-Substracting 5 Month is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByOneYear(Date1);
	cout << " 07-Substracting One Year is       : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;



	Date1 = DecoreaseDateByXYear(Date1);
	cout << " 08-Substracting 10 Year is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByXYearFaster(Date1);
	cout << " 09-Substracting 10 Year is(Faster): " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByOneDecade(Date1);
	cout << " 10-Substracting One Decade is     : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByXDecade(Date1, 10);
	cout << " 11-Substracting 10 Decade is      : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByXDecadeFaster(Date1, 10);
	cout << " 12-Substracting 10 Decade (Faster): " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByOneCentury(Date1);
	cout << " 13-Substracting One Century is    : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = DecoreaseDateByOneMillennium(Date1);
	cout << " 14-Substracting One Millennium is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


}