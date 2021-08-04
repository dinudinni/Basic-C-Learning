//Program hapus biner untuk pendataan buku
#include<stdio.h>
void main(){
	FILE*f_mahasiswa;
	FILE*f_mahasiswa2;
	
	char cari[50];
	
	struct{
	char nama[50],nim[50],kelas[50];
}a;

	f_mahasiswa=fopen("Daftar mahasiswa.dat","rb");
	f_mahasiswa2=fopen("Daftar mahasiswa2.dat","wb");
	
	printf("Silakan masukkan nama yang akan dihapus: "); gets(cari);
	
	while(fread(&a,sizeof (a),1,f_mahasiswa)==1){
		if(strcmp(a.nama,cari)!=0){
			fwrite(&a,sizeof(a),1,f_mahasiswa2);
		}
	}
	fclose(f_mahasiswa);
	fclose(f_mahasiswa2);
	
	remove("daftar mahasiswa.dat");
	rename("Daftar mahasiswa2.dat","Daftar mahasiswa.dat");
	
	return 0;
}
