#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
