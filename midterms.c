#include <stdio.h>

// 3 basamaklı rakamları birbirinden farklı kaç sayı vardır?

/*
int main() {

    int i,sayi;
    int yuzler,onlar,birler,t=0;

    for (i=100;i<1000;i++)
    {
        sayi=i;

        yuzler = sayi / 100;
        onlar = (sayi / 10) % 10;
        birler = sayi % 10;

        if (yuzler != onlar && onlar != birler &&yuzler!=birler)
        {
            t+=1;
        }
    }
    printf("Uc basamakli rakamlari farkli %d sayi vardir..",t);


    return 0;
}
 */

// klavyeden girilen sayinin tam bölenlerini bulun

/*
int main(){

    int i,sayi;

    printf("sayi girin: ");
    scanf("%d",&sayi);

    for (i=1;i<=sayi;i++)
    {
        if (sayi%i==0)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}
*/

// ********************** 2. sınav *********************

/*
int main(){

    int sayi=1,i;

    for (i=1;i<=24;i++)
    {
        sayi =sayi*2;
    }
    printf("24 saatin sonunda toplam bakteri sayisi: %d",sayi);

    return 0;
}
*/

// klavyeden 0 girilene kdar girilen sayıları toplayan program

/*
int main(){
    int toplam=0,sayi,i;

    for (i=0;i<1000;i++)
    {
        printf("%d. sayiyi girin:",i+1);
        scanf("%d", &sayi);

        if (sayi != 0) {
            toplam += sayi;
        }
        else
        {
            printf("Grilen sayilarin toplami:%d", toplam);
            break;
        }
    }

    return 0;

}
 */

//otopark ucretlendirme

/*
int main(){

    int borc,saat;

    printf("Otoparkta kac saat kaldiniz:");
    scanf("%d",&saat);

    if (0<=saat && saat<=4)
    {
        printf("Borcunuz: 10 TL");
    }
    if (5<=saat && saat<=8)
    {
        printf("Borcunuz: 12 TL");
    }
    if (9<=saat && saat<=12)
    {
        printf("Borcunuz: 15 TL");
    }
    if (12<saat)
    {
        borc= 15+(saat-12)*2;
        printf("Borcunuz: %d TL",borc);
    }

    return 0;
}
*/

// ********************** 3. sınav *********************

/*
int main(){

    int i,j,taban;

    printf("Taban uzunlugu girin:");
    scanf("%d",&taban);

    for (i=taban;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

/*
int main(){

    int i,toplam=0;

    for (i=0;i<=81;i+=4)
    {
        toplam +=i;
    }

    printf("toplam: %d",toplam);

    return 0;
}
*/

/*
int main(){

    int maclar[10]={2,1,0,0,2,1,1,2,1,0};
    int i,puan=0;

    for (i=0;i<10;i++)
    {
        if (maclar[i]==0)
        {
            puan +=1;
        }
        if (maclar[i]==1)
        {
            puan +=0;
        }
        if (maclar[i]==2)
        {
            puan +=3;
        }
    }

    printf("Toplam puaniniz: %d\n",puan);

    if (puan>=12)
    {
        printf("Tebrikler ligde kalmaya devam ettiniz!");
    }
    else
    {
        printf("Uzgunuz kume dustunuz...");
    }

    return 0;
}
 */



// ********************** 4. sınav *********************

/*
int main(){

    int el,bagaj,ucretEl,ucretBagaj,toplam;

    printf("El :");
    scanf("%d",&el);

    printf("Bagaj :");
    scanf("%d",&bagaj);

    if (el>8)
    {
        ucretEl = (el-8)*4;
    }
    else
    {
        ucretEl=0;
    }

    if (bagaj>15)
    {
        ucretBagaj =(bagaj-15)*5;
    }
    else
    {
        ucretBagaj=0;
    }

    toplam=ucretEl+ucretBagaj;
    printf("toplam odenecek:%d",toplam);
    return 0;
}
 */

/*
int main(){

    int sayi1,sayi2,i,toplam=0;

    hataliysa:
    printf("Kucuk sayiyi gir:");
    scanf("%d",&sayi1);

    printf("Buyuk sayiyi gir:");
    scanf("%d",&sayi2);

    if (sayi1!=sayi2 && sayi1<sayi2)
    {
        for (i = sayi1; i <= sayi2; i++) {
            toplam += i;
        }
        printf("Belirlenen araliktaki sayilar toplami:%d", toplam);
    }

    else
    {
        printf("Sayilari kontol edin!\n");
        goto hataliysa;
    }

    return 0;
}
 */


/*
int main(){

    int kis=320,ilkbahar,yaz,sonbahar;
    int toplam;

    ilkbahar=kis/4;
    yaz=ilkbahar*8;
    sonbahar=yaz/10;

    toplam=kis+ilkbahar+yaz+sonbahar;

    printf("Toplam:%d",toplam);

    return 0;
}
 */

/*
int main(){

    int toplam,sayi,birler,onlar,yuzler;

    printf("Uc basamakli bir sayi gir:");
    scanf("%d",&sayi);

    yuzler=sayi/100;
    onlar=(sayi/10)%10;
    birler=sayi%10;

    toplam=yuzler+onlar+birler;
    printf("Rakamlar toplami:%d",toplam);

    return 0;
}
 */
