#include <SFML/Graphics.hpp>
#include <iostream>

class Pokeball {
	private:
		sf::Vector2f position;
		float xVel1 = 1, yVel1 = 1;
		sf::Texture tekstura;
		sf::Sprite pSprite;
		sf::Vector2f rozmiar_okna;
	public:
		Pokeball(float x_in, float y_in, float px_in, float py_in)
		{
			position.x = x_in;
			position.y = y_in;
			tekstura.loadFromFile("pokeball.PNG");
			pSprite.setTexture(tekstura);
			pSprite.setPosition(position);
			rozmiar_okna.x= px_in;
			rozmiar_okna.y= py_in;
		}
		void przesun(float x_in, float y_in)
		{
			sf::Vector2f pos;
			pos.x = x_in;
			pos.y = y_in;
			pSprite.move(pos);
			position = pSprite.getPosition();
		}
		sf::Sprite getPokeball() {
			return pSprite;
		}
		void sprawdzKolizjeSciany()
		{
			if (position.x <= 0)
				xVel1 = 1;
			if (position.x >= rozmiar_okna.x-100)
				xVel1 = -1;
			if(position.y <= 0)
				yVel1 = 1;
			if (position.y >= rozmiar_okna.y-100)
				yVel1 = -1;


		}
		void animuj()
		{
			sprawdzKolizjeSciany();
			przesun(xVel1, yVel1);
		}


};

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "SFML animation");
	sf::Event event;

	Pokeball pb(150, 300, 400, 400);
	sf:: Clock zegar;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Blue);
		window.draw(pb.getPokeball());
		window.display();
		if (zegar.getElapsedTime().asMilliseconds() > 0,00005.0f)
		{
			pb.animuj();
			zegar.restart();
		}
	}



	
	
	/*sf::Texture tekstura;
	tekstura.loadFromFile("Bez_nazwy.png");
	sf::Sprite pokeball(tekstura);

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Green);
		window.draw(pokeball);
		window.display();
	}*/
	return 0;

		
}
