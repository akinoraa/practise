#include <iostream> 
#include <string> 
#include <ctime> 
#include <Windows.h> 
using namespace std;


class Human {
	double height;
	string eyes_color;
	string name;
	string last_name;
	int energy;
	bool soreThroat;
	int cleanliness;
	int mood;
	int hunger;// 0 - full; 100 - hungry;



public:
	Human()
	{
		cout << " without parameters!\n";
		SetHeight(167);
		SetEyes_color("brown");
		SetName("Max");
		SetLastName("Smith");
		SetEnergy(100);
		SetSoreThroat(1);
		SetCleanliness(100);
		SetMood(100);
		SetHunger(100);
	}

	Human(double height, string eyes_color)
	{
		cout << "WITH parameters!\n";
		SetHeight(height);
		SetEyes_color(eyes_color);
		SetName("Max");
		SetLastName("Smith");
		SetEnergy(100);
		SetSoreThroat(1);
		SetCleanliness(100);
		SetMood(100);
		SetHunger(100);
	}


	void SetHeight(double height) {
		if (height < 0 || height > 300) {
			cout << "Wrong input!\n";
		}
		else {
			this->height = height;
		}
	}

	double GetHeight() const {
		return this->height;
	}

	void SetEyes_color(string eyes_color) {
		this->eyes_color = eyes_color;
	}

	string GetEyes_color() const {
		return this->eyes_color;
	}

	void SetName(string name) {
		this->name = name;
	}

	string GetName() const {
		return this->name;
	}

	void SetLastName(string last_name) {
		this->last_name = last_name;
	}

	string GetLastName() const {
		return this->last_name;
	}

	void SetEnergy(int energy) {
		if (energy < 0 || energy>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->energy = energy;
		}
	}

	int GetEnergy() const {
		return this->energy;
	}

	void SetSoreThroat(bool soreThroat) {
		this->soreThroat = soreThroat;
	}

	bool GetSoreThroat() const {
		return this->soreThroat;
	}

	void SetCleanliness(int cleanliness) {
		if (cleanliness < 0 || cleanliness>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->cleanliness = cleanliness;
		}
	}

	int GetCleanliness() const {
		return this->cleanliness;
	}

	void SetMood(int mood) {
		if (mood < 0 || mood>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->mood = mood;
		}
	}

	int GetMood() const {
		return this->mood;
	}

	void SetHunger(int hunger) {
		if (hunger < 0 || hunger>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->hunger = hunger;
		}
	}

	int SetHunger() const {
		return this->hunger;
	}

	void speaking() {
		if (soreThroat) {
			cout << name << " has a sore throat! " << name << " can't speak!\n";
			return;
		}
		cout << name << " " << last_name << " is talking!\n";
		energy -= 10;
	}

	void eating() {
		if (hunger > 80) {
			cout << name << " is full!\n";
			return;
		}
		cout << name << " " << last_name << " is eating!\n";
		hunger += 30;
	}

	void dancing() {
		if (energy < 30) {
			cout << name << " is tired!\n";
			return;
		}
		cout << name << " " << last_name << " is dancing!\n";
		energy -= 30;
		mood += 30;
		cleanliness -= 20;
	}

	void washing() {
		if (cleanliness > 50) {
			cout << name << " is clean!\n";
			return;
		}
		cout << name << " " << last_name << " is in a shower!\n";
		cleanliness += 50;
		mood += 10;
	}

	void resting() {
		if (energy > 80) {
			cout << name << " is not tired!\n";
			return;
		}
		cout << name << " " << last_name << " is resting!\n";
		energy += 30;
		mood += 20;
	}

	void callSomeone() {
		if (mood < 30) {
			cout << name << " is in a bad mood! Doesn't want to call anybody!\n";
			return;
		}
		cout << "'Hi! " << name << " " << last_name << " is here!'\n";
		energy -= 10;
	}

	void work() {
		if (energy < 50) {
			cout << name << " can't work! Too tired!\n";
			return;
		}
		cout << name << " " << last_name << " is working here!\n";
		energy -= 40;
		mood -= 10;
		hunger -= 30;
	}

	void printHuman() {
		cout << "Name: " << name << endl;
		cout << "height: " << height << endl;
		cout << "last_name: " << last_name << endl;
		cout << "eyes_color: " << eyes_color << endl;
		cout << "Energy: " << energy << endl;
		cout << "Hunger: " << hunger << endl;
		cout << "Mood: " << mood << endl;
		cout << "cleanliness: " << cleanliness << endl;
	}
};

int main() {

	Human h;
	h.printHuman();

	Human h1(167,"browm");
	h1.printHuman();
}
