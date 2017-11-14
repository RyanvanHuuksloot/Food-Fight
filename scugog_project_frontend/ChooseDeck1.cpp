#include "stdafx.h"
#include "ChooseDeck1.h"



void ChooseDeck1::Show(sf::RenderWindow & renderWindow)
{
    
    sf::Texture texture, card;
    sf::Font font;
    if (!font.loadFromFile("../scugog_project_frontend/resources/fonts/sansation.ttf")) {
        return;
    }
    
    if(texture.loadFromFile("../scugog_project_frontend/resources/images/bg.jpg") != true)
    {
        return;
    }
    
    if(card.loadFromFile("../scugog_project_frontend/resources/images/cardc.png") != true)
    {
        return;
    }
   
    sf::Sprite cd1(card);
    sf::Sprite cd2(card);
    sf::Sprite cd3(card);
    
    
    sf::Text text;
    text.setFont(font);
    text.setString("press 'Enter' when player1 has chosen deck");
    text.setCharacterSize(50);
    text.setFillColor(sf::Color::Blue);
    text.setStyle(sf::Text::Style::Italic);
    sf::Rect<float> tsize = text.getGlobalBounds();
    text.setOrigin(sf::Vector2f(tsize.width/2, tsize.height/2));
    text.setPosition(sf::Vector2f(512, 25));
    
    cd1.setOrigin(sf::Vector2f(106, 150));
    cd2.setOrigin(sf::Vector2f(106, 150));
    cd3.setOrigin(sf::Vector2f(106, 150));
    
    cd1.setPosition(sf::Vector2f(512, 350));
    cd2.setPosition(sf::Vector2f(512 + 150 + 100, 350));
    cd3.setPosition(sf::Vector2f(512 - 150 - 100, 350));
    
    
    
    //texture.update(image);
    sf::Sprite sprite(texture);
    renderWindow.draw(sprite);
    renderWindow.draw(text);
    renderWindow.draw(cd1);
    renderWindow.draw(cd2);
    renderWindow.draw(cd3);
    renderWindow.display();
    
    sf::Event event;
    while(true)
    {
        while(renderWindow.pollEvent(event))
        {
            if(event.type == sf::Event::EventType::KeyPressed)
            {
                return;
            }
        }
    }
}

