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
    
    strcpy(s.name, "Tran Hoang Duy");
    
    s.age = 18;
    
    strcpy(s.phoneNumber, "0374281904");

    printf("\n==== THONG TIN SINH VIEN N24DTCN021: ====");
    
    printf("\n");
    
    printf("\n+ Ho va ten: %s", s.name);
    
    printf("\n");
    
    printf("\n+ Tuoi: %d", s.age);
    
    printf("\n");
    
    printf("\n+ So dien thoai: %s", s.phoneNumber);
    
    printf("\n\n");
    
    printf("=========================================");

    printf("\n\n");

    return 0;

}