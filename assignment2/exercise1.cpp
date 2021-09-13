#include<iostream>

using namespace std;

bool isLeapYear(int year) {
    return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

int getCenturyValue(int year) {
    int century = year / 100;
    int remainder = century % 4;
    int value = 2 * (3 - remainder);
    return value;
}

int getYearValue(int year) {
    int yearLastTwo = (year % 100);
    int leapFactor = yearLastTwo / 4;
    int value = yearLastTwo + leapFactor;
    return value;   
}

int getMonthValue(int month, int year) {
    if (month == 1 && isLeapYear(year)) {
        return 6;
        }
    else if (month == 1) {
        return 0;
        }
    else if (month == 2 && isLeapYear(year)) {
        return 2;
        }
    else if (month == 2) {
        return 3;
        }
    else {
        switch (month) {
            case 3:
            return 3;
            case 4:
            return 1;
            case 5:
            return 4;
            case 6:
            return 4;
            case 7:
            return 6;
            case 8:
            return 2;
            case 9:
            return 5;
            case 10:
            return 0;
            case 11:
            return 3;
            case 12:
            return 5;
            }
        }
        return 0;
    }

int main() {
int month = 0;
int day = 0;
int year = 0;

cout << "Enter the month: " << endl;
cin >> month;
while (month < 1 || month >12) {
    cout << "Please give a valid month";
    cin >> month;
}

cout << "Enter the day: " << endl;
cin >> day;
if (month == 4 || month == 6 || month == 9 || month == 11) {
    while (day < 1 || day > 30) {
        cout << "Please enter a value between 1 and 30:";
        cin >> day;
    }
}
else {
    while (day < 1 || day < 31) {
        cout << "Please enter a value between 1 and 31:";
        cin >> day;
        }
}
    
cout << "Enter the year: " << endl;
cin >> year;

int sum = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
int dayOfWeek = sum % 7;

switch (dayOfWeek) {
    case 0:
    cout << "Sunday" << endl;
    break;
    case 1:
    cout << "Monday" << endl;
    break;
    case 2:
    cout << "Tuesday" << endl;
    break;
    case 3:
    cout << "Wednesday" << endl;
    break;
    case 4:
    cout << "Thursday" << endl;
    break;
    case 5:
    cout << "Friday" << endl;
    break;
    case 6:
    cout << "Saturday" << endl;
    break;
}

return 0;
}
