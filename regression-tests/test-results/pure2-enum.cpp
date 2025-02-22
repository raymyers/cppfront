
#define CPP2_USE_MODULES         Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"


#line 2 "pure2-enum.cpp2"
class skat_game;
    

#line 11 "pure2-enum.cpp2"
class rgb;
    

#line 17 "pure2-enum.cpp2"
class file_attributes;
    

//=== Cpp2 type definitions and function declarations ===========================


#line 2 "pure2-enum.cpp2"
class skat_game {
public: auto static constexpr diamonds = cpp2::strict_value<cpp2::i8,skat_game,0>(9);
public: auto static constexpr hearts = cpp2::strict_value<cpp2::i8,skat_game,0>(10);
public: auto static constexpr spades = cpp2::strict_value<cpp2::i8,skat_game,0>(11);
public: auto static constexpr clubs = cpp2::strict_value<cpp2::i8,skat_game,0>(12);
public: auto static constexpr grand = cpp2::strict_value<cpp2::i8,skat_game,0>(20);
public: auto static constexpr null = cpp2::strict_value<cpp2::i8,skat_game,0>(23);
public: [[nodiscard]] auto operator<=>([[maybe_unused]] skat_game const& that) const& -> std::strong_ordering = default;
public: skat_game([[maybe_unused]] skat_game const& that);

public: auto operator=([[maybe_unused]] skat_game const& that) -> skat_game& ;
public: skat_game([[maybe_unused]] skat_game&& that) noexcept;
public: auto operator=([[maybe_unused]] skat_game&& that) noexcept -> skat_game& ;
public: explicit skat_game();

#line 4 "pure2-enum.cpp2"
             // 10
             // 11
             // 12

#line 9 "pure2-enum.cpp2"
};

class rgb {
public: auto static constexpr red = cpp2::strict_value<cpp2::i8,rgb,0>(0);
public: auto static constexpr green = cpp2::strict_value<cpp2::i8,rgb,0>(1);
public: auto static constexpr blue = cpp2::strict_value<cpp2::i8,rgb,0>(2);
public: [[nodiscard]] auto operator<=>([[maybe_unused]] rgb const& that) const& -> std::strong_ordering = default;
public: rgb([[maybe_unused]] rgb const& that);

public: auto operator=([[maybe_unused]] rgb const& that) -> rgb& ;
public: rgb([[maybe_unused]] rgb&& that) noexcept;
public: auto operator=([[maybe_unused]] rgb&& that) noexcept -> rgb& ;
public: explicit rgb();

#line 12 "pure2-enum.cpp2"
             // 0
             // 1
             // 2
#line 15 "pure2-enum.cpp2"
};

class file_attributes {
public: auto static constexpr cached = cpp2::strict_value<cpp2::u8,file_attributes,1>(1);
public: auto static constexpr current = cpp2::strict_value<cpp2::u8,file_attributes,1>(2);
public: auto static constexpr obsolete = cpp2::strict_value<cpp2::u8,file_attributes,1>(4);
public: auto static constexpr none = cpp2::strict_value<cpp2::u8,file_attributes,1>(0);
public: [[nodiscard]] auto operator<=>([[maybe_unused]] file_attributes const& that) const& -> std::strong_ordering = default;
public: file_attributes([[maybe_unused]] file_attributes const& that);

public: auto operator=([[maybe_unused]] file_attributes const& that) -> file_attributes& ;
public: file_attributes([[maybe_unused]] file_attributes&& that) noexcept;
public: auto operator=([[maybe_unused]] file_attributes&& that) noexcept -> file_attributes& ;
public: explicit file_attributes();

#line 18 "pure2-enum.cpp2"
              // 1
              // 2
              // 4
#line 21 "pure2-enum.cpp2"
};

auto main() -> int;
    

//=== Cpp2 function definitions =================================================



    #line 1 "pure2-enum.cpp2"
skat_game::skat_game([[maybe_unused]] skat_game const& that){}
auto skat_game::operator=([[maybe_unused]] skat_game const& that) -> skat_game& {
                                return *this;}
skat_game::skat_game([[maybe_unused]] skat_game&& that) noexcept{}
auto skat_game::operator=([[maybe_unused]] skat_game&& that) noexcept -> skat_game& {
                                return *this;}
skat_game::skat_game(){}
rgb::rgb([[maybe_unused]] rgb const& that){}
auto rgb::operator=([[maybe_unused]] rgb const& that) -> rgb& {
                                return *this;}
rgb::rgb([[maybe_unused]] rgb&& that) noexcept{}
auto rgb::operator=([[maybe_unused]] rgb&& that) noexcept -> rgb& {
                                return *this;}
