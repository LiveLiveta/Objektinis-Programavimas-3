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

## Optimizacija: O2

### Strategija 1, konteineris: vector, duomenu tipas: struktura

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0101266 s     | 0.0005713 s      | 0.0006246 s       |
| 10000           | 0.0275356 s     | 0.0015958 s      | 0.0026655 s       |
| 100000          | 0.239583 s      | 0.0266187 s      | 0.0226893 s       |
| 1000000         | 2.20875 s       | 0.305261 s       | 0.23545 s         |
| 10000000        | 4.35964 s       | 0.850409 s       | 0.433324 s        |

### Strategija 1, konteineris: vector, duomenu tipas: klase

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0032936 s     | 0.0005334 s      | 0.0006714 s       |
| 10000           | 0.0493008 s     | 0.0114337 s      | 0.0065617 s       |
| 100000          | 0.447514 s      | 0.152694 s       | 0.0603926 s       |
| 1000000         | 4.67117 s       | 1.98655 s        | 0.563572 s        |
| 10000000        | 4.95353 s       | 1.89983 s        | 0.423116 s        |

## Optimizacija: O3

### Strategija 1, konteineris: vector, duomenu tipas: struktura

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0075853 s     | 0.0005195 s      | 0.0006241 s       |
| 10000           | 0.0287904 s     | 0.0025298 s      | 0.0021945 s       |
| 100000          | 0.235563 s      | 0.0220492 s      | 0.0218198 s       |
| 1000000         | 2.67391 s       | 0.281722 s       | 0.254976 s        |
| 10000000        | 3.97697 s       | 0.518433 s       | 0.417878 s        |

### Strategija 1, konteineris: vector, duomenu tipas: klase

|                 |                 |                  |                   |
| --------------- | --------------- | ---------------- | ----------------- |
| Studentu kiekis | failo skaitymas | failo rikiavimas | failo filtravimas |
| 1000            | 0.0048808 s     | 0.0008823 s      | 0.0006448 s       |
| 10000           | 0.0644253 s     | 0.0124485 s      | 0.0111525 s       |
| 100000          | 0.455858 s      | 0.132958 s       | 0.0530912 s       |
| 1000000         | 4.73698 s       | 1.63243 s        | 0.424595 s        |
| 10000000        | 4.99333 s       | 1.27652 s        | 0.339926 s        |

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

# "Rule of Five"

**Kas yra "Rule of Five"?**  
C++ kalboje, jei klasė valdo išteklius (pvz., dinaminę atmintį, failus ar pan.), reikia apibrėžti penkis specialius metodus:

1. Destruktorius
2. Kopijavimo konstruktorius
3. Kopijavimo priskyrimo operatorius
4. Perkėlimo konstruktorius
5. Perkėlimo priskyrimo operatorius

---

## Kiekvieno metodo paaiškinimas

### 1. Destruktorius

**Paskirtis:**

- Atlaisvina išteklius, kai objektas sunaikinamas.

**Pavyzdys:**

```cpp
Studentas::~Studentas() {
    vardas.clear();
    pavarde.clear();
    pazymiai.clear();
}
```

---

### 2. Kopijavimo konstruktorius

**Paskirtis:**

- Sukuria naują objektą kaip tikslią kito objekto kopiją.

**Panaudojimas:**

- Naudojamas, kai reikia nukopijuoti objektą, kad būtų sukurtas nepriklausomas jo dublikatas.

**Pavyzdys:**

```cpp
Studentas::Studentas(const Studentas& originalas) {
    pavarde = originalas.pavarde;
    vardas = originalas.vardas;
    pazymiai = originalas.pazymiai;
    egzamino_pazymys = originalas.egzamino_pazymys;
    vidurkis = originalas.vidurkis;
    mediana = originalas.mediana;
}
```

---

### 3. Kopijavimo priskyrimo operatorius

**Paskirtis:**

- Pakeičia esamo objekto turinį kitu objektu.

**Panaudojimas:**

- `a = b;` kai abu objektai jau egzistuoja.

**Pavyzdys:**

```cpp
Studentas& Studentas::operator=(const Studentas& originalas) {
    if (this != &originalas) {
        pavarde = originalas.pavarde;
        vardas = originalas.vardas;
        pazymiai = originalas.pazymiai;
        egzamino_pazymys = originalas.egzamino_pazymys;
        vidurkis = originalas.vidurkis;
        mediana = originalas.mediana;
    }
    return *this;
}
```

---

### 4. Perkėlimo konstruktorius

**Paskirtis:**

- Sukuria naują objektą, "pavogdamas" išteklius iš kito objekto.

**Panaudojimas:**

- Efektyvus darbas su laikinais objektais.

**Pavyzdys:**

```cpp
Studentas::Studentas(Studentas&& originalas) noexcept {
    pavarde = move(originalas.pavarde);
    vardas = move(originalas.vardas);
    pazymiai = move(originalas.pazymiai);
    egzamino_pazymys = originalas.egzamino_pazymys;
    vidurkis = originalas.vidurkis;
    mediana = originalas.mediana;

    originalas.egzamino_pazymys = 0;
    originalas.vidurkis = 0;
    originalas.mediana = 0;
}
```

