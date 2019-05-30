#include QMK_KEYBOARD_H

#define HOME 0
#define _LOWER 3
#define _RAISE 4
#define _NORMAL 5
#define _ADJUST 16



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[HOME] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		MT(MOD_LCTL, KC_Y), LT(_NORMAL, KC_X), MT(MOD_LALT, KC_C), LT(_LOWER, KC_V), MT(MOD_LSFT, KC_SPC), LT(_RAISE,KC_B), MT(MOD_RALT, KC_N), MT(MOD_RCTL, KC_M)),

	[_NORMAL] = LAYOUT(
		KC_ESC, _______, _______, _______, _______, _______, KC_UP, _______, _______, KC_BSPC,
		KC_TAB, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_QUOT,
		_______, KC_TRNS, _______, _______, MT(MOD_LSFT, KC_SPC), KC_COMM, KC_DOT,  KC_SLSH),

	[_LOWER] = LAYOUT(
		KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
		_______, _______, _______, KC_TRNS,_______, _______, _______, _______),

	[_RAISE] = LAYOUT(
		KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
		_______, _______, _______, KC_LBRC,   KC_RBRC,   _______,   KC_MINS, KC_EQL,  _______, KC_BSLS,
		_______,   _______,  _______,  _______,_______,KC_TRNS,KC_LCBR,  KC_RCBR),

	[_ADJUST] = LAYOUT(
		RESET  , KC_VOLD, KC_VOLU, _______, _______, _______, _______, KC_BTN1,  KC_MS_U, KC_BTN2,
		_______, _______, _______, _______, _______, _______, _______, KC_MS_L,  KC_MS_D, KC_MS_R,
		_______, _______, _______, KC_TRNS, _______, KC_TRNS, _______, _______),

	

	
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  for (int i = 0; i < keycode; ++i)
  {
  	writePinHigh(D1);
  	
  	writePinLow(D1);
  }
  return true;
}
