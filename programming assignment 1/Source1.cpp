#include<iostream>
using namespace std;
int main() {
	double r1, r2, r3, r4, r5, r6, total_resistance;

	cout << "The program is designed for the user to choose a values for 6 resistors, the output voltage of the circuit must be \n15 Volts when the input voltage is negetive 2 Volts, the circuit will operate correctly only when the six resistors \nsatisfy the following equation: ((R1+R2)*R4*R6)/((R3+R4)*R1*R5)=7.5 " << endl;
	cout << "Enter the value of the first resistor" << endl;
	cin >> r1;
	cout << "Enter the value of the second resistor" << endl;
	cin >> r2;
	cout << "Enter the value of the third resistor" << endl;
	cin >> r3;
	cout << "Enter the value of the fourth resistor" << endl;
	cin >> r4;
	cout << "Enter the value of the fifth resistor" << endl;
	cin >> r5;
	cout << "Enter the value of the sixth resistor" << endl;
	cin >> r6;
	total_resistance = ((r1 + r2) * r4 * r6) / ((r3 + r4) * r1 * r5);
	cout << "The total resistance is equal to: " << total_resistance << endl;
	if (total_resistance == 7.5) {
		cout << "This was a good design\n" << "Good design values: " << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6;
	}
	else {
		cout<<"This was a bad design\n"<<"Bad design values: " << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6;
	}
	return 0;
}