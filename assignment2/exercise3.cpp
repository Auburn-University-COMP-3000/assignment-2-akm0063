#include <iostream>
#include <iomanip>

using namespace std;

double convertToMPH(int minutes, int seconds) {
	// There are 3600 seconds in an hour
	return (3600.0 / ((minutes * 60) + seconds));
}

double convertToMPH(double kph) {
	return (kph / 1.61);
}

int main() {
	int minutes = 0,
    seconds = 0;
	double mpm = 0,
    spm = 0,
    kph = 0;
   
    cout << "\nEnter your running pace in minutes per mile: " << endl;
    cin >> mpm;
    if (mpm < 0) {
        cout << "Enter a postive value: ";
        cin >> mpm;
    }

    cout << "\nEnter your running pace in seconds per mile: " << endl;
    cin >> spm;
    if (spm < 0) {
        cout << "Enter a postive value";
    }
    
    cout << "\nEnter your running pace in kilometers per hour: " << endl;
    cin >> kph;
    if (kph < 0) {
        cout << "Enter a postive value";
    }

    cout << "\n" << mpm << ":" << spm << " mile is: " << convertToMPH(mpm, spm) << " MPH" << endl;

    cout << kph << " KPH is " << convertToMPH(kph) << " MPH" << endl;

	return 0;
}
