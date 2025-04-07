# Projekto paleidimo instrukcija

1. Naudodami git, galite klonuoti si projekta su komanda `git clone https://github.com/LiveLiveta/Objektinis-Programavimas.git`
2. Sukurkite projekto .exe faila, paleisdami `make` komanda projekto direktorijoje
3. Paleiskite projekta, paleisdami `./vektoriai` komanda

# Testai

## Strategija 1, konteineris: vector, duomenu tipas: klase

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0187384 s     | 0.0025954 s      | 0.001142 s        |
| 10000           | 0.0464928 s     | 0.0173884 s      | 0.0080451 s       |
| 100000          | 0.554703 s      | 0.299301 s       | 0.076983 s        |
| 1000000         | 3.4679 s        | 2.6752 s         | 0.528214 s        |
| 10000000        | 3.16855 s       | 2.72026 s        | 0.54384 s         |

## Strategija 1, konteineris: vector, duomenu tipas: struktura

|                 |             |             |             |
| --------------- | ----------- | ----------- | ----------- |
| Studentu kiekis | Skaitymas   | Rikiavimas  | Skirstymas  |
| 1000            | 0.0067999 s | 0.000899 s  | 0.0004967 s |
| 10000           | 0.0451155 s | 0.0144912 s | 0.0055211 s |
| 100000          | 0.379105 s  | 0.166723 s  | 0.0503665 s |
| 1000000         | 3.25661 s   | 1.66952 s   | 0.473 s     |
| 10000000        | 33.9667 s   | 22.6545 s   | 6.74625 s   |

## Optimizacija: O1

### Strategija 1, konteineris: vector, duomenu tipas: struktura

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0094153 s     | 0.0013946 s      | 0.0009067 s       |
| 10000           | 0.039356 s      | 0.0102844 s      | 0.0044495 s       |
| 100000          | 0.459079 s      | 0.132962 s       | 0.0401917 s       |
| 1000000         | 3.18286 s       | 1.65428 s        | 0.394068 s        |
| 10000000        | 4.20815 s       | 2.29853 s        | 0.489148 s        |

### Strategija 1, konteineris: vector, duomenu tipas: klase

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0054214 s     | 0.0025882 s      | 0.0013273 s       |
| 10000           | 0.0669519 s     | 0.0284689 s      | 0.0097124 s       |
| 100000          | 0.53748 s       | 0.330003 s       | 0.0805236 s       |
| 1000000         | 5.04228 s       | 3.85004 s        | 0.75049 s         |
| 10000000        | 4.96189 s       | 3.26852 s        | 0.624351 s        |
