#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum planck_layers {
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NAV,
  _MOUSE,
};

enum planck_keycodes {
  COLEMAK = SAFE_RANGE,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define MOUSE MO(_MOUSE)
#define NAV   LT(_NAV, KC_BSPC)

#define CAD     LCTL(LALT(KC_DEL))
#define CSE     LCTL(LSFT(KC_ESC))
#define NDESK   LCTL(LALT(KC_RGHT))
#define PDESK   LCTL(LALT(KC_LEFT))
#define CLOSE   LALT(KC_F4)
#define LOCK    LGUI(KC_L)
#define DESKTOP LGUI(KC_D)

#define CAF1  LCTL(LALT(KC_F1))
#define CAF2  LCTL(LALT(KC_F2))
#define CAF3  LCTL(LALT(KC_F3))
#define CAF4  LCTL(LALT(KC_F4))
#define CAF5  LCTL(LALT(KC_F5))
#define CAF6  LCTL(LALT(KC_F6))
#define CAF7  LCTL(LALT(KC_F7))
#define CAF8  LCTL(LALT(KC_F8))
#define CAF9  LCTL(LALT(KC_F9))
#define CAF10 LCTL(LALT(KC_F10))

#define ESC_CTL MT(MOD_LCTL, KC_ESC)
#define ESC_CTR MT(MOD_RCTL, KC_ESC)
#define TAB_ALT MT(MOD_LALT, KC_TAB)
#define TAB_ALR MT(MOD_RALT, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
    [_COLEMAK] = LAYOUT_plaid_grid
    (
     TAB_ALT, KC_Q   , KC_W   , KC_F   , KC_P , KC_G, KC_J ,  KC_L , KC_U   , KC_Y   , KC_SCLN, DESKTOP,
     ESC_CTL, KC_A   , KC_R   , KC_S   , KC_T , KC_D, KC_H ,  KC_N , KC_E   , KC_I   , KC_O   , KC_QUOT,
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V , KC_B, KC_K ,  KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
     MOUSE  , KC_PGDN, KC_PGUP, KC_LGUI, LOWER, NAV , KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
     ),
    [_LOWER] = LAYOUT_plaid_grid
    (
     TAB_ALR,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, _______,
     ESC_CTR,  _______, _______, _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,    KC_PLUS,    _______, _______, KC_GRAVE,
     KC_RSFT,  _______, _______, _______, _______, KC_LCBR, KC_RCBR, S(KC_NUHS), S(KC_NUBS), _______, _______, _______,
     _______,  KC_END,  KC_HOME, _______, _______, KC_LBRC, KC_RBRC, _______,    KC_VOLD,    KC_VOLU, KC_MPLY, KC_MNXT
     ),
    [_RAISE] = LAYOUT_plaid_grid
    (
     TAB_ALR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    _______,
     ESC_CTR, _______, _______, KC_LPRN, KC_RPRN, KC_LPRN, KC_RPRN,  KC_MINS, KC_EQL,  _______, _______, KC_GRAVE,
     KC_RSFT, _______, _______, _______, _______, KC_LCBR, KC_RCBR,  KC_NUHS, KC_NUBS, _______, _______, _______,
     KC_END , KC_HOME, _______, _______, _______, KC_LBRC, KC_RBRC,  _______, _______, _______, _______, _______
     ),
    [_ADJUST] = LAYOUT_plaid_grid
    (
     LOCK   , CAF1   , CAF2   , CAF3   , CAF4   , CAF5   , CAF6   , CAF7   , CAF8   , CAF9   , CAF10  , CAD,
     _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_CAPS, KC_INS , KC_F7  , KC_F8  , KC_F9  , _______, CSE,
     _______, _______, KC_F4  , KC_F5  , KC_F6  , _______, _______, KC_F10 , KC_F11 , KC_F12 , _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
     ),
    [_NAV] = LAYOUT_plaid_grid
    (
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, PDESK  , NDESK  , _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______
     ),
    [_MOUSE] = LAYOUT_plaid_grid
    (
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5,
     _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
     ),
  };

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.
  set_single_persistent_default_layer(_COLEMAK);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case COLEMAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_COLEMAK);
    }
    return false; // Skip all further processing of this key
    break;
  default:
    return true; // Process all other keycodes normally
  }
}
