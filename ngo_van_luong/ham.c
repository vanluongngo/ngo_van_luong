typedef struct
{
    int tu;
    int mau;
} phan_so_t;
// chức năng: hàm nhân 2 phân số
//input:
// phan_so_t A - phân số thứ nhất
//phan_so_t B - phân số thứ 2
// output:(phan_so_t) kết quả của phép tính
phan_so_t NhanPhanSo(phan_so_t A, phan_so_t B)
{

    phan_so_t C;
    C.tu = A.tu * B.tu;
    C.mau = A.mau * B.mau;
    return C;
}

// chức năng: hàm chia 2 phân số
//input:
// phan_so_t A - phân số thứ nhất
//phan_so_t B - phân số thứ 2
// output:(phan_so_t) kết quả của phép tính
phan_so_t ChiaPhanSo(phan_so_t A, phan_so_t B)
{

    phan_so_t C;
    C.tu = A.tu * B.mau;
    C.mau = A.mau * B.tu;
    return C;
}
// chức năng: hàm cộng 2 phân số
//input:
// phan_so_t A - phân số thứ nhất
//phan_so_t B - phân số thứ 2
// output:(phan_so_t) kết quả của phép tính
phan_so_t CongPhanSo(phan_so_t A, phan_so_t B)
{

    phan_so_t C;
    C.tu = A.tu *B.mau + B.tu*A.mau;
    C.mau = A.mau * B.mau;
    return C;
}
// chức năng: hàm cộng 2 phân số
//input:
// phan_so_t A - phân số thứ nhất
//phan_so_t B - phân số thứ 2
// output:(phan_so_t) kết quả của phép tính
phan_so_t TruPhanSo(phan_so_t A, phan_so_t B)
{

    phan_so_t C;
    C.tu = A.tu * B.mau - B.tu * A.mau;
    C.mau = A.mau * B.mau;
    return C;
}