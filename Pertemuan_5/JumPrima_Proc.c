/* Nama File    : JumPrima_Func.c */
/* Deskripsi    : menampilkan dan menjumlahkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0  
dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat      : Nashwan Adenaya - 24060122130084 */

#include <stdio.h>
#include <stdlib.h>

/* Prototype */
void jumprime(int N, int *sum);

/* Program Utama */
int main(){
  /* Kamus */
  int N, // bilangan integer sembarang > 0
      sum = 0; // jumlah deret prima

  /* Algoritma */
  printf("Masukkan N: ");
  scanf("%d",&N);
  jumprime(N,&sum); // memanggil fungsi jumprime
  printf("Jumlah bilangan prima yang terbentuk dari deret tersebut: %d\n", sum);
  return 0;
}

/* Procedure */
void jumprime(int N, int *sum){
  /* Kamus Lokal */
  int jumlah = 0, // sebagai jumlah prima
      faktor; // faktor penanda prima (faktor = 2)
  /* Algoritma Procedure */
  for (int i=2; i<=N; i++){
    faktor = 0; 
    for (int j=1; j<=i; j++){
      if (i % j == 0){
        faktor++;
      }
    }
    if(faktor == 2){
      printf("%d ", i); // mencetak bilangan prima
      jumlah++;
      *sum += i; // menambahkan bilangan prima ke dalam jumlah
    }
  }
  printf("\n");
}
