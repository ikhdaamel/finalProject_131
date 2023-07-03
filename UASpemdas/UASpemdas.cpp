#include <iostream> 
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
	
public:
	MataKuliah() {
		presensi = 0;
		float presensi() {
			cout << "masukan nilai presensi : " << endl;
		}
		activity = 0;
		float activity() {
			cout << "masukan nilai activity : " << endl;
		}
		exercise = 0;
		float exercise() {
			cout << "masukan nilai exercise : " << endl;
		}
		tugasAkhir = 0;
		float tugasAkhir() {
			cout << "masukan nilai akhir : " << endl;
		}
	}

	virtual float hitungNilaiAkhir() { 

	return 0; }

	virtual void cekKelulusan() { 
		cout << "selmat, anda dinyatakn lulus mata kuliah pemrograman dengan nilai akhir 75";
	return 0; }

	virtual void input() { 

	return 0; }


	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {

		return presensi;
	}



};

class Pemrograman : public MataKuliah { 
public:
	float presensi() {
		cout << "apakah anda akan mengulang program ?" << y/n << "\n" << endl;
	}
};

int main() { 

}