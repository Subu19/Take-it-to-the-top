#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Take it to the top", sf::Style::Close | sf::Style::Titlebar | Style::Resize);
    window.setVerticalSyncEnabled(true); 
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}