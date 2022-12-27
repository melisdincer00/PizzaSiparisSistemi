#include <stdio.h>
#include <stdlib.h>

	void merhaba(){
		
		printf("Melis Pizzaya Hos Geldiniz \n");
		printf("Lutfen Ad-Soyad giriniz: \n");
		char adsoyad[25];
		gets(adsoyad);
		printf("Sayin %s,pizza siparisi verebilirsiniz\n",adsoyad);
	

	}
	int odemeyontemi(){
		
		int odeme;
		printf("Odeme yontemi seciniz: \n");
		printf("1)Kredi Karti\n");
		printf("2)Kapida odeme \n");
		scanf("%d",&odeme);
		return odeme;
	}
	
	
int main() {

	
	printf("Subelerimize asagidan bakabilirsiniz:\n");
	
	FILE* *dosya;

	int c=0;

	dosya=fopen("subeler.txt","r");

	if(dosya==NULL)

		printf("bu dosya yok\n");

	else

		{

			do

			{

				c=getc(dosya);

				putchar(c);
			}

			while(c!=EOF);

			

		}

	fclose(dosya);
	
	
	int indirim(toplam)
{	
    int miktar=0; 
    int yas=0;
    printf("Lutfen yasinizi giriniz\n");
    scanf("%d",&yas);
    if(yas>=18 && yas<=25)
    {
        miktar-=10;
        printf("10 TL indirim kazandiniz\n");
        
    }   
    else
        printf("indirim uygulanmamistir.\n");
    
    return miktar;
}
	
	merhaba();
	
	float toplam=0;
	int secim=0;
	char boyut=0;
	char icecek=0;
	char cevap=0;
	char ekstra_malzeme=0;
	toplam = indirim(toplam);
	

	
	printf("Pizzanizi seciniz.\n"
		"1--->Bol sucuklu karisik pizza(76TL)\n"
		"2--->Fume kaburgali pizza(82TL)\n"
		"3--->Vejetaryen pizza(60TL)\n"
		"4--->Margarita pizza(67TL)\n"
		"5--->Ton balikli pizza(69TL)\n"
		"6--->Cheddarli tavuklu pizza(73TL)\n"
		"7--->Cocuk menu(54TL)\n"
		);
	scanf("%d",&secim);
	if(secim==1)
		toplam+=76;
	else if(secim==2)
		toplam+=82;
	else if(secim==3)
		toplam+=60;
	else if(secim==4)
		toplam+=67;
	else if(secim==5)
		toplam+=69;
	else if(secim==6)
		toplam+=73;
	else if(secim==7)
		toplam+=54;
	else
		printf("Lutfen gecerli bir secim yapiniz\n");
	
	if(secim==7){
		char* oyuncak[3][3]={{"Shrek--","Bugs Bunny--","Spider Man"},{"Tweety--","Sponge Bob--","Pepe"},{"Barbie--","Batman--","Patrick"}};
		char i,j;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%s",oyuncak[i][j]);
			}
			printf("\n");
			
			
		}
			printf("Lutfen oyuncak seciniz:\n");
	    	scanf("%s",oyuncak);
	
	}
	

	
	printf("Pizza boyutunu seciniz\n"
		"B--->Buyuk pizza(5TL)\n"
		"O--->Orta boy pizza\n"
		"K--->Kucuk boy pizza\n"
		
	);
	scanf("%s",&boyut);
	if(boyut=='B'||boyut=='b')
		toplam+=5;
	else
		toplam+=0;
		
	printf("icecek seciniz\n"
		"a--->ayran(8tl)\n"
		"k--->kola(12tl)\n"
		"s--->sprite(11tl)\n"
		"f--->fanta(12tl)\n"
	);
	scanf("%s",&icecek);
	if(icecek=='a')
		toplam+=8;
	else if(icecek=='k')
		toplam+=12;
	else if(icecek=='s')
		toplam+=11;
	else if(icecek=='f')
		toplam+=12;
	else
		printf("Lutfen gecerli bir secim yapiniz\n");
	
	printf("Ekstra malzeme ister misiniz?E/H\n");
	scanf("%s",&cevap);
	if(cevap=='E'||cevap=='e')
	{
	
		printf("Ekstra Malzemeler:\n"
		"S--->Sucuk(4TL)\n"
		"MO--->Mozarella(3TL)\n"
		"F--->Fume(9TL)\n"
		"C--->Cheddar(2TL)\n"
		"K--->Kavurma(8TL)\n"
		);
		scanf("%s",&ekstra_malzeme);
		
        ekstra_malzeme=toupper(ekstra_malzeme);
		
		switch(ekstra_malzeme)
		{
		
	
				case'S':
					printf("Ekstra sucuk eklenmistir\n");
				toplam+=4;
				break;
				
				case'M':
					printf("Ekstra misir eklenmistir\n");
				toplam+=3;
				break;
			
				case'F':
					printf("Ekstra fume eklenmistir\n");
				toplam+=9;
				break;
				
				case'C':
					printf("Ekstra cheddar eklenmistir\n");
				toplam+=2;
				break;
			
				case'K':
					printf("Ekstra kavurma eklenmistir\n");	
				toplam+=8.4;
				break;
	    }
		
    }
  
  
  	
  
  
  	
  
    odemeyontemi(); 
    printf("toplam ucretiniz: %2.f TL'dir",toplam);
    scanf("%d",&toplam);
    toplam=secim+boyut+icecek+ekstra_malzeme-indirim();
    
    indirim();
	return 0;
}
