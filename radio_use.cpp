#include "radio.h"


void show_info();
void show_info2();
void turning_on(std::string e);
void Radio_mode(Radio &r ,char m, char v, char c);



int main()
{
	std::string enable;
	Radio radio;
	char mode, vol, chn;
	show_info2();
	turning_on(enable);
	show_info();
	Radio_mode(radio, mode, vol, chn);
	system("pause");
	return 0;
}

void show_info()
{
		std::cout << "V - change volume \n"
				"C - change channel \n"
				"F - type FM channel \n"
				"E - Turn radio off";
}

void show_info2()
{
	std::cout << "RADIO OFF" << std::endl;
	std::cout << "To turn on type 'on'" << std::endl;
	std::cout << ">> ";
}

void turning_on(std::string e)
{
	while (std::cin >> e)
		{
			if (e == "on" || e == "ON")
			{
				std::cout << "RADIO ON" << std::endl;
				break;
			}
			else
			{
				std::cout << "Bad choice. Try again...\n";
				std::cout << ">> ";
				continue;
			}
		}

		system("cls");
}

void Radio_mode(Radio &r, char m, char v, char c)
{
	while (std::cin >> m)
		{
			if (m == 'V' || m == 'v')
			{
				std::cout << "U - louder, D - Softer\n";
				std::cout << ">> ";
				while (std::cin >> v)
				{
					if (v == 'U' || v == 'u')
					{
						r.volume_up();
						std::cout << "(U - up, D - down) Push any other button to exit volume mode\n";
						continue;
					}
					else if (v == 'D' || v == 'd')
					{
						r.volume_down();
						std::cout << "(U - up, D - down) Push any other button to exit volume mode\n";
						continue;
					}
					else
					{
						system("cls");
						show_info();
						break;
					}
				}
			}
			else if (m == 'C' || m == 'c')
			{
				r.info();
				std::cin.get();
				std::cout << "U - channel up, D - channel down\n";
				std::cout << ">> ";
				while (std::cin >> c)
				{
					if (c == 'U' || c == 'u')
						{
							r.channel_up();
							r.info();
							std::cout << "(U - up, D - down) Push any other button to exit volume mode\n";
							continue;
						}
						else if (c == 'D' || c == 'd')
						{
							r.channel_down();
							r.info();
							std::cout << "(U - up, D - down) Push any other button to exit volume mode\n";
							continue;
						}
						else
						{
							system("cls");
							show_info();
							break;
						}
				}
			}
			else if (m == 'F' || m == 'f')
			{
				system("cls");
				r.fm_enter();
				show_info();
				continue;
			}
			else if (m == 'e' || m == 'E')
			{
				r.Radio::~Radio();
				break;
			}
			else
			{
				system("cls");
				std::cerr << "Error! Wrong input data!\n";
				show_info();
				continue;
			}

		}
}
