// to build:
// make planck/rev6:rudavko
#include QMK_KEYBOARD_H

// taking screenshots
#define X_SCR3 SGUI(KC_3)
#define X_SCR4 SGUI(KC_4)

// layout switches
#define X_SPCL1 LT(1, KC_SPC)
#define X_ENTL2 LT(2, KC_ENT)
#define X_TABL5 LT(5, KC_TAB)

// escape/control
#define X_ESCT MT(MOD_LCTL, KC_ESC)

// brackets and equal sign
#define X_LSB MT(MOD_RALT, KC_LCBR)  // [ on the 2nd cmd
#define X_RSB MT(MOD_LGUI, KC_RBRC)  // ] on the 3rd фде
#define X_REQUL3 LT(3, KC_EQL)       // = on the RATL cmd
#define X_LNCT MT(MOD_LCTL, KC_F13)  // language switch on left control
#define X_SPTL LGUI(KC_SPC)          // CMD + Space

// vscode
#define VS_TERM LGUI(KC_GRV)
#define VS_TAB1 LGUI(KC_1)
#define VS_TAB2 LGUI(KC_2)

// various
#define CTAL_DE LCTL(LALT(KC_DEL))
#define CMD_RET LGUI(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_grid(
    X_TABL5,  KC_Q,     KC_W,    KC_E,     KC_R,      KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    X_ESCT,   KC_A,     KC_S,    KC_D,     KC_F,      KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_COLN,  KC_QUOT,
    KC_LSPO,  KC_Z,     KC_X,    KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC,
    X_LNCT,   MO(4),    KC_LALT, KC_LGUI,  X_SPCL1,   X_LSB,    X_RSB,    X_ENTL2,  KC_RGUI,  KC_RALT,  X_REQUL3, MO(6)
   ),
	[1] = LAYOUT_planck_grid(
    KC_GRV,   KC_UP,    KC_1,    KC_2,     KC_3,      X_SCR3,   _______,  _______,  _______,  KC_MINS,  KC_EQL,   _______,
    KC_LEFT,  KC_RGHT,  KC_4,    KC_5,     KC_6,      X_SCR4,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_RBRC,  KC_BSLS,
    KC_ENT,   KC_DOWN,  KC_7,    KC_8,     KC_9,      KC_BSPC,  _______,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  _______,
    KC_ENT,   _______,  KC_0,    KC_ENT,   _______,   KC_TRNS,  _______,  _______,  _______,  _______,  _______,  _______
    ),
	[2] = LAYOUT_planck_grid(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_LALT,  KC_ENT,   KC_SPC,   KC_LGUI,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_SCLN,  KC_BSLS,
    _______,  _______,  _______,  KC_DEL,   KC_BSPC,  _______,  _______,  KC_DEL,   KC_BSPC,  KC_PGUP,  KC_PGDN,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_TRNS,  _______,  _______,  _______,   _______,  _______
    ),
	[3] = LAYOUT_planck_grid(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
    _______,  KC_SLCK,  KC_PAUS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,
    _______,  RGB_TOG,  RGB_RMOD, RGB_MOD,  RGB_VAD,  RGB_VAI,  RGB_SPD,  RGB_SPI,  _______,  _______,  _______,  _______,
    RESET,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
    ),
	[4] = LAYOUT_planck_grid(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  KC_TRNS,  CTAL_DE,  _______,  CMD_RET,  _______,  _______,  _______,  _______,  _______,  _______, _______
    ),
	[5] = LAYOUT_planck_grid(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______
    ),
	[6] = LAYOUT_planck_grid(
    _______,  S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0), _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______
    )
	// [] = LAYOUT(//EMPTY layout
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______
  //   )
};

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }

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
