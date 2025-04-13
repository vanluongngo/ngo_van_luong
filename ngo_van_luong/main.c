#include<stdio.h>
#include"ham.h"


void main()
{
    phan_so_t A = { 10,8 };
    phan_so_t B = { 2,4 };
    phan_so_t Ket_qua;
    Ket_qua =ChiaPhanSo(A, B);
    printf("Ket qua la:%d/%d", Ket_qua.tu, Ket_qua.mau);
 
}