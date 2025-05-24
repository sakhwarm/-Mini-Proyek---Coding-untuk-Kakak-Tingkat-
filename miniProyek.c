//program menghitung rata-rata nilai dan memberi rekomendasi music dari hasil nilai rata-rata tersebut

#include <stdio.h>

int main() {

    int i, n; //variabel i untuk looping for dan variabel n untuk menyimpan input dari user
    int jumlahNilai; //variabel untuk menyimpan hasil penjumlahan
    int nilai[100]; //array untuk batas nilai yang akan diinputkan oleh user
    int rataRata; //variabel untuk menyimpan rata-rata

    printf("Program Menghitung Rata-rata Nilai dan Memberi Rekomendasi Music\n");
    printf("================================================================\n");

    printf("Input Jumlah Nilai Yang Akan di Hitung *Maksimal 100:"); //user memasukkan jumlah nilai
    scanf("%d", &n);

    while(n>100){ //proses looping while di mana user tidak bisa menginput nilai lebih dari 100 jika iya maka user akan diminta untuk menginput ulang
        printf("404 Silahkan Coba lagi\n");
        printf("Input Jumlah Nilai Yang Akan di Hitung *Maksimal 100:");
        scanf("%d", &n);
    }

    for (i = 1; i<=n; i++) { //proses looping for untuk menjumlahkan nilai dari yang sudah diinput oleh user
        printf("Input Nilai ke- %d:", i); //untuk user input nilai sesuai dengan jumlah nilai atau n yang sudah diinputkan sebelumnya oleh user
        scanf("%d", &nilai[i]);
        jumlahNilai = jumlahNilai + nilai[i];
    }
    
    rataRata = jumlahNilai/n; //aritmatika untuk menghitung rata-rata

    printf("================================================================\n");

    if(rataRata==100){ //tambahan fitur yaitu memberikan rekomendasi lagu sesuai dengan nilai rata-rata yang dihasilkan
        printf("play music SEMPURNA by Andra & The Backbone\n");
    }
    else if(rataRata>=90){
        printf("play music MELOMPAT LEBIH TINGGI by Sheila On 7\n");
    }
    else if(rataRata>=70 && rataRata<=89){
        printf("play music HEBAT by Tangga\n");
    }
    else {
        printf("play music PASTI BISA by Citra Scholastika\n");
    }
    

    printf("Rata-rata Dari %d Nilai Yang diInput: %d", n, rataRata);

}
