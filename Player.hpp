/*
 *  Player.h
 *  YNG_0_1
 *
 *  Created by Peter Bíró on 9/30/10.
 *  Copyright 2010 PetAir corp.. All rights reserved.
 *
 */
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <SFML/Graphics.hpp>

enum KeyType
{
	UP,DOWN,RIGHT,LEFT,SPACE
};

typedef std::map<KeyType, bool> mapType;

class Palyer{
	
private:
	sf::Sprite sprite;
	enum {spriteSpeed = 200};
	
	std::vector<sf::IntRect> leftSprites;
	std::vector<sf::IntRect> rightSprites;
	std::vector<sf::IntRect> upSprites;
	std::vector<sf::IntRect> downSprites;
	
	mapType easierKey;
	
	unsigned int frame;

public:
	
};

#endif
