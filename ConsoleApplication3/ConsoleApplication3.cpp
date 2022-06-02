#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");
    int bakiye;
    int sayi1, sayi3;
    char i;
    bakiye = 5000;
    do
    {
        baslangic:
        printf("İşlem Seçiniz:\n1-Para Çekme\n2-Para Yatırma\n3-Bakiye Sorgulama\n");
        scanf_s("%d", &sayi1);
        while ((sayi1 < 1) || (sayi1 > 3))
        {
            printf("Hatalı işlem numarası girdiniz! Lütfen tekrar deneyiniz.\n");
            printf("1-Para Çekme\n2-Para Yatırma\n3-Bakiye Sorgulama\n");
            scanf_s("%d", &sayi1);
        }
        switch (sayi1)
        {
        case 1:
            int sayi2;
            printf("Hesabınızdan çekmek istediğiniz tutarı giriniz: ");
            scanf_s("%d", &sayi2);
            if (sayi2 > bakiye)
            {
                while (sayi2 > bakiye)
                {
                    printf("Hesabınızda bulunan tutardan fazla miktarda para çekemezsiniz. Güncel Bakiyeniz: %d\n", bakiye);
                    printf("Hesabınızdan çekmek istediğiniz tutarı giriniz: ");
                    scanf_s("%d", &sayi2);
                    
                }
                bakiye = bakiye - sayi2;
            }
            else
                bakiye = bakiye - sayi2;
            printf("Güncel bakiyeniz --> %d\n", bakiye);
            break;
        case 2:
            int sayi4;
            printf("Hesabınıza yatırmak istediğiniz tutarı giriniz:");
            scanf_s("%d", &sayi4);
            bakiye = bakiye + sayi4;
            printf("Güncel bakiyeniz --> %d\n", bakiye);
            break;
        case 3:
            printf("Güncel bakiyeniz --> %d\n", bakiye);
            break;
        }
        printf("Başka bir işlem yapmak ister misiniz?\nEvet için  ----------> 1\nHayır için ----------> 2\n");
        scanf_s("%d", &sayi3);
        while ((sayi3<1) || (sayi3>2))
        {
            printf("Hatalı işlem numarası girdiniz! Lütfen tekrar deneyiniz.\n");
            printf("Başka bir işlem yapmak ister misiniz?\nEvet için  ----------> 1\nHayır için ----------> 2\n");
            scanf_s("%d", &sayi3);
        }
    } while (sayi3 == 1);
    system("pause");
}
