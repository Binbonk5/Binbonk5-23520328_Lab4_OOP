﻿#include "bai1.h"

int main() {
    // Nhập thông tin Quản Lý
    string MaSoQL, TenQL;
    double LuongCoBanQL, TyLeThuong;
    cout << "Nhap thong tin Quan Ly:" << endl;
    cout << "Ma So: ";
    cin >> MaSoQL;
    cin.ignore();
    cout << "Ten: ";
    getline(cin, TenQL);
    cout << "Luong Co Ban: ";
    cin >> LuongCoBanQL;
    cout << "Ty Le Thuong: ";
    cin >> TyLeThuong;
    QuanLy quanLy(MaSoQL, TenQL, LuongCoBanQL, TyLeThuong);

    // Nhập thông tin Kỹ Sư
    string MaSoKS, TenKS;
    double LuongCoBanKS;
    int SoGioLamThem;
    cout << "\nNhap thong tin Ky Su:" << endl;
    cout << "Ma So: ";
    cin >> MaSoKS;
    cin.ignore();
    cout << "Ten: ";
    getline(cin, TenKS);
    cout << "Luong Co Ban: ";
    cin >> LuongCoBanKS;
    cout << "So Gio Lam Them: ";
    cin >> SoGioLamThem;
    KySu kySu(MaSoKS, TenKS, LuongCoBanKS, SoGioLamThem);

    // Xuất thông tin Quản Lý và Kỹ Sư
    cout << "\nThong Tin Quan Ly:" << endl;
    quanLy.Xuat();

    cout << "\nThong Tin Ky Su:" << endl;
    kySu.Xuat();

    return 0;
}
