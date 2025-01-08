#include <stdio.h>

#include <string.h>

    struct SinhVien
    
    {
        int id;
        
        char name[30];
        
        int age;
        
        char phoneNumber[12];
    };

    typedef struct SinhVien sv;

int main ()
{
        sv s[5];
        
        int size = sizeof(s) / sizeof(s[0]);
        
        for(int i = 0; i < size; i++)
            {
                s[i].id = i + 1;
                
                printf("\nNhap thong tin cho sinh vien thu %d: \n", s[i].id);
                
                printf("\nNhap ten sinh vien: ");
                
                fgets(s[i].name, sizeof(s[i].name), stdin);
                
                s[i].name[strcspn(s[i].name, "\n")] = '\0';

                printf("\nNhap tuoi: ");
                
                scanf("%d", &s[i].age);

                printf("\nNhap so dien thoai: ");
                
                scanf("%s", s[i].phoneNumber);

                getchar();
            }
        
        for(int j = 0; j < size; j++)
            {               
                printf("\n+ ============================== +\n");
                
                printf("\nThong tin sinh vien thu %d:\n", s[j].id);
                
                printf("\nHo Va Ten: %s\n", s[j].name);
                
                printf("\nTuoi: %d\n", s[j].age);
                
                printf("\nSo Dien Thoai: %s\n", s[j].phoneNumber);
            }

    printf("\n");

    return 0;
}