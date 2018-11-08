// to build:
// make niu_mini:rudavko
#include QMK_KEYBOARD_H

// readability
#define KC_LODASH RSFT(KC_MINS)
#define X_SCR3 SGUI(KC_3)
#define X_SCR4 SGUI(KC_4)
#define X_SPCL1 LT(1, KC_SPC)
#define X_ENTL2 LT(1, KC_ENT)
#define X_ESCT MT(MOD_LCTL ,KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
    KC_TAB,   KC_Q,     KC_W,    KC_E,     KC_R,      KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    X_ESCT,   KC_A,     KC_S,    KC_D,     KC_F,      KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSPO,  KC_Z,     KC_X,    KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC,
    KC_LCTL,  MO(4),    KC_LALT, KC_LGUI,  X_SPCL1,   MO(1),    MO(2),    X_ENTL2,  KC_RGUI,  KC_RALT,  MO(3),    _______
   ),
	[1] = LAYOUT(
    KC_GRV,   _______,  _______,  X_SCR3,   X_SCR4,   _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  _______,
    _______,  _______,  _______,  _______,  _______,  KC_TRNS,  _______,  _______,  _______,  _______,  _______,  _______
    ),
	[2] = LAYOUT(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_LALT,  KC_ENT,   KC_SPC,   KC_LGUI,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,
    _______,  _______,  _______,  KC_DEL,   KC_BSPC,  _______,  _______,  KC_DEL,   KC_BSPC,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  KC_LSFT,  _______,  KC_TRNS,  _______,  _______,  _______,  _______,  _______
    ),
	[3] = LAYOUT(
    _______,  KC_SLCK,  KC_PAUS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  RGB_TOG,  RGB_RMOD, RGB_MOD,  RGB_VAD,  RGB_VAI,  RGB_SPD,  RGB_SPI,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_TRNS,  _______
    ),
	[4] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    RESET,    KC_TRNS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______
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
