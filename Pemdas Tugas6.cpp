#include <stdio.h>
int main(){
  
  printf("Tugas 2 Menghitung sebuah Volume Kubus\n");
  printf("---------------------------------------\n");
  
  float sisi;
  int volume;
  
  
  printf("Masukkan nilai dari ketiga sisi kubus : ");
  scanf("%f", &sisi);
  
  if(sisi == (int)sisi ){
  	volume = sisi * sisi * sisi;
  	
	printf("---------------------------------------\n");
    printf("Hasil perhitungan volume kubus adalah %i", volume);
    printf("\n\n\n");
  }else{
  	printf("Tipe Data tidak sesuai\n");
  }
  
  return 0;
}
