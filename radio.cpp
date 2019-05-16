#include "radio.h"


void Radio::info()
{
	system("cls");
	if (channel == 1)
		std::cout << "You're listening TOK.FM" << std::endl;
	else if (channel == 2)
		std::cout << "You're listening RMF.FM" << std::endl;
	else if (channel == 3)
		std::cout << "You're listening RADIO.ZET" << std::endl;
	else if (channel == 4)
		std::cout << "You're listening RADIO.MARYJA" << std::endl;
	else if (channel == 5)
		std::cout << "You're listening ESKA" << std::endl;

}


void Radio::channel_up()
{
	channel++;
	if (channel > 5)
		channel = 5;
}

void Radio::channel_down()
{
	channel--;
	if (channel < 1)
		channel = 1;
}

void Radio::fm_enter()
{
	std::cout << ">> ";
	std::cin >> fm;
	if (fm == 99.9)
	{
		channel = 1;
		std::cout << "You're listening TOK.FM" << std::endl;
	}
	else if (fm == 98.9)
	{
		channel = 2;
		std::cout << "You're listening RMF.FM" << std::endl;
	}
	else if (fm == 97.9)
	{
		channel = 3;
		std::cout << "You're listening RADIO.ZET" << std::endl;
	}
	else if (fm == 96.9)
	{
		channel = 4;
		std::cout << "You're listening RADIO.MARYJA" << std::endl;
	}
	else if (fm == 95.9)
	{
		channel = 5;
		std::cout << "You're listening ESKA" << std::endl;
	}
	else
		std::cout << "No channel data!\n";
}


void Radio::volume_up()
{
	system("cls");
	volume += 10;
	if (volume > 100)
		volume = 100;
	std::cout << "Volume: " << volume << std::endl;

}

void Radio::volume_down()
{
	system("cls");
	volume -= 10;
	if (volume < 0)
		volume = 0;
	std::cout << "Volume: " << volume << std::endl;
}
