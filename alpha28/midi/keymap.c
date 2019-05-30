#include QMK_KEYBOARD_H

#define HOME 0
#define _LOWER 3
#define _RAISE 4
#define _NORMAL 5
#define _ADJUST 16



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[HOME] = LAYOUT(
		_______,_______,_______,_______,_______,_______,_______,_______,_______, MI_F_1,
		MI_C, MI_D, MI_E, MI_F, MI_G, MI_A, MI_B, MI_C_1, MI_D_1, MI_E_1,
		_______,_______,_______,_______,_______,_______,_______,_______),

	
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}
