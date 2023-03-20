/* Nama File    : 3_JumFrekNilTabel.c */
/* Deskripsi    : menampilkan dan menjumlahkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/* Pembuat      : Nashwan Adenaya - 2406012230084 */

#include <stdio.h>
#include <stdlib.h>

  int main(){
/* Kamus */
  int N; // Ukuran Tabel T
  int T[] = {7,4,5,7,6,5,3,5,1,4}; // Tabel T
  int count; // kemunculan elemen
  int i,j; // counter
  int sum; // jumlah
/* Algoritma */
  N = sizeof(T)/sizeof(T[0]);
  sum = 0;
  for (i = 0; i < N; i++){
    count = 1;
    for (j = i + 1 ; j < N;j++){
      if (T[i] != 0 && T[j] == T[i]){
        count += 1;
        T[j] = 0; // agar tidak terhitung ulang
      }
    }
    if (count > 1){
      sum = sum + (count * T[i]);
    }
  }
  printf("%d", sum);
}
