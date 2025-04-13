#include<stdio.h>
#include"ham.h"


void main()
{
    phan_so_t A = { 1,2 };
    phan_so_t B = { 2,3 };
    phan_so_t Ket_qua;
    Ket_qua =CongPhanSo(A, B);
    printf("Ket qua la:%d/%d", Ket_qua.tu, Ket_qua.mau);
 
}