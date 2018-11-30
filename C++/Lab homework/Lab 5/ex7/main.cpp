#include <iostream>
#include <string>

using namespace std;

class Mecanism {
protected:
	string nume;
	string mod_functionare;
public:
	Mecanism(string nume, string mod_functionare) : nume(nume), mod_functionare(mod_functionare){}
	void setName(string nume) {
		this->nume = nume;
	}
	string getName() {
		return nume;
	}
	void setModFuntionare(string mod_functionare) {
		this->mod_functionare = mod_functionare;
	}
	string getModFunctionare() {
		return mod_functionare;
	}
	void mesaj() {
		cout << "Sunt un obiect de tip Mecanism!\n";
	}
};

class MasinaDeCalcul {
protected:
	string nume;
	int an_fabricatie;
public:
	MasinaDeCalcul(string nume, int an_fabricatie) : nume(nume), an_fabricatie(an_fabricatie){}
	void setName(string nume) {
		this->nume = nume;
	}
	string getName() {
		return nume;
	}
	void setAn(int an_fabricatie) {
		this->an_fabricatie = an_fabricatie;
	}
	int getAn() {
		return an_fabricatie;
	}
	void mesaj() {
		cout << "Sunt un obiect de tip MasinaDeCalcul!\n";
	}
};

class Computer : public MasinaDeCalcul {
private:
	string sistem_operare;
	int diagonala_monitor;
public:
	Computer(string sistem_operare, int diagonala_monitor, string nume, int an_fabricatie) : MasinaDeCalcul(nume, an_fabricatie){
		this->sistem_operare = sistem_operare;
		this->diagonala_monitor = diagonala_monitor;
	}
	void setSistemOperare(string sistem_operare) {
		this->sistem_operare = sistem_operare;
	}
	string getSistemOperare() {
		return sistem_operare;
	}
	void setDiagonalaMonitor(int diagonala_monitor) {
		this->diagonala_monitor = diagonala_monitor;
	}
	int getDiagonalaMonitor() {
		return diagonala_monitor;
	}
	void mesaj() {
		cout << "Sunt un obiect de tip Computer!\n";
	}
};

class Robot : public Mecanism, public Computer {
private:
	string material; // din ce e facut
	int versiune;
public:
	Robot(string nume_mecanism, string mod_functionare, string sistem_operare, int diagonala_monitor, string nume, int an_fabricatie, string material, int versiune):  Mecanism(nume_mecanism, mod_functionare), Computer(sistem_operare, diagonala_monitor, nume, an_fabricatie){
		this->material = material;
		this->versiune = versiune;
	}
	void setMaterial(string material) {
		this->material = material;
	}
	string getMaterial() {
		return material;
	}
	void setVersiune(int versiune) {
		this->versiune = versiune;
	}
	int getVersiune() {
		return versiune;
	}
	void mesaj() {
		cout << "Sunt un obiect de tip Robot!\n";
	}
};

int main() {
	Robot *r = new Robot("Masterchef", "Imi prepara mancarea.", "Linux", 30, "Sofia", 2015, "Metal", 1);
	r->mesaj();
	r->Mecanism::mesaj();
	r->MasinaDeCalcul::mesaj();
	r->Computer::mesaj();
	cout << r->getAn() << " " << r->getDiagonalaMonitor() << " " << r->getSistemOperare() << " " << r->getModFunctionare();
	return 0;
}