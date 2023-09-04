
#include <iostream>
using namespace std;

class Human {
public:

    int hair_length = 40; //сантиметри 
    int arm_fingers = 10;
    string eye_color = "green";
    string hair_color = "red";
    string name = "Nick";

    void Talk(string phrase){
        cout << phrase;
    }
    void Walk(string steps) {
        cout << name << " пройшов " << steps << " крокiв";
    }
    void Eat(string meal) {
        cout << name << " з'їв " << meal;
    }
    void Jump(string jump_amount){
        cout << name << " пригнув " << jump_amount << " разів";
    }
    void Run() {
        cout << name << " побiг";
    }
};


class Room {
public:

    int length = 10; //метри 
    int width = 7;
    string wall_color = "pink";
    int height = 4;
    string door_color = "white";
    string room_name = "bedroom";

    void Door_open() {
        cout << "Двері відкриті";
    }
    void Window_open(string window_amount) {
        cout << window_amount << " вікон відкрито";
    }
    void Light_on() {
        cout << "Світло ввімкнено";
    }
    void Curtain_closed() {
        cout << "Штори закрито";
    }
    void TV() {
        cout << "Телевізор увімкнено";
    }
};


class Mobile{
public:

    int button_amount = 3; 
    int camera_amount = 3;
    string phone_color = "gray";
    string wallpaper_color = "black";
    string company_name = "Samsung";

    void Turn_on() {
        cout << "Телефон увімкнено";
    }
    void Play_music(string soundtrack) {
        cout << soundtrack << " грає";
    }
    void Play_video(string video) {
        cout << video << " ввімкнено";
    }
    void Open_app(string app) {
        cout << app << " відкрито";
    }
    void Turn_off() {
        cout << "Телефон вимкнено";
    }
};


class Book {
public:

    int pages_amount = 250;
    string book_name = "Тарантула";
    string author = "Боб Ділан";
    string year = "1971";
    string publishing_house = "Macmillan & Scribner";

    void Read_book(string read_pages) {
        cout << "Ви прочли " << read_pages << " сторінок";
    }
    void Put_bookmark(string num_page) {
        cout << "Ви встановили закладку на " << num_page << " сторінці";
    }
    void Open () {
        cout << "Книгу відкрито";
    }
    void Close () {
        cout << "Книгу закрито";
    }
    void Make_note(string note) {
        cout << "Ви залишили замітку: " << note;
    }
};


class Guitar {
public:

    int string_amount = 6;
    int fret_amount = 15;
    int belt_amount = 1;
    string guitar_color = "yellow";
    string company_name = "Gibson";

    void Tune_guitar() {
        cout << "Гітару настроєно";
    }
    void Play_guitar(string song) {
        cout << song << " грає";
    }
    void Change_string(string number_of_string) {
        cout << number_of_string << " замінено";
    }
    void Practice_guitar() {
        cout << "Приктика на гітарі";
    }
    void Put_capo(string number_of_fret) {
        cout << "Капо встановлено на " << number_of_fret << "лад";
    }
    void Put_in_case() {
        cout << "Гітара в чохлі";
    }
};

int main()
{
    
}

