#include <stdio.h>


int main() {
    int i,j;

    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



int main(){

    int i,j;

    for (i=1;i<=5;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



int main(){

    int i,j;

    for (i=5;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 


int main(){

    int i,j;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i=4;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}


//Klavyeden girilen en ve boy değerlerine göre dikdörtgen oluşturma


int main(){

    int en,boy,i,j;

    printf("Dikdortgenin enini girin:");
    scanf("%d",&en);

    printf("Dikdorgenin boyunu girin:");
    scanf("%d",&boy);

    for (i=1;i<=boy;i++)
    {
        for (j=1;j<=en;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//Klavyeden girilen değerlerle dik üçgen oluşturma


int main(){

    int boy,i,j;

    printf("Ucgenin boyunu girin:");
    scanf("%d",&boy);

    for (i=1;i<=boy;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
 


int main(){

    int boy,i,j;

    printf("Ucgenin boyunu girin:");
    scanf("%d",&boy);

    for (i=boy;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 
