#include<iostream>
using namespace std;

float lowestprice(int km, string time);

main(){

float km;
string time;

float result;

cout << endl << "Enter the number of kilometers: ";
cin >> km;

cout << endl << "Enter the period of the day (day/night): ";
cin >> time;

result = lowestprice(km, time);
cout << endl << "Lowest price for " << km << " kilometers: " << result << " EUR";
}

float lowestprice(int km, string time){

float total;

	if(km < 20){
		if(time == "day"){
			total = 0.7 + (km * 0.79);
			return total;
			}
		if(time == "night"){
			total = 0.7 + (km * 0.9);
			return total;
			}
	}


	if(km >= 20 && km < 100){
			total = km * 0.09;
			return total;
	}
	
	if(km >= 100){
			total = km * 0.06;
			return total;
	}

}