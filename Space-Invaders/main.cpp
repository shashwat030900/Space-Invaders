
#include <SFML/Graphics.hpp>

int main()
{
    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(800, 600);

    // Create a window object with specific dimensions and a title
    sf::RenderWindow window(videoMode, "SFML Window");
   



    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Check for window closure
            if (event.type == sf::Event::Closed)
                window.close();
        }


        // Clear the window
        window.clear(sf::Color::Black);
        sf::CircleShape circle(50); // Radius 50
        circle.setFillColor(sf::Color::Red);
        circle.setPosition(400, 300); // Set position
        window.draw(circle);
        sf::CircleShape circle_2(20);
        circle_2.setFillColor(sf::Color::Green);
        window.draw(circle_2);
        sf::RectangleShape Rectangle(sf::Vector2f(25,25));
        Rectangle.setPosition(300, 400);
        Rectangle.setFillColor(sf::Color::Red);
        window.draw(Rectangle);
        sf::ConvexShape Triangle;
        Triangle.setPointCount(3);
        Triangle.setPoint(0, sf::Vector2f(300, 50));
        Triangle.setPoint(1, sf::Vector2f(200, 150));
        Triangle.setPoint(2, sf::Vector2f(400, 150));
        Triangle.setFillColor(sf::Color::Blue);
        window.draw(Triangle);

        // Display whatever you draw
        window.display(); //thanks for helping 

    }
    
    return 0;
}
