#include <iostream>
#include <cstdlib>

using namespace std;

class player {//klasa
        public:
        int getScores(){
            return scores;
        };
        string getName() {
            return name;
        };
        void reset() {
            id=0;
            name="";
            x=0;
            y=0;
            dx=0;
            dy=0;
            scores=0;
            drukuj();
        }
        player() {
            generuj();
        }
        void drukuj() {
            cout << "id: " << id << endl;
            cout << "name: " << name << endl;
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
            cout << "dx: " << dx << endl;
            cout << "dy: " << dy << endl;
            cout << "scores: " << scores << endl;
            
        }
        void pobierz(int id, std::string name, float x, float y, float dx, float dy, int scores) {
            this->id = id;// przypisuje do pola
            this->name = name;
            this->x = x;
            this->y = y;
            this->dx = dx;
            this->dy = dy;
            this->scores = scores;
            drukuj();
            
        }
       
        void generuj() {
            id = rand()%10+100;// przypisuje do pola
            name = "mamxmx";
            x = rand() % 10 + 100;
            y = rand() % 10 + 100;
            dx = rand() % 10 + 100;
            dy = rand() % 10 + 100;
            scores = rand() % 10 + 100;
            drukuj();
            
        }
        player(int id, std::string name, float x, float y, float dx, float dy, int scores) {
            this->id = id;// przypisuje do pola
            this->name = name;
            this->x = x;
            this->y = y;
            this->dx = dx;
            this->dy = dy;
            this->scores = scores;
            drukuj();
        }
    private:
        int id;
        string name;
        float x;
        float y;
        float dx;
        float dy;
        int scores;
};




int main()
{
    srand(time(NULL));
    player pl1;//obiekt
    /*pl1.id = 1;
    pl1.name = "Mateusz";
    pl1.x = 2;
    pl1.y = 1;
    pl1.dx = 3;
    pl1.dy = 2;
    pl1.scores = 2;
    
    cout << "id: " << pl1.id << endl;
    cout << "name: " << pl1.name << endl;
    cout << "x: " << pl1.x << endl;
    cout << "y: " << pl1.y << endl;
    cout << "dx: " << pl1.dx << endl;
    cout << "dy: " << pl1.dy<< endl;
    cout << "scores: " << pl1.scores << endl;*/

    pl1.drukuj();

    pl1.pobierz(1, "Mateusz", 2,1,3,2,2);
    cout << pl1.getName() << endl;
    cout << pl1.getScores() << endl;
    pl1.reset();

}
