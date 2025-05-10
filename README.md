# Projekto paleidimo instrukcija

1. Naudodami git, galite klonuoti si projekta su komanda `git clone https://github.com/LiveLiveta/Objektinis-Programavimas.git`
2. Sukurkite projekto .exe faila, paleisdami `make` komanda projekto direktorijoje
3. Paleiskite projekta, paleisdami `./vektoriai` komanda

# Testai

## Strategija 1, konteineris: vector, duomenu tipas: klase +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0078709 s     | 0.0026605 s      | 0.0013088 s       |
| 10000           | 0.0733157 s     | 0.0227285 s      | 0.0064966 s       |
| 100000          | 0.372429 s      | 0.237906 s       | 0.0603885 s       |
| 1000000         | 3.59903 s       | 3.10719 s        | 0.637031 s        |
| 10000000        | 43.0755 s       | 47.4339 s        | 7.08653 s         |

## Strategija 1, konteineris: vector, duomenu tipas: struktura +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0056594 s     | 0.0023562 s      | 0.0012052 s       |
| 10000           | 0.0455578 s     | 0.0188143 s      | 0.0072981 s       |
| 100000          | 0.443563 s      | 0.249256 s       | 0.0669365 s       |
| 1000000         | 3.57023 s       | 3.25399 s        | 0.618061 s        |
| 10000000        | 40.5932 s       | 48.5612 s        | 7.47094 s         |

## Optimizacija: O1

### Strategija 1, konteineris: vector, duomenu tipas: struktura +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0049481 s     | 0.0009946 s      | 0.0006666 s       |
| 10000           | 0.0411275 s     | 0.0077642 s      | 0.0031267 s       |
| 100000          | 0.277411 s      | 0.0936089 s      | 0.0415893 s       |
| 1000000         | 2.83898 s       | 1.03747 s        | 0.353189 s        |
| 10000000        | 28.0223 s       | 19.4457 s        | 4.5401 s          |

### Strategija 1, konteineris: vector, duomenu tipas: klase +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0051615 s     | 0.0010357 s      | 0.0007957 s       |
| 10000           | 0.0389726 s     | 0.0073931 s      | 0.0028394 s       |
| 100000          | 0.262372 s      | 0.0859877 s      | 0.0310893 s       |
| 1000000         | 2.54161 s       | 1.04326 s        | 0.325477 s        |
| 10000000        | 32.3925 s       | 23.4776 s        | 4.18133 s         |

## Optimizacija: O2

### Strategija 1, konteineris: vector, duomenu tipas: struktura +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0051699 s     | 0.0006635 s      | 0.000436 s        |
| 10000           | 0.0379266 s     | 0.0094879 s      | 0.0039316 s       |
| 100000          | 0.263982 s      | 0.0933424 s      | 0.0344979 s       |
| 1000000         | 2.63518 s       | 1.00792 s        | 0.330343 s        |
| 10000000        | 29.246 s        | 21.3922 s        | 4.35245 s         |

### Strategija 1, konteineris: vector, duomenu tipas: klase +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0048522 s     | 0.0007731 s      | 0.0005992 s       |
| 10000           | 0.0340502 s     | 0.0065104 s      | 0.0031781 s       |
| 100000          | 0.253193 s      | 0.0793256 s      | 0.0365522 s       |
| 1000000         | 2.57298 s       | 1.02315 s        | 0.346465 s        |
| 10000000        | 28.1724 s       | 18.8565 s        | 4.2299 s          |

## Optimizacija: O3

### Strategija 1, konteineris: vector, duomenu tipas: struktura +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0060205 s     | 0.0008658 s      | 0.0004774 s       |
| 10000           | 0.0377913 s     | 0.0079911 s      | 0.0042306 s       |
| 100000          | 0.265273 s      | 0.0817811 s      | 0.0328203 s       |
| 1000000         | 3.25478 s       | 1.06061 s        | 0.341586 s        |
| 10000000        | 30.0521 s       | 19.1179 s        | 4.42345 s         |

### Strategija 1, konteineris: vector, duomenu tipas: klase +

| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| --------------- | --------------- | ---------------- | ----------------- |
| 1000            | 0.0050069 s     | 0.0008638 s      | 0.0007102 s       |
| 10000           | 0.0350589 s     | 0.007263 s       | 0.0041975 s       |
| 100000          | 0.267193 s      | 0.0846852 s      | 0.0300512 s       |
| 1000000         | 2.60526 s       | 1.03718 s        | 0.343012 s        |
| 10000000        | 29.0081 s       | 18.8643 s        | 4.48713 s         |

## Failu dydziai:

### su strukturomis

vektoriai.exe : 622KB
vektoriai_O1.exe : 319KB
vektoriai_O2.exe : 298KB
vektoriai_O3.exe : 294KB

### su klasemis

vektoriai.exe : 712KB
vektoriai_O1.exe : 349KB
vektoriai_O2.exe : 317KB
vektoriai_O3.exe : 310KB
