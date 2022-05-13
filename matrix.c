#include <stdio.h>

/*
int main() {

    int dizi[2][3]={10,20,30,40,50,60};
    int i,j;

    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//satır ve sütun sayısı ile matrisin elemanlarını kullanıcıdan al ve bu matrisi yazdır

/*
int main(){

    int satir,sutun;

    printf("Satir sayisi: ");
    scanf("%d",&satir);

    printf("Sutun sayisi: ");
    scanf("%d",&sutun);

    int matris[satir][sutun];
    int i,j;

    for (i=0;i<satir;i++)
    {
        for (j=0;j<sutun;j++)
        {
            printf("[%d][%d]--->",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    for (i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }


    return 0;
}
 */

// kullanıcıdan aldığın iki matrisin elemanlarını topla

/*
int main(){

    int satir,sutun;
    int i,j;

    printf("Satir sayisi: ");
    scanf("%d",&satir);

    printf("Sutun sayisi: ");
    scanf("%d",&sutun);

    int m1[satir][sutun];

    for (i=0;i<satir;i++)
    {
        for (j=0;j<sutun;j++)
        {
            printf("[%d][%d]--->",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }


    int satir2,sutun2;

    printf("2. matrisin Satir sayisi: ");
    scanf("%d",&satir2);

    printf("2. matrisin Sutun sayisi: ");
    scanf("%d",&sutun2);

    int m2[satir2][sutun2];

    for (i=0;i<satir2;i++)
    {
        for (j=0;j<sutun2;j++)
        {
            printf("[%d][%d]--->",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    //bu aşamaya kadar her iki matriste belirlendi

    int toplam[satir][sutun];

    if (satir==satir2 && sutun==sutun2)
    {
        for (i=0;i<satir;i++)
        {
            for (j=0;j<sutun;j++)
            {
                toplam[i][j]=m1[i][j]+m2[i][j];
            }
        }

        // toplam matrisi olusturuldu ve simdi onu ekranda gosterecegiz

        for (i=0;i<satir;i++)
        {
            for (j=0;j<sutun;j++)
            {
                printf("%d ",toplam[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Satir ve sutun sayisi esit olmali!");
    }

    return 0;
}
 */



// klavyeden girilen iki matriisi çarpımı

/*
int main() {


    int i,j,k;

    int m1[2][2]={0};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("[%d][%d]--->", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }


    int m2[2][2]={0};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("[%d][%d]--->", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    //bu aşamaya kadar her iki matris de belirlendi

    int carpim[2][2]={0};

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            for (k=0;k<2;k++)
            {
                carpim[i][j]  += m1[i][k]*m2[k][j];
            }
            printf("%d ",carpim[i][j]);
        }
        printf("\n");

    }

        return 0;

}
*/
