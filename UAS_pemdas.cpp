#include <iostream>
using namespace std; 

class MasukUniversitas {
public:
    int uangPendaftaran;
    int semester1;
    int uangBangunan;
    int TotalBiaya;
    string kategori;
    string Rekomendasi;
    getter();
    setter();

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        semester1 = 0;
        uangBnagunan = 0;
        TotalBiaya = 0;
    }

    virtual void namaJalurMasuk() 
    {
        string SNBT tes;
        string SNBP prestasi;
        return;
    }

    void input()
    {
        cout << "masukan uang semester pertama" << endl;
        cin >> semster1;
        cout >> "Masukan uang bangunan" << endl;
        cin << uangBangunan;
    }

    void HitungTotalBiaya()
    {
        (semester1 + uangBangunan);
        return;
    }

    
    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    } 
    
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    // isi setter dan getter variable yang dibutuhkan di bawah ini };  
    class SNBT : public MasukUniversitas 
    {
        uangPendaftaran;
        semester1;
        totalBiaya;
    };
    class SNBP : public MasukUniversitas
    {
        uangPendaftaran;
        semester1;
        totalBiaya;
    };
    int main()
    {
        switch;
        case;
    }
      
