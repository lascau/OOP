#include<iostream>
#include<vector>
#include<string>

using namespace std;
struct classes
{
	class persoana
	{
	protected:
		float inaltime;
		int varsta;
	public:
		persoana(int varsta, float inaltime)
		{
			this->inaltime = inaltime;
			this->varsta = varsta;
		}
	};
	class sofer : public persoana
	{
	protected:
		int anideexperienta;
		string categoria;
	public:
		sofer(int anideexperienta, string categoria, int varsta, float inaltime) : persoana(varsta, inaltime)
		{
			this->anideexperienta = anideexperienta;
			this->categoria = categoria;
		}
	};
	class angajat : public sofer
	{
	protected:
		string firma;
		int vechime;
	public:
		angajat(string firma, int vechime, int anideexperienta, string categoria, int varsta, float inaltime) :
			sofer(anideexperienta, categoria, varsta, inaltime)
		{
			this->firma = firma;
			this->vechime = vechime;
		}
	};
	class copil :public persoana
	{
	protected:
		string nume;
	public:
		copil(string nume, int varsta, float inaltime) : persoana(varsta, inaltime)
		{
			this->nume = nume;
		}
	};
	class parinte : public angajat
	{
	protected:
		int nrcopii;
		vector<copil> v;
	public:
		//friend copil;
		parinte(int nrcopii, string firma, int vechime, int anideexperienta, string categoria, int varsta, float inaltime) :
			angajat(firma, vechime, anideexperienta, categoria, varsta, inaltime)
		{
			int i, varstacopil;
			float inaltimecopil;
			string s;
			for (i = 0; i < nrcopii; i++)
			{
				cout << "Nume copil " << i << ":";
				cin >> s;
				cout << "Varsta copil " << i << ":";
				cin >> varstacopil;
				cout << "Inaltime copil " << i << ":";
				cin >> inaltimecopil;
				v.push_back(copil(s, varstacopil, inaltimecopil));
			}
		}
	};
};
int main()
{
	classes::parinte Parinte(2, "google", 5, 10, "B", 39, 1.82f);
	system("pause");
}