---

### 5. Perkėlimo priskyrimo operatorius

**Paskirtis:**

- Pakeičia objekto turinį, "pavogdamas" iš kito objekto išteklius.

**Panaudojimas:**

- `a = move(b);`

**Pavyzdys:**

```cpp
Studentas& Studentas::operator=(Studentas&& originalas) noexcept {
    if (this != &originalas) {
        pavarde = move(originalas.pavarde);
        vardas = move(originalas.vardas);
        pazymiai = move(originalas.pazymiai);
        egzamino_pazymys = originalas.egzamino_pazymys;
        vidurkis = originalas.vidurkis;
        mediana = originalas.mediana;

        originalas.egzamino_pazymys = 0;
        originalas.vidurkis = 0;
        originalas.mediana = 0;
    }
    return *this;
}
```

---

# Operatorių perdengimas (<< ir >>)

## 👇 Kas tai yra?

Operatorių perdengimas leidžia nustatyti, kaip objektai yra skaitomi iš srauto (`>>`) ir spausdinami į srautą (`<<`).
Tai leidžia naudoti paprastą sintaksę kaip `cout << objektas;` arba `cin >> objektas;`.

---

## Perdengimų paaiškinimai

### 1. Įvesties operatorius `>>`

**Paskirtis:**

- Nuskaito `Studentas` objekto duomenis iš vartotojo arba failo.

**Pavyzdys:**

```cpp
istream& operator>>(istream& isvesties_vieta, Studentas& studentas) {
    cout << "Įveskite vardą: ";
    isvesties_vieta >> studentas.vardas;

    cout << "Įveskite pavardę: ";
    isvesties_vieta >> studentas.pavarde;

    cout << "Įveskite pažymių kiekį: ";
    int kiekis;
    isvesties_vieta >> kiekis;

    studentas.pazymiai.clear();
    cout << "Įveskite pažymius: ";
    for (int i = 0; i < kiekis; ++i) {
        int pazymys;
        isvesties_vieta >> pazymys;
        studentas.pazymiai.push_back(pazymys);
    }

    cout << "Įveskite egzamino pažymį: ";
    isvesties_vieta >> studentas.egzamino_pazymys;

    studentas.vidurkio_skaiciavimas();
    studentas.medianos_skaiciavimas();

    return isvesties_vieta;
}
```

---

### 2. Išvesties operatorius `<<`

**Paskirtis:**

- Išveda `Studentas` objekto duomenis į ekraną arba failą.

**Pavyzdys:**

```cpp
ostream& operator<<(ostream& isvesties_vieta, const Studentas& studentas) {
    isvesties_vieta << studentas.vardas << " " << studentas.pavarde << " | Pažymiai: ";
    for (int pazymys : studentas.pazymiai) {
        isvesties_vieta << pazymys << " ";
    }
    isvesties_vieta << "| Egzaminas: " << studentas.egzamino_pazymys;
    isvesties_vieta << " | Vidurkis: " << studentas.vidurkis;
    isvesties_vieta << " | Mediana: " << studentas.mediana;
    return isvesties_vieta;
}
```

---

# Santrauka

| Koncepcija                 | Paskirtis                                | Pavyzdys               |
| :------------------------- | :--------------------------------------- | :--------------------- |
| Destruktorius              | Atlaisvina išteklius sunaikinant objektą | ~Studentas()           |
| Kopijavimo konstruktorius  | Sukuria naują kopiją                     | Studentas b = a;       |
| Kopijavimo priskyrimas     | Pakeičia objekto turinį kitu             | b = a;                 |
| Perkėlimo konstruktorius   | Pavogia išteklius iš kito objekto        | Studentas b = move(a); |
| Perkėlimo priskyrimas      | Pavogia išteklius per priskyrimą         | b = move(a);           |
| Išvesties operatorius `<<` | Išveda objektą į ekraną arba failą       | cout << studentas;     |
| Įvesties operatorius `>>`  | Nuskaityti objektą iš vartotojo ar failo | cin >> studentas;      |

---

# Abstrakčios klasės

## Kas yra abstrakti klasė?

Abstrakti klasė yra tokia klasė, kuri aprašo bendras sąvokas ir turi bent vieną abstraktų metodą (be implementacijos). Tokia klasė negali būti sukuriama tiesiogiai, ji naudojama kaip bazė kitoms klasėms paveldėti ir konkretizuoti elgesį.

Abstrakčios klasės tikslas - apibrėžti, kokias funkcijas turi įgyvendinti paveldėtos klasės, paliekant realizacijos detales joms pačioms.

## Dabartinė `Zmogus` klasės implementacija

```cpp
class Zmogus{
    public:
        virtual void prisistatymas() = 0;
        virtual ~Zmogus() = default;
};
```
