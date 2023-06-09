#ifndef MAIN_CPP_GAMEOVER_H
#define MAIN_CPP_GAMEOVER_H

// Builtin libraries
#include <SFML/Graphics.hpp>
#include <iostream>

// Custom header files
#include "Definitions.h" // Needed for size of text
#include "Game.h" // Needed for the final score of the player


class GameOver{

private:

    // Font
    sf::Font bobaMilky;

    // Texts
    sf::Text gameOverText;
    sf::Text finalScoreText;
    sf::Text finalScore;
    sf::Text playAgainText;

    // Textures
    sf::Texture yesButton;
    sf::Texture noButton;
    sf::Texture gameOver;

    // Sprites;
    sf::Sprite yesButtonSprite;
    sf::Sprite noButtonSprite;
    sf::Sprite gameOverSprite;

public:

    //---------------------------------------------------------------
    // methods
    //---------------------------------------------------------------

    // Loading
    void loadTextures();
    void loadFont();

    // Setters
    void setTexts();
    void setSprites();

    // Drawing
    void drawSprites(sf::RenderWindow &window);
    void drawTexts(sf::RenderWindow &window);

    // Next State Transitions
    bool theNoButtonIsPressed(sf::RenderWindow &window);
    bool theYesButtonIsPressed(sf::RenderWindow &window);

};


#endif //MAIN_CPP_GAMEOVER_H