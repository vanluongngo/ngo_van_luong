#include<stdio.h>
#include"ham.h"


void main()
{
    phan_so_t A = { 5,8 };
    phan_so_t B = { 2,3 };
    phan_so_t Ket_qua;
    Ket_qua =NhanPhanSo(A, B);
    printf("Ket qua la:%d/%d", Ket_qua.tu, Ket_qua.mau);
 
}