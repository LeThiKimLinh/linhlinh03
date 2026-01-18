#include <iostream>
#include <string>
using namespace std;

// 1. C?u trúc SinhVien
struct SinhVien {
    string MaSV;
    string HoTen;
    string Lop;
    float Diem;
};

// Nh?p 1 sinh viên
void nhap1SV(SinhVien &sv) {
    cin.ignore();
    cout << "Ma SV: ";
    getline(cin, sv.MaSV);
    cout << "Ho ten: ";
    getline(cin, sv.HoTen);
    cout << "Lop: ";
    getline(cin, sv.Lop);
    cout << "Diem: ";
    cin >> sv.Diem;
}

// a. Nh?p danh sách sinh viên
void nhapDanhSach(SinhVien a[], int &n) {
    cout << "Nhap so sinh vien: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        nhap1SV(a[i]);
    }
}

// b. Hi?n th? danh sách sinh viên
void hienThiDanhSach(SinhVien a[], int n) {
    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i].MaSV << " | " << a[i].HoTen
             << " | " << a[i].Lop << " | " << a[i].Diem << endl;
    }
}

// c. Hi?n th? sinh viên theo l?p
void hienThiTheoLop(SinhVien a[], int n) {
    string lop;
    cin.ignore();
    cout << "Nhap lop: ";
    getline(cin, lop);

    for (int i = 0; i < n; i++)
        if (a[i].Lop == lop)
            cout << a[i].MaSV << " | " << a[i].HoTen << " | " << a[i].Diem << endl;
}

// d. Hi?n th? sinh viên theo l?p có di?m > 5
void hienThiLopDiemLonHon5(SinhVien a[], int n) {
    string lop;
    cin.ignore();
    cout << "Nhap lop: ";
    getline(cin, lop);

    for (int i = 0; i < n; i++)
        if (a[i].Lop == lop && a[i].Diem > 5)
            cout << a[i].MaSV << " | " << a[i].HoTen << " | " << a[i].Diem << endl;
}

// e. Sinh viên có di?m l?n nh?t
void sinhVienDiemCaoNhat(SinhVien a[], int n) {
    float max = a[0].Diem;
    for (int i = 1; i < n; i++)
        if (a[i].Diem > max) max = a[i].Diem;

    for (int i = 0; i < n; i++)
        if (a[i].Diem == max)
            cout << a[i].MaSV << " | " << a[i].HoTen << " | " << max << endl;
}

// f. Thêm sinh viên vào cu?i danh sách
void themCuoi(SinhVien a[], int &n) {
    cout << "\nNhap sinh vien moi:\n";
    nhap1SV(a[n]);
    n++;
}

// g. Thêm sinh viên sau v? trí k
void themSauK(SinhVien a[], int &n) {
    int k;
    cout << "Nhap vi tri k: ";
    cin >> k;

    for (int i = n; i > k; i--)
        a[i] = a[i - 1];

    cout << "Nhap sinh vien moi:\n";
    nhap1SV(a[k]);
    n++;
}

// h. Xóa sinh viên t?i v? trí k
void xoaTaiK(SinhVien a[], int &n) {
    int k;
    cout << "Nhap vi tri k: ";
    cin >> k;

    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

// k. S?p x?p gi?m d?n theo di?m
void sapXepGiamDan(SinhVien a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].Diem < a[j].Diem)
                swap(a[i], a[j]);
}

// l. Chuy?n l?p sinh viên theo mã
void chuyenLop(SinhVien a[], int n) {
    string ma, lopMoi;
    cin.ignore();
    cout << "Nhap ma SV: ";
    getline(cin, ma);
    cout << "Nhap lop moi: ";
    getline(cin, lopMoi);

    for (int i = 0; i < n; i++)
        if (a[i].MaSV == ma)
            a[i].Lop = lopMoi;
}

// n. Sinh viên di?m cao nh?t c?a l?p
void diemCaoNhatTheoLop(SinhVien a[], int n) {
    string lop;
    cin.ignore();
    cout << "Nhap lop: ";
    getline(cin, lop);

    float max = -1;
    for (int i = 0; i < n; i++)
        if (a[i].Lop == lop && a[i].Diem > max)
            max = a[i].Diem;

    for (int i = 0; i < n; i++)
        if (a[i].Lop == lop && a[i].Diem == max)
            cout << a[i].MaSV << " | " << a[i].HoTen << " | " << a[i].Diem << endl;
}

// o. Xóa sinh viên cu?i danh sách
void xoaCuoi(SinhVien a[], int &n) {
    if (n > 0) n--;
}

// ================= MAIN =================
int main() {
    SinhVien ds[100];
    int n = 0, chon;

    do {
        cout << "\n===== MENU =====";
        cout << "\n1. Nhap danh sach sinh vien";
        cout << "\n2. Hien thi danh sach";
        cout << "\n3. Hien thi sinh vien theo lop";
        cout << "\n4. Hien thi sinh vien lop diem > 5";
        cout << "\n5. Sinh vien diem cao nhat";
        cout << "\n6. Them sinh vien cuoi danh sach";
        cout << "\n7. Them sinh vien sau vi tri k";
        cout << "\n8. Xoa sinh vien tai vi tri k";
        cout << "\n9. Sap xep giam dan theo diem";
        cout << "\n10. Chuyen lop sinh vien";
        cout << "\n11. Diem cao nhat theo lop";
        cout << "\n12. Xoa sinh vien cuoi";
        cout << "\n0. Thoat";
        cout << "\nChon: ";
        cin >> chon;

        switch (chon) {
            case 1: nhapDanhSach(ds, n); break;
            case 2: hienThiDanhSach(ds, n); break;
            case 3: hienThiTheoLop(ds, n); break;
            case 4: hienThiLopDiemLonHon5(ds, n); break;
            case 5: sinhVienDiemCaoNhat(ds, n); break;
            case 6: themCuoi(ds, n); break;
            case 7: themSauK(ds, n); break;
            case 8: xoaTaiK(ds, n); break;
            case 9: sapXepGiamDan(ds, n); break;
            case 10: chuyenLop(ds, n); break;
            case 11: diemCaoNhatTheoLop(ds, n); break;
            case 12: xoaCuoi(ds, n); break;
        }
    } while (chon != 0);

    return 0;
}

