#include <stdio.h>

#include <string.h>

    struct SinhVien
        {
            char name[30];
            
            int age;
            
            char phoneNumber[12];
        };
    
    typedef struct SinhVien sv;

int main ()
{
        sv s[2];
        
        int size = sizeof(s) / sizeof(s[0]);
        
        for(int i = 0; i < size; i++)
            {
                printf("\nNhap Thong Tin Cho Sinh Vien Thu %d:\n", i);                
                
                printf("\nNhap Ten Cua Sinh Vien: ");
                
                fgets(s[i].name, sizeof(s[i].name), stdin);
                
                s[i].name[strcspn(s[i].name, "\n")] = '\0';
                
                printf("\nNhap Tuoi Cua Sinh Vien: ");
                
                scanf("%d", &s[i].age);

                printf("\nNhap So Dien Thoai Cua Sinh Vien: ");
                
                scanf("%s", s[i].phoneNumber);
                
                getchar();
                
            }

        for(int j = 0; j < size; j++)
            
            {
                printf("\n+ ============================== +\n");
                
                printf("\nThong Tin Cua Sinh Vien Thu %d:\n", j);
                
                printf("\nHo Va Ten: %s\n", s[j].name);
                
                printf("\nTuoi: %d\n", s[j].age);
                
                printf("\nSo Dien Thoai: %s\n", s[j].phoneNumber);

            }

        printf("\n");

        return 0;
}