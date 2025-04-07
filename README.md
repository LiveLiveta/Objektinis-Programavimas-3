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
| 1000            | 0.0064206 s     | 0.0006721 s      | 0.0004453 s       |
| 10000           | 0.0630172 s     | 0.0037798 s      | 0.004321 s        |
| 100000          | 0.491349 s      | 0.0531723 s      | 0.0415576 s       |
| 1000000         | 3.50831 s       | 0.442264 s       | 0.323002 s        |
| 10000000        | 3.51897 s       | 0.351057 s       | 0.288263 s        |

### Strategija 1, konteineris: vector, duomenu tipas: klase

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0041683 s     | 0.0007185 s      | 0.0004925 s       |
| 10000           | 0.0346105 s     | 0.0063844 s      | 0.00333 s         |
| 100000          | 0.225924 s      | 0.0731626 s      | 0.0277155 s       |
| 1000000         | 2.47328 s       | 1.06697 s        | 0.339018 s        |
| 10000000        | 3.62191 s       | 1.5846 s         | 0.36761 s         |
