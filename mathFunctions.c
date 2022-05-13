#include <stdio.h>
#include <math.h>

// degiskenlerin double yani gercel sayi olarak atanması programi daha temiz ve doğru calistiracaktir..

/*
int main() {
    double sayi;
    int taban,tavan;

    printf("sayi gir:");
    scanf("%lf",&sayi);

    taban= floor(sayi);
    tavan= ceil(sayi);

    printf("taban:%d\n",taban);
    printf("tavan:%d",tavan);

    return 0;
}
 */


/*
int main(){

    double sayi,kok;

    printf("sayi girin:");
    scanf("%lf",&sayi);

    kok= sqrt(sayi);
    printf("%.2lf",kok); //virgülden önce 1 virgülden önce bir saayi olsun demektir..

    return 0;
}
*/


/*
int main(){

    double sonuc,taban,us;

    printf("taban:");
    scanf("%lf",&taban);
    printf("us:");
    scanf("%lf",&us);

    sonuc= pow(taban,us);

    printf("%.2lf ussu %.2lf: %.2lf'e esittir..",taban,us,sonuc);

    return 0;
}
 */


/*
int main(){

    double sayi,sonuc,sonucmutlak;

    printf("sayi gir:");
    scanf("%lf",&sayi);

    sonuc= log10(sayi);
    sonucmutlak= fabs(sayi);

    printf("sonuc:%.2lf\n",sonuc);
    printf("mutlak degeri:%.2lf",sonucmutlak);

    return 0;
}
 */

/*
#define PI 3.14159

int main(){

    double deger,derece,sinusSonuc,cosinusSonuc,tanjantSonuc;

    printf("dereceyi gir:");
    scanf("%lf",&deger);

    derece =deger*PI/180;

    sinusSonuc= sin(derece);
    cosinusSonuc= cos(derece);
    tanjantSonuc= tan(derece);

    printf("Sinus:%.2lf Cosinus:%2.lf Tanjant:%.2lf",sinusSonuc,cosinusSonuc,tanjantSonuc);


    return 0;
}
 */
