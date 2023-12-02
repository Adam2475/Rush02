#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main() {
    int fd;            // File descriptor
    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;  // Numero di byte letti

    // Apri il file
    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        perror("Errore nell'apertura del file");
        exit(EXIT_FAILURE);
    }

    // Leggi il contenuto del file
    bytesRead = read(fd, buffer, BUFFER_SIZE - 1);
    if (bytesRead == -1) {
        perror("Errore nella lettura del file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    // Assicurati di terminare la stringa letta
    buffer[bytesRead] = '\0';

    // Stampa la stringa letta
    printf("Contenuto del file:\n%s", buffer);

    // Chiudi il file
    if (close(fd) == -1) {
        perror("Errore nella chiusura del file");
        exit(EXIT_FAILURE);
    }

    return 0;
}

