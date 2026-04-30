#include <stdio.h>

// --- Definisi Fungsi Matematika ---

// Fungsi Penjumlahan (Add)
float add(float a, float b) {
    return a + b;
}

// Fungsi Pengurangan (Sub)
float sub(float a, float b) {
    return a - b;
}

// Fungsi Perkalian (Mul)
float mul(float a, float b) {
    return a * b;
}

// Fungsi Pembagian (Div)
float div(float a, float b) {
    // Validasi pembagian dengan angka 0
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
        return 0;
    }
    return a / b;
}

// --- Program Utama ---

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    // Menampilkan menu
    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Penjumlahan (Add)\n");
    printf("2. Pengurangan (Sub)\n");
    printf("3. Perkalian (Mul)\n");
    printf("4. Pembagian (Div)\n");
    printf("Masukkan pilihan Anda (1-4): ");
    
    // Menerima input pilihan pengguna
    scanf("%d", &pilihan);

    // Validasi jika pilihan di luar menu
    if (pilihan < 1 || pilihan > 4) {
        printf("Pilihan tidak valid. Silakan jalankan ulang program.\n");
        return 1;
    }

    // Menerima input angka
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    printf("----------------------------\n");

    // Mengeksekusi operasi berdasarkan pilihan
    switch (pilihan) {
        case 1:
            hasil = add(angka1, angka2);
            printf("Hasil: %.2f + %.2f = %.2f\n", angka1, angka2, hasil);
            break;
        case 2:
            hasil = sub(angka1, angka2);
            printf("Hasil: %.2f - %.2f = %.2f\n", angka1, angka2, hasil);
            break;
        case 3:
            hasil = mul(angka1, angka2);
            printf("Hasil: %.2f * %.2f = %.2f\n", angka1, angka2, hasil);
            break;
        case 4:
            if (angka2 != 0) {
                hasil = div(angka1, angka2);
                printf("Hasil: %.2f / %.2f = %.2f\n", angka1, angka2, hasil);
            } else {
                // Memanggil fungsi div untuk menampilkan pesan error
                div(angka1, angka2); 
            }
            break;
    }

    return 0;
}