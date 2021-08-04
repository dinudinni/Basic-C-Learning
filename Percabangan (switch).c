#include<stdio.h>
char a;
int main(){
	printf("Jadwal piket asisten daskom\n");
	printf("Masukkan kode asisten:");
	scanf("%s",&a);
	
	switch (a)
	{
	case 'FLY' :
		printf("FLY piket hari Senin");break;
	case 'NOO' : 
		printf("NOO piket hari Selasa");break;
	case 'AMF' : 
		printf("AMF piket hari Rabu");break;
	case 'HNA' : 
		printf("HNA piket hari Kamis");break;
	case 'IZZ' : 
		printf("IZZ piket hari Jumat");break;
	case 'RAQ' : 
		printf("RAQ piket hari Sabtu");break;
	default : 
	printf("Kode tidak ditemukan");break;
	}
	
}

