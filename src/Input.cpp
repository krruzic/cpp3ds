#include <cpp3ds/Input.h>
#include <cpp3ds/utils.h>

namespace cpp3ds {

	float Input::slider = 0;

	int Input::getHID(){
		last_hid = read_word(HID);
		return last_hid;
	}

	bool Input::isDown(Button button) {
		return (~read_word(HID) & button);
	}

	void Input::update3DSlider(){
		Input::slider = (float)(read_word(SLIDERSTATE) & 0xFF) / 255;
	}

}
