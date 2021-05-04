#pragma once
#include <iostream>
#include <list>
#include <map>
#include <array>
#include "City.hpp"
#include "Color.hpp"
using namespace pandemic;
using namespace std;

namespace pandemic
{
    class City_Data
    {
        pandemic::City city;
        pandemic::Color color;
        unsigned int diseases;
        bool station;
        list<pandemic::City> neighbors;

    public:
        City_Data(){};
        City_Data(const City c, const Color col, const unsigned int dis, const bool st, const list<pandemic::City> ne) : city(c), color(col), diseases(dis), station(st)
        {
            neighbors = ne;
        };
        ~City_Data(){};
        unsigned int &get_Diseases();
        friend ostream &operator<<(ostream &os, const City_Data &c);
    };

    const int SIZE = 4;

    class Board
    {
        map<pandemic::City, City_Data> board_map;
        array<bool, SIZE> medicines;
        void loadCities();

    public:
        Board()
        {
            medicines = {false, false, false, false};
            loadCities();
        };
        ~Board(){};
        const unsigned int operator[](pandemic::City city) const; //get number of disease
        unsigned int &operator[](pandemic::City city);            //set number of disease
        bool is_clean();
        void remove_cures();
        friend ostream &operator<<(ostream &os, const Board &b);
    };
};