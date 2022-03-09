#include <stdio.h>
#include <math.h>

//My Mathematics Menu Poject. Hope You Like :)

int topla(int s1,int s2){
    int s3;
    s3=s1+s2;
    return s3;
}

int carp(int s1,int s2){
    int s3;
    s3=s1*s2;
    return s3;
}

int usAl(int s1,int s2){
    int s3;
    s3= pow(s1,s2);
    return s3;
}

int kokAl(int s1){
    int s3;
    s3= sqrt(s1);
    return s3;
}


int main() {

    int s1,s2,secim;

    printf("Matematik menusune hosgeldiniz!\n");
    printf("1-Toplama\n2-Carpma\n3-Us alma\n4-Kok alma\n");
    printf("Lutfen yapmak istediginiz islemi secin:");
    scanf("%d",&secim);

    if (secim==1)
    {
        printf("sayi1 girin:");
        scanf("%d",&s1);
        printf("sayi2 girin:");
        scanf("%d",&s2);

        printf("girilen sayilarin toplami:%d", topla(s1,s2));
    }

    if (secim==2)
    {
        printf("sayi1 girin:");
        scanf("%d",&s1);
        printf("sayi2 girin:");
        scanf("%d",&s2);

        printf("girilen sayilarin carpimi:%d", carp(s1,s2));
    }

    if (secim==3)
    {
        printf("sayi1 girin:");
        scanf("%d",&s1);
        printf("sayi2 girin:");
        scanf("%d",&s2);

        printf("%d ussu %d: %d",s1,s2,usAl(s1,s2));
    }

    if (secim==4)
    {
        printf("Bir tamsayi girin:");
        scanf("%d",&s1);

        printf("girilen sayinin karekoku:%d", kokAl(s1));
    }


    return 0;

}
