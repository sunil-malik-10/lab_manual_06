#include<iostream>
using namespace std;

string calculatecost(float budget, string category, float numpeople);

main(){

float budget;
string category;
int numpeople;
string result;

cout << "Enter the budget: ";
cin >> budget;

cout << endl << "Enter the category (VIP/Normal): ";
cin >> category;

cout << endl << "Enter the number of people in the group: ";
cin >> numpeople;

result = calculatecost(budget, category, numpeople);
cout << result;
}

string calculatecost(float budget, string category, float numpeople){

float cost;
string result;

if(numpeople >= 1 && numpeople <= 4){
	budget = budget * 0.25;
	if(category == "VIP"){
		cost = numpeople * 499.99;
		budget = budget - cost;
			if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}

	if(category == "Normal"){
		cost = numpeople * 249.99;
		budget = budget - cost;
		if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}
}


if(numpeople >= 5 && numpeople <= 9){
	budget = budget * 0.4;
	if(category == "VIP"){
		cost = numpeople * 499.99;
		budget = budget - cost;
			if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}

	if(category == "Normal"){
		cost = numpeople * 249.99;
		budget = budget - cost;
		if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}
}

if(numpeople >= 10 && numpeople <= 24){
	budget = budget * 0.5;
	if(category == "VIP"){
		cost = numpeople * 499.99;
		budget = budget - cost;
			if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}

	if(category == "Normal"){
		cost = numpeople * 249.99;
		budget = budget - cost;
		if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}
}

if(numpeople >= 25 && numpeople <= 49){
	budget = budget * 0.6;
	if(category == "VIP"){
		cost = numpeople * 499.99;
		budget = budget - cost;
			if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}

	if(category == "Normal"){
		cost = numpeople * 249.99;
		budget = budget - cost;
		if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}
}

if(numpeople >= 50){
	budget = budget * 0.75;
	if(category == "VIP"){
		cost = numpeople * 499.99;
		budget = budget - cost;
			if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}

	if(category == "Normal"){
		cost = numpeople * 249.99;
		budget = budget - cost;
		if(budget < cost){
			cout << "Not enough Money! You need " << budget << " leva.";
			}
			else{
			cout << "Yes! You have " << budget << " leva.";	
			}
	}
}

}
