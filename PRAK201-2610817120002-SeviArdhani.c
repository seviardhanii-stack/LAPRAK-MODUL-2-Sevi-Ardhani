#include <stdio.h>

int main() {
    char nama[50], nim[50], kelas_paralel[50], ttl[50], alamat[100], hobby[50], no_hp[30];

    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("NIM                   : ");
    fgets(nim, sizeof(nim), stdin);
    
    printf("Kelas Paralel         : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    
    printf("Tempat/Tanggal Lahir  : ");
    fgets(ttl, sizeof(ttl), stdin);
    
    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);
    
    printf("Hobby                 : ");
    fgets(hobby, sizeof(hobby), stdin);
    
    printf("No. HP                : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\n--- OUTPUT ---");
    printf("\nNama                  : %s", nama);
    printf("NIM                   : %s", nim);
    printf("Kelas Paralel         : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir  : %s", ttl);
    printf("Alamat                : %s", alamat);
    printf("Hobby                 : %s", hobby);

    return 0;
}