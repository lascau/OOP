#include <iostream>
#include <string>

using namespace std;

class Desert {
protected:
	string nume;
	int nrCalorii;
public:
	Desert(string nume, int nrCalorii) : nume(nume), nrCalorii(nrCalorii) {}

	void setName(string nume) {
		this->nume = nume;
	}
	string getName() {
		return nume;
	}
	void setNrCalorii(int nrCalorii) {
		this->nrCalorii = nrCalorii;
	}
	int getNrCalorii() {
		return nrCalorii;
	}
	void modPreparare() {
		cout << "Se prepara cu foarte, dar foarte, mult ulei!\n";
	}
};

class Prajitura : public Desert {
protected:	
	string ingrediente[20];
public:
	Prajitura(string ingrediente[20], string nume, int nrCalorii) : Desert(nume, nrCalorii) {
		for (int rand = 0; rand < 20; rand++)
			this->ingrediente[rand] = ingrediente[rand];
	}
	void setIngrediente(string ingrediente[20]) {
		for (int rand = 0; rand < 3; rand++) 
			this->ingrediente[rand] = ingrediente[rand];
	}
	void getIngrediente() {
		for (int rand = 0; rand < 3; rand++)
			cout << ingrediente[rand] << '\n';
	}
	void modPreparare() {
		cout << "Se prepara cu cu coca de cozonac!\n";
	}
};

class Tort : public Desert {
private:
	string ingrediente[30];
public:
	Tort(string ingrediente[20], string nume, int nrCalorii) : Desert(nume, nrCalorii) {
		for (int rand = 0; rand < 20; rand++)
			this->ingrediente[rand] = ingrediente[rand];
	}
	void setIngrediente(string ingrediente[20]) {
		for (int rand = 0; rand < 3; rand++)
			this->ingrediente[rand] = ingrediente[rand];
	}
	void getIngrediente() {
		for (int rand = 0; rand < 3; rand++)
			cout << ingrediente[rand] << '\n';
	}
	void modPreparare() {
		cout << "Cu multa frisa sa fie!\n";
	}
};

class Briosa : public Prajitura {
private:
	string forma;
public:
	Briosa(string forma, string ingrediente[20], string nume, int nrCalorii) : Prajitura(ingrediente, nume, nrCalorii) {
		this->forma = forma;
	}
	string getForma() {
		return forma;
	}
	void setForma(string forma) {
		this->forma = forma;
	}
};

int main() {
	cout << "Desert object\n";
	Desert* d = new Desert("baclava", 50);
	cout << d->getName() << " " << d->getNrCalorii() << ' ' << '\n';
	d->modPreparare();
	cout << "--------------------------\n";

	cout << "Prajitura object\n";
	string ingrediente[20] = { "2 oua", "3kg de fain", "1kg de unt" };
	Prajitura* p = new Prajitura(ingrediente, "prajitura carpati", 234);
	p->getIngrediente();
	string ingrediente_new[20] = { "4 oua", "2kg  de faina", "1kg de unt" };
	p->setIngrediente(ingrediente_new);
	p->getIngrediente();
	cout << p->getNrCalorii() << "de calorii\n";
	
	cout << "--------------------------\n";
	cout << "Tort object\n";
	Tort* t = new Tort(ingrediente, "tort cu ciocolata", 342);
	t->modPreparare();
	t->Desert::modPreparare();
	t->getIngrediente();
	t->setIngrediente(ingrediente_new);
	t->getIngrediente();
	cout << t->getNrCalorii() << "de calorii\n";
	cout << "--------------------------\n";

	cout << "Briosa  object\n";
	Briosa* b = new Briosa("rotunda", ingrediente, "nu stiu ce nume sa-i dau", 232);
	cout << b->getNrCalorii() << '\n';
	b->getIngrediente();

	return 0;
}