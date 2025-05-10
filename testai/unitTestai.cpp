#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../pagalbines.h"
#include "../studentas.h"

TEST_CASE("Studentas konstruktorius nustato visus laukus") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas s(vardas, pavarde, pazymiai, egzamino_pazymys);

    REQUIRE(s.vardas == "Ona");
    REQUIRE(s.pavarde == "Onyte");
    REQUIRE(s.egzamino_pazymys == 10);
    REQUIRE(s.pazymiai == vector<int>{9, 10, 7, 6});
}

TEST_CASE("Studentas copy konstruktorius nukopijuoja visus laukelius") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas s1(vardas, pavarde, pazymiai, egzamino_pazymys);
    Studentas s2(s1);

    REQUIRE(s2.vardas == s1.vardas);
    REQUIRE(s2.pavarde == s1.pavarde);
    REQUIRE(s2.egzamino_pazymys == s1.egzamino_pazymys);
    REQUIRE(s2.pazymiai == s1.pazymiai);
}

TEST_CASE("Studentas copy assignment nukopijuoja visus laukelius") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas s1(vardas, pavarde, pazymiai, egzamino_pazymys);
    Studentas s2;
    s2 = s1;

    REQUIRE(s2.vardas == s1.vardas);
    REQUIRE(s2.pavarde == s1.pavarde);
    REQUIRE(s2.egzamino_pazymys == s1.egzamino_pazymys);
    REQUIRE(s2.pazymiai == s1.pazymiai);
}

TEST_CASE("Studentas move konstruktorius perkelia duomenis") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas s1(vardas, pavarde, pazymiai, egzamino_pazymys);
    Studentas s2(move(s1));

    REQUIRE(s2.vardas == "Ona");
    REQUIRE(s2.pavarde == "Onyte");
    REQUIRE(s2.egzamino_pazymys == 10);
    REQUIRE(s2.pazymiai == vector<int>{9, 10, 7, 6});
}

TEST_CASE("Studentas move assignment perkelia duomenis") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas s1(vardas, pavarde, pazymiai, egzamino_pazymys);
    Studentas s2;
    s2 = move(s1);

    REQUIRE(s2.vardas == "Ona");
    REQUIRE(s2.pavarde == "Onyte");
    REQUIRE(s2.egzamino_pazymys == 10);
    REQUIRE(s2.pazymiai == vector<int>{9, 10, 7, 6});
}

TEST_CASE("Studentas destructor doesn't crash") {
    string vardas = "Ona";
    string pavarde = "Onyte";
    vector<int> pazymiai = {9, 10, 7, 6};
    int egzamino_pazymys = 10;

    Studentas* s = new Studentas(vardas, pavarde, pazymiai, egzamino_pazymys);
    delete s;

    SUCCEED("Destructor called without crash");
}