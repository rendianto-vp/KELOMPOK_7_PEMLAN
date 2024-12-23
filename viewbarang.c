void viewBarang() {
    printf("Data barang:\n");
    printf("%-10s %-20s %-20s %-10s %-20s\n", "ID", "Nama", "Kategori", "Stok", "Lokasi");
    printf("===============================================================\n");
    
    int i;
    for (i = 0; i < jumlahBarang; i++) {
        printf("%-10d %-20s %-20s %-10d %-20s\n", barang[i].id, barang[i].nama, barang[i].kategori,
               barang[i].jumlah, barang[i].lokasi);
    }
}
