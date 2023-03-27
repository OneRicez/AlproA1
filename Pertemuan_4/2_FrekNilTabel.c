/* Nama File    : 2_FrekNilTabel.c */
/* Deskripsi    : menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/* Pembuat      : Nashwan Adenaya - 2406012230084 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
  int i, j; // Counter
  int n; // Ukuran Array/Tabel
  int T[] = {7,4,5,7,6,5,3,5,1,4}; // Tabel T
  int count; // Kemunculan elemen
/* Algoritma */
  n = sizeof(T)/sizeof(T[0]); 
  for (i = 0; i < n; i++){
    count = 1;
    for (j = i + 1; j < n; j++){
      if( T[i] == T[j] ){
        count++;
        T[j] = 0;
      }
    }
    if (count > 1 && T[i] != 0) { // Kemunculan lebih dari satu dan bukan nol
      printf("%d ", T[i]);
    }
  }
  
  return 0;
}