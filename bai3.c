/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h> 
int main() {
    char str[5][100], temp[100];
    int i, j;

    printf("Nhap vao 5 chuoi:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        gets(str[i]);
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                // Hoán đổi chuỗi
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
