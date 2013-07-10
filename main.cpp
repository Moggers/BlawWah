#include <SFML/Graphics.hpp>
#include <stdio.h>

int main( int argv, char * argc[] )
{
	if( argv != 3 )
	{
		printf( "Usage: ./game.o resx resy\n" );
		return 0;
	}

	sf::RenderWindow window( sf::VideoMode( atoi( argc[1] ), atoi( argc[2] ) ), "BlawWah" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );

	while( window.isOpen() )
	{
		sf::Event event;
		while( window.pollEvent( event ) )
		{
			if( event.type == sf::Event::Closed )
			{
				window.close();
			}
		}
		window.clear();
		window.draw( shape );
		window.display();
	}

	return 0;
}
