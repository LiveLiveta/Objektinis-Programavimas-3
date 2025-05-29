#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../manovektorius.h"
#include "../pagalbines.h"

TEST_CASE("Konstruktoriai ir pagrindinės operacijos") {
    Vektorius<int> v;

    REQUIRE(v.size() == 0);
    REQUIRE(v.capacity() == 10); // numatytoji talpa

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    REQUIRE(v.size() == 3);
    REQUIRE(v[0] == 1);
    REQUIRE(v[1] == 2);
    REQUIRE(v[2] == 3);
}

TEST_CASE("Kopijavimo konstruktorius ir priskyrimas") {
    Vektorius<int> v1;
    v1.push_back(10);
    v1.push_back(20);

    Vektorius<int> v2 = v1;
    REQUIRE(v2.size() == v1.size());
    REQUIRE(v2[0] == 10);
    REQUIRE(v2[1] == 20);
}

TEST_CASE("Perkėlimo konstruktorius ir priskyrimas") {
    Vektorius<int> v1;
    v1.push_back(1);
    v1.push_back(2);

    Vektorius<int> v2 = std::move(v1);
    REQUIRE(v2.size() == 2);
    REQUIRE(v2[0] == 1);
    REQUIRE(v2[1] == 2);

    REQUIRE(v1.begin() == nullptr);
}

TEST_CASE("Konstruktorius iš rodyklių intervalo") {
    int arr[] = {5, 6, 7};
    Vektorius<int> v(arr, arr + 3);
    REQUIRE(v.size() == 3);
    REQUIRE(v[0] == 5);
    REQUIRE(v[2] == 7);
}

TEST_CASE("at() su tinkamais ir netinkamais indeksais") {
    Vektorius<std::string> v;
    v.push_back("a");
    v.push_back("b");

    REQUIRE(v.at(1) == "b");

    REQUIRE_THROWS_AS(v.at(2), std::out_of_range);
}

TEST_CASE("front() ir back() metodai") {
    Vektorius<char> v;
    v.push_back('x');
    v.push_back('y');

    REQUIRE(v.front() == 'x');
    REQUIRE(v.back() == 'y');
}

TEST_CASE("pop_back() ir empty() funkcijos") {
    Vektorius<int> v;
    REQUIRE(v.empty());

    v.push_back(99);
    REQUIRE_FALSE(v.empty());

    v.pop_back();
    REQUIRE(v.empty());
}

TEST_CASE("clear(), reserve() ir shrink_to_fit() metodai") {
    Vektorius<int> v;
    for (int i = 0; i < 15; ++i)
        v.push_back(i);

    size_t senaTalpa = v.capacity();
    v.reserve(30);
    REQUIRE(v.capacity() == 30);

    v.clear();
    REQUIRE(v.size() == 0);

    v.shrink_to_fit();
    REQUIRE(v.capacity() == 0);
}

TEST_CASE("erase(index) ir erase(iteratorius) funkcijos") {
    Vektorius<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.erase(1);
    REQUIRE(v.size() == 2);
    REQUIRE(v[1] == 3);

    auto it = v.erase(v.begin());
    REQUIRE(*it == 3);
    REQUIRE(v.size() == 1);
}

TEST_CASE("Palyginimo operatoriai") {
    Vektorius<int> a, b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(1);
    b.push_back(3);

    REQUIRE(a != b);
    REQUIRE(a < b);
    REQUIRE(b > a);

    a[1] = 3;
    REQUIRE(a == b);
}

TEST_CASE("Iteratorių palaikymas") {
    Vektorius<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int suma = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        suma += *it;
    }
    REQUIRE(suma == 6);
}
