#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

class Player {
private:
    int Health = 3;
    sf::Vector2f position = sf::Vector2f(200.0f, 100.0f);
    int movement_speed = 5;
    int player_score = 0;
public:  
    sf::Texture player_texture;
    sf::Sprite player_sprite;
    void takeDamage() {};
    void move() {};
    void shootBullets() {};
};

int main() {
    Player myPlayer;
    std::cout << myPlayer.movement_speed << "\n";

    sf::VideoMode videoMode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videoMode, "SFML Window");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Green);
        window.display();
    }

    return 0;
}