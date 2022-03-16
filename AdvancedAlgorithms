#include <stdio.h>

// Make a plus with Matrix


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


//The largest prime number smaller than the entered number.


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




//The program that gives the approximate value of the base 2 logarithm of the number you receive from the user..


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



//Code that reads age and averages ages until -1 is entered.


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


//program that gives prime numbers as many as the given number..


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
