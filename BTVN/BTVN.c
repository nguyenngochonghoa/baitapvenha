#include <stdio.h>

int main() {
    int soA, soB;
    int choice = 0;
    int laCo = 0;
    int result = 0;
    float result2;

    printf("Nhap so thu 1: ");
    scanf("%d", &soA);
    printf("Nhap so thu 2: ");
    scanf("%d", &soB);

    do {
        printf("===========MENU=============");
        printf("\nNhap 1: tinh tong 2 so");
        printf("\nNhap 2: tinh hieu 2 so");
        printf("\nNhap 3: tinh nhan 2 so");
        printf("\nNhap 4: tinh chia 2 so");
        printf("\nChon 0: de thoat");
        printf("\nBan chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
        case 0:
            printf("Cam on ban da su dung dich vu\n\n");
            break;
        case 1:
            result = soA + soB;
            printf("Tong hai so co ");
            break;
        case 2:
            result = soA - soB;
            printf("Hieu hai so co ");
            break;
        case 3:
            result = soA * soB;
            printf("Tich hai so co ");
            break;
        case 4:
            if (soB != 0) {
                printf("%d / %d = %.2f\n", soA, soB, (float)soA / soB);
                laCo = 1;
            }
            else {
                printf("Khong the chia cho 0\n");
            }
            break;
        default:
            printf("Ban chon sai phim chuc nang. Vui long thuc hien lai!\n\n");
            break;
        }
        if (laCo == 0) {
            printf("ket qua: %d\n\n", result);
        }

        printf("============================\n\n");
    } while (choice != 0);

}




