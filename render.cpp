#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Graphics Renderer");

    // Create a circle
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(100, 100);

    // Create a rectangle
    sf::RectangleShape rectangle(sf::Vector2f(120, 60));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(300, 200);

    // Create a line (as a thin rectangle)
    sf::RectangleShape line(sf::Vector2f(200, 2));
    line.setFillColor(sf::Color::Red);
    line.setPosition(400, 400);
    line.setRotation(45); // Rotate to make it diagonal

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear(sf::Color::Black);

        // Draw shapes
        window.draw(circle);
        window.draw(rectangle);
        window.draw(line);

        // Display the rendered frame
        window.display();
    }

    return 0;
}
