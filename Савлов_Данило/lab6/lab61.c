#include <stdio.h>
#include <ctype.h>

// Завдання 1: ввести речення і підрахувати кількість голосних і приголосних у ньому.
int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower((unsigned char)sentence[i]);

        // рахуємо тільки літери латиниці
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' || ch == 'y') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
