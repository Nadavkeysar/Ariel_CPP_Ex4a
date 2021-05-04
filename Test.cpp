#include <iostream>
#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Dispatcher.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "Medic.hpp"
#include "OperationsExpert.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "Virologist.hpp"
using namespace pandemic;
using namespace std;

Board board;
TEST_CASE("Initialize board")
{

    CHECK(board.is_clean());
    //blue
    board[City::Madrid] = 5;
    board[City::NewYork] = 2;
    board[City::Paris] = 4;
    board[City::Milan] = 2;
    board[City::Chicago] = 3;
    //yellow
    board[City::Lagos] = 5;
    board[City::Miami] = 2;
    board[City::Santiago] = 1;
    board[City::SaoPaulo] = 1;
    board[City::MexicoCity] = 2;
    //black
    board[City::Tehran] = 3;
    board[City::Baghdad] = 2;
    board[City::Istanbul] = 4;
    board[City::Moscow] = 1;
    board[City::Cairo] = 2;
    //red
    board[City::Manila] = 1;
    board[City::Seoul] = 2;
    board[City::Tokyo] = 2;
    board[City::Bangkok] = 3;
    board[City::HoChiMinhCity] = 5;

    CHECK_FALSE(board.is_clean());
}

TEST_CASE("Dispatcher")
{
    OperationsExpert player{board, City::Beijing};
    player.take_card(City::Miami)
        .take_card(City::LosAngeles)
        .take_card(City::Manila)
        .take_card(City::Tokyo)
        .take_card(City::Chicago)
        .take_card(City::Cairo)
        .take_card(City::SaoPaulo);

    CHECK_THROWS(player.drive(City::Istanbul));
    CHECK_NOTHROW(player.drive(City::Shanghai));

    CHECK_NOTHROW(player.fly_direct(City::Paris));
    CHECK_THROWS(player.fly_direct(City::Karachi));
    CHECK_NOTHROW(player.fly_direct(City::Cairo));

    CHECK_THROWS(player.fly_charter(City::Lagos));
    player.take_card(City::Cairo);
    CHECK_NOTHROW(player.fly_charter(City::Lagos));

    CHECK_THROWS(player.fly_shuttle(City::Karachi));
    CHECK_THROWS(player.fly_shuttle(City::Shanghai));
    CHECK_NOTHROW(player.build());
    CHECK_NOTHROW(player.fly_shuttle(City::Shanghai));

    CHECK_THROWS(player.discover_cure(Color::Yellow));
    player.take_card(City::MexicoCity)
        .take_card(City::Kinshasa);
    CHECK_NOTHROW(player.discover_cure(Color::Yellow));

    player.take_card(City::MexicoCity).fly_direct(City::MexicoCity);
    CHECK_NOTHROW(player.treat(City::MexicoCity));
    player.drive(City::Chicago);
    CHECK(board[City::Chicago] == 3);
    CHECK_NOTHROW(player.treat(City::Chicago));
    CHECK(board[City::Chicago] == 2);
    CHECK_THROWS(player.treat(City::Tokyo));
    player.drive(City::Atlanta);
    CHECK_THROWS(player.treat(City::Atlanta));
}