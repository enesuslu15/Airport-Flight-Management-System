#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
 char kalkismaNoktasi[50]; // Kalkış noktası
 char varisNoktasi[50]; // Varış noktası
 char ucakModeli[50]; // Uçak modeli
 int kapasite; // Kapasite
} Ucus;
Ucus ucusOlustur(char* dep, char* arr, char* mod, int cap) {
 Ucus ucus;
 strncpy(ucus.kalkismaNoktasi, dep, sizeof(ucus.kalkismaNoktasi) - 1);
 ucus.varisNoktasi[sizeof(ucus.varisNoktasi) - 1] = '\0'; // Null terminator
 strncpy(ucus.ucakModeli, mod, sizeof(ucus.ucakModeli) - 1);
 ucus.ucakModeli[sizeof(ucus.ucakModeli) - 1] = '\0'; // Null terminator
 ucus.kapasite = cap;
 return ucus;
}
void ucusEkle(Ucus ucus, Ucus** ucuslar, int* ucusSayisi) {
 Ucus* temp = realloc(*ucuslar, (*ucusSayisi + 1) * sizeof(Ucus));
 if (temp == NULL) {
 fprintf(stderr, "Bellek tahsisi başarisiz.\n");
 return;
 }
 *ucuslar = temp;
 (*ucuslar)[*ucusSayisi] = ucus;
 (*ucusSayisi)++;
}
void ucusSil(int indeks, Ucus** ucuslar, int* ucusSayisi) {
 if (indeks >= 0 && indeks < *ucusSayisi) {
 memmove(&(*ucuslar)[indeks], &(*ucuslar)[indeks + 1], (*ucusSayisi -
indeks - 1) * sizeof(Ucus));
 Ucus* temp = realloc(*ucuslar, (*ucusSayisi - 1) * sizeof(Ucus));
 if (temp == NULL && (*ucusSayisi - 1) > 0) {
 fprintf(stderr, "Bellek yeniden boyutlandırma basarisiz.\n");
 return;
 }
 *ucuslar = temp;
 (*ucusSayisi)--;
 } else {
 printf("Gecersiz ucus indeksi.\n");
 }
}
void ucuslariYazdir(Ucus* ucuslar, int ucusSayisi) {
 for (int i = 0; i < ucusSayisi; i++) {
 printf("Kalkis Noktasi: %s, Varis Noktasi: %s, Ucak Modeli: %s,Kapasite: %d\n",
 ucuslar[i].kalkismaNoktasi,
 ucuslar[i].varisNoktasi,
 ucuslar[i].ucakModeli,
 ucuslar[i].kapasite);
 }
}
int main() {
 Ucus* ucuslar = NULL;
 int ucusSayisi = 0;
 // Uçuş eklemek için
 ucusEkle(ucusOlustur("IST", "LHR", "Boeing 747", 500), &ucuslar,
&ucusSayisi);
 ucusEkle(ucusOlustur("JFK", "CDG", "Airbus A380", 800), &ucuslar,
&ucusSayisi);
 // Tüm uçuşları göstermek için
 ucuslariYazdir(ucuslar, ucusSayisi);
 // Bir uçuşu silmek için
 ucusSil(0, &ucuslar, &ucusSayisi);
 // Güncellenmiş uçuşları göstermek için
 ucuslariYazdir(ucuslar, ucusSayisi);
 free(ucuslar);
 return 0;
}