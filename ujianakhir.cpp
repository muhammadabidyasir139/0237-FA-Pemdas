#include<iostream>
using namespace std;

class MasukUniversitas {
    public:
        int uangPendaftaran;
        int uangSemesterPertama;
        int uangBangunan;
        int totalBiaya;

    public:
        MasukUniversitas() {
            uangPendaftaran = 0;
            uangSemesterPertama = 0;
            uangBangunan = 0;
            totalBiaya = 0;
        }

    virtual void namaJalurMasuk() {return;}
    virtual void hitungTotalBiaya() {return;}
    virtual void tampilkanTotalBiaya() {return;}

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
        }
        float getUangPendaftaran() {
        return uangPendaftaran;
    }

    //isi setter
    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
        }
        float getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
        }
        float getUangBangunan() {
        return uangBangunan;
    }

    void tampilkanTotalBiaya() {
        int uangPendaftaran;
        int uangSemesterPertama;
        int uangBangunan;
        int totalBiaya;
        totalBiaya = uangSemesterPertama + uangPendaftaran + uangBangunan;
    }

    void input() {
        cout << "masukan uang pendartaran :" << endl;
        cin >> uangPendaftaran;
        cout << "Masukan Uang semester pertama :" << endl;
        cin >> uangSemesterPertama;
        cout << "Masukan Uang bangunan :" << endl;
        cin >> uangBangunan; 
        totalBiaya = uangSemesterPertama + uangPendaftaran + uangBangunan;

         if(totalBiaya > 45100000) {
            cout << "Tidak direkomendasika" << endl;
            cout << "Kategori = mahal";
        }
        else if (totalBiaya <= 45100000) {
            cout << "Direkomendasikan" << endl;
            cout << "Kategori = Sedang";
        } else {
            cout << "Direkomendasikan" << endl;
            cout << "Kategori = murah";
        }
    }

};

class SNBT : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBT
 void hitungTotalBiaya() {
        int totalBiaya;
        totalBiaya = uangPendaftaran + uangBangunan + uangSemesterPertama;
    }
};
class SNBP : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBP
 void hitungTotalBiaya() {
        int totalBiaya;
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }
};


int main() {
 // isi disini untuk fungsi main
 char pilihan;
 SNBP sp;
 SNBT st;
 MasukUniversitas mu;


 do {
    cout << "Pilih Jalur masuk : " << endl;
        cout << "1. SNBT " << endl;
        cout << "2. SNBP" << endl;
        cout << "3. keluar" << endl;
        cout << "Masukan menu pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            st.input();
            mu.hitungTotalBiaya();
            cout << st.tampilkanTotalBiaya() << endl;
            break;
        case 2:
            sp.input();
            cout << sp.tampilkanTotalBiaya() << endl;
            break;
        case 3:
            break;

        default:
            cout << "Pilihan tidak ada" << endl;
            break;
        } 
        system("pause");
        system("CLS");
    } while (pilihan != 4);

    return 0;
}