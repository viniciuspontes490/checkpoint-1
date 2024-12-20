#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 800), "Base Defense");
    window.setFramerateLimit(60);

    sf::RectangleShape base;
    sf::Vector2f posibase(500, 280);

    base.setPosition(posibase);
    base.setSize(sf::Vector2f(200, 200));


    base.setFillColor(sf::Color::Green);



    sf::CircleShape circ(10.f);
    circ.setFillColor(sf::Color::Red);

    sf::Vector2f CirclePosition(600, 350);

    circ.setPosition(CirclePosition);

    int velx = 3;
    int vely = 3;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            circ.move(-10, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            circ.move(10, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            circ.move(0, -10);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            circ.move(0, 10);
        }
        
        window.clear();
        window.draw(base);
        window.draw(circ);
        window.display();
    }
    

    return 0;
}
