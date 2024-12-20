void saveTicketsToCSV(TicketNode* head, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menulis data!\n");
        return;
    }

    fprintf(file, "Nama,Nomor Kursi,Film\n"); // Header
    TicketNode* temp = head;
    while (temp != NULL) {
        fprintf(file, "%s,%d,%s\n", temp->name, temp->seatNumber, temp->movie);
        temp = temp->next;
    }
    fclose(file);
    printf("Riwayat transaksi berhasil disimpan ke file %s.\n", filename);
}