rgb::rgb(){}
file_attributes::file_attributes([[maybe_unused]] file_attributes const& that){}
auto file_attributes::operator=([[maybe_unused]] file_attributes const& that) -> file_attributes& {
                                return *this;}
file_attributes::file_attributes([[maybe_unused]] file_attributes&& that) noexcept{}
auto file_attributes::operator=([[maybe_unused]] file_attributes&& that) noexcept -> file_attributes& {
                                return *this;}
file_attributes::file_attributes(){}
#line 23 "pure2-enum.cpp2"
auto main() -> int{
    // x : skat_game = 9;               // error, can't construct skat_game from integer

    auto x {skat_game::clubs}; 

    // if x == 9 { }                    // error, can't compare skat_game and integer
    // if x == rgb::red { }             // error, can't compare skat_game and rgb color

    std::cout << "with if else: ";
    if (x == skat_game::diamonds) {     // ok, can compare two skat_games
        std::cout << "diamonds";
    }
    else {if (skat_game::hearts == x) { // ok, in either order
        std::cout << "hearts";
    }
    else {if (cpp2::is(x, (skat_game::spades))) {// ok, using is
        std::cout << "spades";
    }
    else {if (cpp2::is(skat_game::clubs, (x))) {// ok, using is
        std::cout << "clubs";
    }
    else {
        std::cout << "not a suit";
    }}}}

    std::cout << "\nwith inspect: " << [&] () -> std::string { auto&& __expr = x;
        if (cpp2::is(__expr, (skat_game::diamonds))) { if constexpr( requires{"diamonds";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("diamonds")),std::string> ) return "diamonds"; else return std::string{}; else return std::string{}; }
        else if (cpp2::is(__expr, skat_game::hearts)) { if constexpr( requires{"hearts";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("hearts")),std::string> ) return "hearts"; else return std::string{}; else return std::string{}; }
        else if (cpp2::is(__expr, skat_game::spades)) { if constexpr( requires{"spades";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("spades")),std::string> ) return "spades"; else return std::string{}; else return std::string{}; }
        else if (cpp2::is(__expr, skat_game::clubs)) { if constexpr( requires{"clubs";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("clubs")),std::string> ) return "clubs"; else return std::string{}; else return std::string{}; }
        else return "not a suit"; }
    () << std::endl;

    // x = 9;                           // error, can't assign skat_game from integer
    // x = rgb::red;                    // error, can't assign skat_game from rgb color

    x = skat_game::diamonds;        // ok, can assign one skat_game from another

    auto f {file_attributes::current | file_attributes::cached}; 
    f &= file_attributes::cached  | file_attributes::obsolete;

    auto f2 {file_attributes::cached}; 

    std::cout << "f  as int  is " + cpp2::to_string(cpp2::as_<int>(f)) + "\n";
    std::cout << "f2 as int  is " + cpp2::to_string(cpp2::as_<int>(f2)) + "\n";

    std::cout << "f  is (f2) is " + cpp2::to_string(cpp2::is(f, (f2))) + "\n";
    std::cout << "f2 is (f ) is " + cpp2::to_string(cpp2::is(f2, (f))) + "\n\n";

    f  |= file_attributes::current;
    f  |= file_attributes::obsolete;
    f2 |= file_attributes::current;

    std::cout << "f  as int  is " + cpp2::to_string(cpp2::as_<int>(f)) + "\n";
    std::cout << "f2 as int  is " + cpp2::to_string(cpp2::as_<int>(f2)) + "\n";
    std::cout << "f  == f2   is " + cpp2::to_string(f  == f2  ) + "\n";
    std::cout << "f  is (f2) is " + cpp2::to_string(cpp2::is(f, (f2))) + "\n";
    std::cout << "f2 is (f ) is " + cpp2::to_string(cpp2::is(f2, (f))) + "\n";
    std::cout << "(f & f2) == f2 is " + cpp2::to_string((f & f2) == f2) + "\n";

    std::cout << "inspecting: " << [&] () -> std::string { auto&& __expr = std::move(f);
        if (cpp2::is(__expr, (file_attributes::current))) { if constexpr( requires{"exactly 'current'";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("exactly 'current'")),std::string> ) return "exactly 'current'"; else return std::string{}; else return std::string{}; }
        else if (cpp2::is(__expr, cpp2::has_flags(std::move(f2)))) { if constexpr( requires{"includes all f2's flags ('cached' and 'current')";} ) if constexpr( std::is_convertible_v<CPP2_TYPEOF(("includes all f2's flags ('cached' and 'current')")),std::string> ) return "includes all f2's flags ('cached' and 'current')"; else return std::string{}; else return std::string{}; }
        else return "no match"; }
    () << "\n";
}

