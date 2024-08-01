#include <SFML/Graphics.hpp>
#include <iostream>
#include "header/gameService.h"
using namespace std;
using namespace sf;

class Player {
private:
    int Health = 3;
    sf::Vector2f position = sf::Vector2f(200.0f, 100.0f);
    int movement_speed = 1;
    int player_score = 0;
    
public:  
    sf::Texture player_texture;
    sf::Sprite player_sprite;
    void takeDamage() {};
    void move() {};
    void shootBullets() {};
    Vector2f getPosition() {
        return position;
    }
    void move(float offsetX) {
        position.x += offsetX;
    }
    int getMoveSpeed() {
        return movement_speed;
    }

};

int main() {
    

    sf::VideoMode videoMode = sf::VideoMode(1920, 1080);
    sf::RenderWindow window(videoMode, "SFML Window");

    
    Player player;
    Player.player_texture.loadFromFile("assets/textures/player_ship.png");
    Player.player_sprite.setTexture(Player.player_texture);
        while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            Player.move(-1.0f * Player.getMoveSpeed());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            Player.move(1.0f * Player.getMoveSpeed());

        }
        window.clear(sf::Color::Green);
        Player.player_sprite.setPosition(Player.getPosition());
        window.draw(Player.player_sprite);
        window.display();
    }
        gameService game_service; 
        game_service.ignite();

        
        while (game_service.isRunning())
        {
            game_service.update();
            game_service.render();
        }

    return 0;
}