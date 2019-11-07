#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _COLEMAK,
  _DVORAK,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NAV,
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define NAV   LT(_NAV, KC_BSPC)

#define ALTTAB  LALT(KC_TAB)
#define CTRLTAB LCTL(KC_TAB)
#define ALTSTAB LALT(LSFT(KC_TAB))
#define CAD     LCTL(LALT(KC_DEL))
#define CSE     LCTL(LSFT(KC_ESC))
#define NDESK   LCTL(LALT(KC_LEFT))
#define PDESK   LCTL(LALT(KC_RGHT))
#define CLOSE   LALT(KC_F4)
#define LOCK    LGUI(KC_L)
#define DESKTOP LGUI(KC_D)

#define WINL LGUI(KC_LEFT)
#define WINR LGUI(KC_RIGHT)
#define WINU LGUI(KC_UP)

#define ESC_CTL MT(MOD_LCTL, KC_ESC)
#define ESC_CTR MT(MOD_RCTL, KC_ESC)
#define TAB_ALT MT(MOD_LALT, KC_TAB)
#define TAB_ALR MT(MOD_RALT, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
    [_QWERTY] = LAYOUT_planck_grid
    (
     TAB_ALT,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    DESKTOP,
     ESC_CTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
     KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
     KC_PGDN,  KC_PGUP, ALTTAB,  KC_LGUI, LOWER,   NAV ,     KC_SPC,  RAISE,   KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT
     ),
    [_COLEMAK] = LAYOUT_planck_grid
    (
     TAB_ALT,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, DESKTOP,
     ESC_CTL,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,     KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
     KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
     KC_PGDN , KC_PGUP, ALTTAB,  KC_LGUI, LOWER,   NAV ,     KC_SPC,  RAISE,   KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT
     ),
    [_DVORAK] = LAYOUT_planck_grid
    (
     TAB_ALT,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,     KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    DESKTOP,
     ESC_CTL,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,     KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
     KC_LSFT,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,     KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT ,
     KC_PGDN,  KC_PGUP, ALTTAB , KC_LGUI, LOWER,   NAV ,     KC_SPC,  RAISE,   KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT
     ),
    [_LOWER] = LAYOUT_planck_grid
    (
     TAB_ALR,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, _______,
     ESC_CTR,  _______, _______, _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,    KC_PLUS,    _______, _______, KC_GRV ,
     KC_RSFT,  _______, _______, _______, _______, KC_LCBR, KC_RCBR, S(KC_NUHS), S(KC_NUBS), _______, _______, _______,
     KC_END ,  KC_HOME, CTRLTAB, _______, _______, KC_LBRC, KC_RBRC, _______,    _______,    _______, _______, _______
     ),
    [_RAISE] = LAYOUT_planck_grid
    (
     TAB_ALR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    _______,
     ESC_CTR, _______, _______, KC_LPRN, KC_RPRN, KC_LPRN, KC_RPRN,  KC_MINS, KC_EQL,  _______, _______, KC_GRV,
     KC_RSFT, _______, WINL   , WINU   , WINR   , KC_LCBR, KC_RCBR,  KC_NUHS, KC_NUBS, _______, _______, _______,
     KC_END , KC_HOME, CTRLTAB, _______, _______, KC_LBRC, KC_RBRC,  _______, _______, _______, _______, _______
     ),
    [_ADJUST] = LAYOUT_planck_grid
    (
     CSE    , QWERTY,  COLEMAK, DVORAK,  _______, _______, _______, _______, _______, _______, _______, CAD,
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_CAPS, KC_SLCK, KC_NLCK, _______, _______,
     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_PAUS, KC_INS,  _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
     ),
    [_NAV] = LAYOUT_planck_grid
    (
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, ALTSTAB, ALTTAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
     _______, KC_END,  KC_HOME, KC_PGDN, KC_PGUP, PDESK,   NDESK  , KC_BTN1, KC_BTN2, KC_WH_D, KC_WH_U, _______,
     _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______
     ),
  };



uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QWERTY:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_QWERTY);
    }
    return false;
    break;
  case COLEMAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_COLEMAK);
    }
    return false;
    break;
  case DVORAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_DVORAK);
    }
    return false;
    break;
  }
  return true;
}
