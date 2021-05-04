#include "Board.hpp"
using namespace pandemic;

unsigned int &City_Data::get_Diseases()
{
    return this->diseases;
}

ostream &operator<<(ostream &os, const City_Data &c)
{
    os << "nadav";
    return os;
}

void Board::loadCities()
{
    board_map[City::Bogota] = City_Data(City::Bogota, Color::Yellow, 0, false, {City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires});
    board_map[City::BuenosAires] = City_Data(City::BuenosAires, Color::Yellow, 0, false, {City::Bogota, City::SaoPaulo});
    board_map[City::Johannesburg] = City_Data(City::Johannesburg, Color::Yellow, 0, false, {City::Kinshasa, City::Khartoum});
    board_map[City::Khartoum] = City_Data(City::Khartoum, Color::Yellow, 0, false, {City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg});
    board_map[City::Kinshasa] = City_Data(City::Kinshasa, Color::Yellow, 0, false, {City::Lagos, City::Khartoum, City::Johannesburg});
    board_map[City::Lagos] = City_Data(City::Lagos, Color::Yellow, 0, false, {City::SaoPaulo, City::Khartoum, City::Kinshasa});
    board_map[City::Lima] = City_Data(City::Lima, Color::Yellow, 0, false, {City::MexicoCity, City::Bogota, City::Santiago});
    board_map[City::LosAngeles] = City_Data(City::LosAngeles, Color::Yellow, 0, false, {City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney});
    board_map[City::MexicoCity] = City_Data(City::MexicoCity, Color::Yellow, 0, false, {City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota});
    board_map[City::Miami] = City_Data(City::Miami, Color::Yellow, 0, false, {City::Atlanta, City::MexicoCity, City::Washington, City::Bogota});
    board_map[City::Santiago] = City_Data(City::Santiago, Color::Yellow, 0, false, {City::Lima});
    board_map[City::SaoPaulo] = City_Data(City::SaoPaulo, Color::Yellow, 0, false, {City::Bogota, City::BuenosAires, City::Lagos, City::Madrid});
    board_map[City::Algiers] = City_Data(City::Algiers, Color::Black, 0, false, {City::Paris, City::Istanbul, City::Cairo, City::Madrid});
    board_map[City::Baghdad] = City_Data(City::Baghdad, Color::Black, 0, false, {City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi});
    board_map[City::Cairo] = City_Data(City::Cairo, Color::Black, 0, false, {City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh});
    board_map[City::Chennai] = City_Data(City::Chennai, Color::Black, 0, false, {City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta});
    board_map[City::Delhi] = City_Data(City::Delhi, Color::Black, 0, false, {City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata});
    board_map[City::Istanbul] = City_Data(City::Istanbul, Color::Black, 0, false, {City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow});
    board_map[City::Karachi] = City_Data(City::Karachi, Color::Black, 0, false, {City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi});
    board_map[City::Kolkata] = City_Data(City::Kolkata, Color::Black, 0, false, {City::Delhi, City::Chennai, City::Bangkok, City::HongKong});
    board_map[City::Moscow] = City_Data(City::Moscow, Color::Black, 0, false, {City::StPetersburg, City::Istanbul, City::Tehran});
    board_map[City::Mumbai] = City_Data(City::Mumbai, Color::Black, 0, false, {City::Karachi, City::Delhi, City::Chennai});
    board_map[City::Riyadh] = City_Data(City::Riyadh, Color::Black, 0, false, {City::Baghdad, City::Cairo, City::Karachi});
    board_map[City::Tehran] = City_Data(City::Tehran, Color::Black, 0, false, {City::Baghdad, City::Moscow, City::Karachi, City::Delhi});
    board_map[City::Beijing] = City_Data(City::Beijing, Color::Red, 0, false, {City::Shanghai, City::Seoul});
    board_map[City::HongKong] = City_Data(City::HongKong, Color::Red, 0, false, {City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei});
    board_map[City::Tokyo] = City_Data(City::Tokyo, Color::Red, 0, false, {City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco});
    board_map[City::Seoul] = City_Data(City::Seoul, Color::Red, 0, false, {City::Beijing, City::Shanghai, City::Tokyo});
    board_map[City::Shanghai] = City_Data(City::Shanghai, Color::Red, 0, false, {City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo});
    board_map[City::Taipei] = City_Data(City::Taipei, Color::Red, 0, false, {City::Shanghai, City::HongKong, City::Osaka, City::Manila});
    board_map[City::Sydney] = City_Data(City::Sydney, Color::Red, 0, false, {City::Jakarta, City::Manila, City::LosAngeles});
    board_map[City::Jakarta] = City_Data(City::Jakarta, Color::Red, 0, false, {City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney});
    board_map[City::Manila] = City_Data(City::Manila, Color::Red, 0, false, {City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney});
    board_map[City::Osaka] = City_Data(City::Osaka, Color::Red, 0, false, {City::Taipei, City::Tokyo});
    board_map[City::HoChiMinhCity] = City_Data(City::HoChiMinhCity, Color::Red, 0, false, {City::Jakarta, City::Bangkok, City::HongKong, City::Manila});
    board_map[City::Bangkok] = City_Data(City::Bangkok, Color::Red, 0, false, {City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong});
    board_map[City::Atlanta] = City_Data(City::Atlanta, Color::Blue, 0, false, {City::Chicago, City::Miami, City::Washington});
    board_map[City::Chicago] = City_Data(City::Chicago, Color::Blue, 0, false, {City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal});
    board_map[City::Essen] = City_Data(City::Essen, Color::Blue, 0, false, {City::London, City::Paris, City::Milan, City::StPetersburg});
    board_map[City::London] = City_Data(City::London, Color::Blue, 0, false, {City::NewYork, City::Madrid, City::Essen, City::Paris});
    board_map[City::Madrid] = City_Data(City::Madrid, Color::Blue, 0, false, {City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers});
    board_map[City::Milan] = City_Data(City::Milan, Color::Blue, 0, false, {City::Essen, City::Paris, City::Istanbul});
    board_map[City::Montreal] = City_Data(City::Montreal, Color::Blue, 0, false, {City::Chicago, City::Washington, City::NewYork});
    board_map[City::NewYork] = City_Data(City::NewYork, Color::Blue, 0, false, {City::Montreal, City::Washington, City::London, City::Madrid});
    board_map[City::Paris] = City_Data(City::Paris, Color::Blue, 0, false, {City::Algiers, City::Essen, City::Madrid, City::Milan, City::London});
    board_map[City::SanFrancisco] = City_Data(City::SanFrancisco, Color::Blue, 0, false, {City::LosAngeles, City::Chicago, City::Tokyo, City::Manila});
    board_map[City::StPetersburg] = City_Data(City::StPetersburg, Color::Blue, 0, false, {City::Essen, City::Istanbul, City::Moscow});
    board_map[City::Washington] = City_Data(City::Washington, Color::Blue, 0, false, {City::Atlanta, City::NewYork, City::Montreal, City::Miami});
}

const unsigned int Board::operator[](pandemic::City city) const
{
    return 5;
}

unsigned int &Board::operator[](pandemic::City city)
{
    return board_map.at(city).get_Diseases();
}

bool Board::is_clean()
{
    return false;
}

void Board::remove_cures() {
    return;
}

ostream &pandemic::operator<<(ostream &os, const Board &b)
{
    os << "nadav";
    return os;
}