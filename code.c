#include <stdio.h>
#include <math.h>

// Chức năng số 1: Kiểm tra số nguyên
void KiemTraSoNguyen() {
    int x;
    printf("Nhập vào 1 số nguyên x: ");
    scanf("%d", &x);
    printf("Số %d có phải là số nguyên? -> ", x);
    if (x == (int)x) {
        printf("Có\n");
    } else {
        printf("Không\n");
    }
    // Kiểm tra số nguyên tố và số chính phương ở đây
}

// Chức năng số 2: Tìm Ước số chung và bội số chung
void TimUocBoiSo(int x, int y) {
    // Tìm ước số chung và bội số chung ở đây
}

// Chức năng số 3: Tính tiền cho quán Karaoke
void TinhTienKaraoke(int gioBatDau, int gioKetThuc) {
    // Tính tiền Karaoke ở đây
}

// Chức năng số 4: Tính tiền điện
void TinhTienDien(float kwh) {
    // Tính tiền điện ở đây
}

// Chức năng số 5: Chức năng đổi tiền
void DoiTien(int amount) {
    // Đổi tiền ở đây
}

// Chức năng số 6: Tính lãi suất vay ngân hàng
void TinhLaiSuatVay(float soTienVay) {
    // Tính lãi suất và số tiền cần trả ở đây
}

// Chức năng số 7: Vay tiền mua xe
void VayTienMuaXe(float phanTramVayToiDa) {
    // Tính số tiền phải trả lần đầu và hàng tháng ở đây
}

// Chức năng số 8: Sắp xếp thông tin sinh viên
void SapXepSinhVien() {
    // Nhập và sắp xếp thông tin sinh viên ở đây
}

// Chức năng số 9: Game FPOLY-LOTT
void GameLottery(int so1, int so2) {
    // Xử lý trò chơi FPOLY-LOTT ở đây
}

// Chức năng số 10: Tính toán phân số
void TinhToanPhanSo() {
    // Nhập và tính toán phân số ở đây
}

int main() {
    int choice;

    do {
        printf("\n\n***** MENU *****\n");
        printf("1. Kiểm tra số nguyên\n");
        printf("2. Tìm Ước số chung và bội số chung của 2 số\n");
        printf("3. Tính tiền cho quán Karaoke\n");
        printf("4. Tính tiền điện\n");
        printf("5. Đổi tiền\n");
        printf("6. Tính lãi suất vay ngân hàng\n");
        printf("7. Vay tiền mua xe\n");
        printf("8. Sắp xếp thông tin sinh viên\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tính toán phân số\n");
        printf("0. Thoát\n");
        printf("Chọn chức năng (0-10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Kết thúc chương trình!\n");
                break;
            case 1:
                KiemTraSoNguyen();
                break;
            case 2:
                TimUocBoiSo(x, y);
                break;
            case 3:
                TinhTienKaraoke(gioBatDau, gioKetThuc);
                break;
            case 4:
                TinhTienDien(kwh);
                break;
            case 5:
                DoiTien(amount);
                break;
            case 6:
                TinhLaiSuatV