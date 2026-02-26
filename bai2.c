/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main()
{
    char username[50], password[50];
    char correct_username[] = "admin";
    char correct_password[] = "123456";

    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}