#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Payment
{
private:
	string name, surname;
	double stavka;
	short nadbavkaProc;
	double pributPodatok;
	short amountRob, amountVidprac;
	double SumNarah, SumUtrym;
public:
	class Date
	{
	private:
		unsigned int year, month, day;
	public:
		unsigned int GetYear() const { return year; };
		unsigned int GetMonth() const { return month; };
		unsigned int GetDay() const { return day; };

		void SetYear(unsigned int);
		void SetMonth(unsigned int);
		void SetDay(unsigned int);

		void InitNum(unsigned int, unsigned int, unsigned int);
		void Read();
		void Display();
		string toString() const;
		bool IsVysokostnyi();
		bool IsEarlierThan(Date);
		bool IsSameAs(Date);
		bool IsLaterThan(Date);
		short DaysInMonth(unsigned int);
		void SubstractDays();
		void DateAfterDays();
		friend unsigned int DaysBetweenAmount(Date, Date);

	};

	Date data;

	string GetName() const { return name; };
	void SetName(string v) { this->name = v; };

	string GetSurname() const { return surname; };
	void SetSurname(string v) { this->surname = v; };

	double GetStavka() const { return stavka; };
	void SetStavka(double);

	Date GetDate() const { return data; };
	void SetDate(Date v) { this->data = v; };

	short GetNadbavkaProc() const { return nadbavkaProc; };
	void SetNadbavkaProc(short);

	double GetPributPodatok() const { return pributPodatok; };
	void SetPributPodatok(double v) { this->pributPodatok = v; };

	short GetAmountRob() const { return amountRob; };
	void SetAmountRob(short v);

	short GetAmountVidprac() const { return amountVidprac; };
	void SetAmountVidprac(short);

	double GetSumNarah() const { return SumNarah; };
	void SetSumNarah(double v);

	double GetSumUtrym() const { return SumUtrym; };
	void SetSumUtrym(double v);

	void Read();
	void Display();
	void Init(string, string, double, Date, short, short, short);
	string toString() const;

	short CountExpirience(Date);
	double PrybotkovyiPodatok();
	double AmountSumNarah();
	double AmountSumUtrym();
	double AmountZarplata();
};
