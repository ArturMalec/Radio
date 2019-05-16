#ifndef RADIO_H_
#define RADIO_H_
#include <iostream>
#include <windows.h>
#include <conio.h>

class Radio
{
public:
	Radio(int vol = 50, double chn = 1, double fm_ = 99.9) :
		volume(vol), channel(chn), fm(fm_) {}
	void volume_up();
	void volume_down();
	void channel_up();
	void channel_down();
	void fm_enter();
	void info();
	~Radio() {std::cout << "RADIO OFF\n";}
private:
	int volume;
	double channel;
	double fm;
};
#endif /* RADIO_H_ */
