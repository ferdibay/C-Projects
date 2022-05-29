#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fact(int num);
double rand_double();
int sample_geometric_rv(double p);

int main(){
    
    FILE *dosya=fopen("odev_c.txt","r");
    FILE *dosya2=fopen("Odev2_sonuc.txt","w");

    char karakter;
    char satir[256];
    int i,sayac=0;

    
    //a) dosya içeriğini okuyup konsoldo bastırmak için
    while(!feof(dosya)){
        karakter=getc(dosya);
        putchar(karakter);
    }


   //b) her satırda l harfinin ne kadar kullanıldığını saymak 
   //ve Odev2_sonuc.txt dosyasına yazmak için
   
    while(!feof(dosya)){
        
        if(fgets(satir,100,dosya)!=NULL)
        {
            karakter=getc(dosya);
            if(karakter=='l')
                {
                  sayac+=1;
                }
                i++;
        }
        
        fprintf(dosya2,"%d. satir--->L %d kere kullanilmistir.\n",i,sayac);
    }        


   // c) her karakteri tek bir satıra yazdıran kod 
    while(!feof(dosya)){
        karakter=getc(dosya);
        printf("%c\n",karakter);
    }
    
    fclose(dosya);
    fclose(dosya2);

    return 0;
}


int fact(int num){
    int i=1,ret=1;

    while(i<=num){
        ret *=i;
        i++;
    }
    return ret;
}

double rand_double(){
    double ret =(double)rand();
    return ret / (RAND_MAX +1);
}

int sample_geometric_rv(double p){
    double q;
    int n=0;

    while(q>=p){                        
        q=rand_double();
        n++;
    }
    return n;
}