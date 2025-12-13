# Makefile
CC = gcc
CFLAGS = -Wall -g
SOURCES = latihan.c operasi.c  # Ganti main.c menjadi latihan.c jika file Anda bernama latihan.c
EXECUTABLE = latihan_matriks

all: $(EXECUTABLE)

# Ini adalah target (TIDAK ADA INDENTASI)
$(EXECUTABLE): $(SOURCES)
# Ini adalah perintah (HARUS SATU KARAKTER TAB)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
# Ini adalah perintah (HARUS SATU KARAKTER TAB)
	rm -f $(EXECUTABLE) *.o