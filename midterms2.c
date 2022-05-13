#include <stdio.h>

//kopru cizen programi yazin..

/*
int main() {
    int i,j,m,n;
    for (i<0;i<5;i++){
        for (n=5;n>i;n--){
            printf("*");
        }
        for (j=0;j<i;j++){
            printf("  ");
        }
        for (m=5;m>i;m--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/


//klavyeden girilen sayinin asal olup olmadigini bulan program


int main(){
    int sayi,flag=1;
    printf("sayi giriniz:");
    scanf("%d",&sayi);

    for (int i=2;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            flag=0;
        }
    }

    if(flag==1)
    {
        printf("%d asaldir!",sayi);
    }
    else
    {
        printf("%d asal degildir!",sayi);
    }


    return 0;
}
 


//klavyeden istenilen sayida girilen sayinin ortalamasini bulan program..

/*
int main(){
    int i=0,sayi;
    float ortalama,toplam=0;
    while (1){
        printf("sayi girin:");
        scanf("%d",&sayi);
        if (sayi==-1){
            break;
        }
        i++;
        toplam+=sayi;
    }

    ortalama=toplam/(i);
    printf("ortalama:%.3f",ortalama);

    return 0;
}
*/


// Make a plus with Matrix

/*
int main(){

    int i,j,n;

    printf("satir veya sutun sayisi:");
    scanf("%d",&n);

    if (n%2!=0) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == n / 2 || j == n / 2) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
    }

    else {
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if ((i==n/2 || i==n/2-1) || (j==n/2 || j==n/2-1)){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
*/

//The largest prime number smaller than the entered number.

/*
int main(){
    int i,j,sayi;

    printf("sayi girin:");
    scanf("%d",&sayi);

    for (i=sayi-1;i>=2;i--)
    {
        int asal=1;
        for (j=2;j<i;j++)
        {
            if(i%j==0)
            {
                asal=0;
            }
        }
        if (asal==1)
        {
            printf("%d",i);
            break;
        }
    }


    return 0;
}
*/


//The program that gives the approximate value of the base 2 logarithm of the number you receive from the user..

/*
int main(){

    int i,j=0,sayi;

    printf("sayi girin:");
    scanf("%d",&sayi);

    for (i=1;i<=sayi;i++)
    {
        i *= 2;
        j++;
    }
    printf("%d ile %d arasinda",j,j+1);



    return 0;
}
*/


//Code that reads age and averages ages until -1 is entered.

/*
int main(){
    int yas,i=0;
    float toplam;

    while (1)
    {
        printf("Yasiniz:");
        scanf("%d",&yas);
        if (yas!=-1)
        {
            toplam += yas;
            i++;
        }
        else
        {
            break;
        }
    }

    printf("ortalama:%.2f",toplam/i);

    return 0;
}
*/


//program that gives prime numbers as many as the given number..

/*
int main(){

    int sayi,i,j,k=0;
    printf("Sayi girin:");
    scanf("%d",&sayi);

    for (i=2;i<i+1;i++)
    {
        int asal=1;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                asal=0;
            }
        }
        if (asal==1)
        {
            printf("%d ",i);
            k++;
        }
        if (k==sayi)
        {
            break;
        }
    }


    return 0;
}
*/

//BU SORULAR ŞADİ EVREN HOCANIN C DERSLERİ DİZİLER DERSİNDEN ALINMADIR!!!
// verilen dizinin elemanlarını tersine çevirin(elemanlarını tersten sırala denmiyor dikkat!)-- SWAPPİNG










// dizi kullanarak fibonacci hesaplama
