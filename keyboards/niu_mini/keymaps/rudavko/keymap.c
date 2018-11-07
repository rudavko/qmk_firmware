#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_LODASH RSFT(KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  /   |Shift |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl |  GUI | ALT  | CMD  |Space | Lower|Enter |Raise |  CMD  | Left | Down |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_ortho_4x12(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT, KC_LCMD, KC_SPC,MO(1),  KC_ENT, MO(2),KC_RCMD, KC_LEFT, KC_DOWN, KC_RGHT
  ),

	/* Lower
	 * ,-----------------------------------------------------------------------------------.
 	 * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      | Vol- | Vol+ | Mute |      |      |      |  -   |  =   |   [  |   ]  |   \  |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |BL_TOG|BL_STEP|     |      |      |      |   _   |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_ortho_4x12(
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
		_______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
		_______, RGB_TOG,  RGB_MOD, _______, _______, _______, _______, KC_LODASH, _______, _______, _______, _______,
		RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),

	/* Raise
	 * ,-----------------------------------------------------------------------------------.
	 * |   `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |  ALT |      |      |  CMD |      |  left| down | up   | right|      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |delete|bckspc|      |      |delete|bckspc|      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |Shift |Enter |      |XXXXXX|      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_ortho_4x12(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
		_______, KC_LALT, _______, _______, KC_LCMD, _______, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, _______, _______,
		_______, _______, _______, KC_DEL , KC_BSPC, _______, _______, KC_DEL, KC_BSPC, _______, _______, _______,
		_______, _______, _______, _______,  KC_LSFT, KC_ENT , _______, _______, _______, _______, _______, _______
  )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
