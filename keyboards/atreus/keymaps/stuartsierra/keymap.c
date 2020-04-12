#include QMK_KEYBOARD_H

enum custom_keycodes {
  HY_QUOTE = SAFE_RANGE,
  HY_COMMA, HY_DOT, HY_P, HY_Y, HY_F, HY_G, HY_C, HY_R, HY_L,
  HY_A, HY_O, HY_E, HY_U, HY_I, HY_D, HY_H, HY_T, HY_N, HY_S,
  HY_SCOLON, HY_Q, HY_J, HY_K, HY_X, HY_B, HY_M, HY_W, HY_V, HY_Z
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case HY_QUOTE:  if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_QUOTE));} return false; break;
  case HY_COMMA:  if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_COMMA));} return false; break;
  case HY_DOT:    if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_DOT));} return false; break;
  case HY_P:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_P));} return false; break;
  case HY_Y:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_Y));} return false; break;
  case HY_F:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_F));} return false; break;
  case HY_G:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_G));} return false; break;
  case HY_C:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_C));} return false; break;
  case HY_R:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_R));} return false; break;
  case HY_L:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_L));} return false; break;
  case HY_A:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_A));} return false; break;
  case HY_O:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_O));} return false; break;
  case HY_E:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_E));} return false; break;
  case HY_U:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_U));} return false; break;
  case HY_I:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_I));} return false; break;
  case HY_D:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_D));} return false; break;
  case HY_H:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_H));} return false; break;
  case HY_T:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_T));} return false; break;
  case HY_N:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_N));} return false; break;
  case HY_S:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_S));} return false; break;
  case HY_SCOLON: if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_SCOLON));} return false; break;
  case HY_Q:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_Q));} return false; break;
  case HY_J:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_J));} return false; break;
  case HY_K:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_K));} return false; break;
  case HY_X:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_X));} return false; break;
  case HY_B:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_B));} return false; break;
  case HY_M:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_M));} return false; break;
  case HY_W:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_W));} return false; break;
  case HY_V:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_V));} return false; break;
  case HY_Z:      if (record->event.pressed) {SEND_STRING(SS_TAP(X_F19) SS_TAP(X_Z));} return false; break;
  }
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Dvorak letters */
    KC_QUOTE,  KC_COMMA, KC_DOT,  KC_P,    KC_Y,                      KC_F,    KC_G,  KC_C,    KC_R,    KC_L,
    KC_A,      KC_O,     KC_E,    KC_U,    KC_I,                      KC_D,    KC_H,  KC_T,    KC_N,    KC_S,
    KC_SCOLON, KC_Q,     KC_J,    KC_K,    KC_X,                      KC_B,    KC_M,  KC_W,    KC_V,    KC_Z,

    KC_ESC,    KC_TAB,   KC_LGUI, KC_LSFT, KC_BSPC, KC_LALT, KC_LCTL, KC_SPC,  MO(1), KC_MINS, KC_SLSH, KC_ENT
  ),

  [1] = LAYOUT( /* Numbers and extra keys */
    KC_1,      KC_2,     KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,        KC_0,
    KC_EQUAL,  KC_NO,    KC_DOT,  KC_NO,   KC_HOME,                   KC_PGUP, KC_NO,   KC_UP,   KC_LBRACKET, KC_RBRACKET,
    KC_GRAVE,  KC_NO,    KC_NO,   KC_NO,   KC_END,                    KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT,    KC_BSLASH,

    TO(2),     KC_TRNS,  KC_TRNS, KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS
  ),

  [2] = LAYOUT( /* Function keys */
    KC_F1,     KC_F2,    KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,       KC_F10,
    KC_F11,    KC_F12,   KC_F13,  KC_F14,  KC_F15,                    KC_F16,  KC_F17,  KC_F18,  KC_F19,      KC_F20,
    KC_F21,    KC_F22,   KC_F23,  KC_F24,  RESET,                     TO(3),   KC_NO,   KC_NO,   KC_NO,       KC_NO,

    TO(0),     KC_TRNS,  KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS
  ),

  [3] = LAYOUT( /* Macro keys, prefixed with F19 */
    HY_QUOTE,  HY_COMMA, HY_DOT,  HY_P,    HY_Y,                      HY_F,    HY_G,  HY_C,    HY_R,    HY_L,
    HY_A,      HY_O,     HY_E,    HY_U,    HY_I,                      HY_D,    HY_H,  HY_T,    HY_N,    HY_S,
    HY_SCOLON, HY_Q,     HY_J,    HY_K,    HY_X,                      HY_B,    HY_M,  HY_W,    HY_V,    HY_Z,

    TO(0),     KC_TRNS,  KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS
  )
};
