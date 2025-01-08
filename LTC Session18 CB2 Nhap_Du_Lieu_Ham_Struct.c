#include <stdio.h>

#include <string.h>

    struct SinhVien
        {
            char name[30];
            
            int age;
            
            char phoneNumber[12];
        };

    typedef struct SinhVien SV;

int main ()
{
    SV s;
    
    printf("\nNhap Thong Tin Cho Sinh Vien N24DTCN021:\n ");
    
    printf("\n1. Nhap Ten Cua Sinh Vien: ");
    
    fgets(s.name, sizeof(s.name), stdin);
    
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("\n2. Nhap Tuoi Cua Sinh Vien: ");
    
    scanf("%d", &s.age);

    printf("\n3. Nhap So Dien Thoai Cua Sinh Vien: ");
    
    scanf("%s", &s.phoneNumber);

// ----------------------------------------------------------------------------- //    
    
    printf("\n+ ============================================ +\n");
    
    printf("\nThong Tin Cua Sinh Vien N24DTCN021: ");
    
    printf("\n");
    
    printf("\n1. Ho Va Ten Cua Sinh Vien: %s", s.name);
    
    printf("\n");
    
    printf("\n2. Tuoi: %d", s.age);
    
    printf("\n");
    
    printf("\n3. So Dien Thoai: %s", s.phoneNumber);
    
    printf("\n\n");

    return 0;

}