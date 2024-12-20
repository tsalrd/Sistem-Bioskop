FILE *file = fopen("riwayat_tiket.csv", "w");
if (file == NULL) {
    printf("Gagal membuka file!\n");
    return;
}
