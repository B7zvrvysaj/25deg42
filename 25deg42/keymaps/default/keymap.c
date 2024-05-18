#include QMK_KEYBOARD_H

// MOD_KC
#define CTL_ESC MT(MOD_LCTL, KC_ESCAPE)
#define CTL_ENT MT(MOD_LCTL, KC_ENTER)
#define ALT_Z   MT(MOD_LALT, KC_Z)
#define ALT_SLS MT(MOD_LALT, KC_SLASH)
#define SU_QUOT MT(MOD_LGUI, KC_QUOTE)
#define SU_BSLS MT(MOD_LGUI, KC_BSLS)
#define SFT_DEL MT(MOD_LSFT, KC_DELETE)

// LAYER_KC
#define L2_SPC  LT(2, KC_SPC)
#define L1_LBRC LT(1, KC_LBRC)
#define L1_RBRC LT(1, KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer
[0] = LAYOUT_split_3x6_3(
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC,
    KC_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,       KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LGUI, ALT_Z  , KC_X   , KC_C   , KC_V   , KC_B   ,       KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT,
                               KC_LCTL, KC_SPC , LT(1,KC_LALT),       KC_BSPC, KC_LSFT , KC_RCTL
  ),
  // Symbols Layer
[1] = LAYOUT_split_3x6_3(
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
    KC_INS , KC_EXLM, KC_DQUO, KC_HASH, KC_SCLN, KC_PERC,       KC_CIRC, KC_QUES, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS,
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,       KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
                               LT(2,KC_TRNS), KC_TRNS , KC_TRNS  ,       KC_TRNS, KC_TRNS, KC_TRNS
  ),
  // Navigation Layer
[2] = LAYOUT_split_3x6_3(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,       KC_BRIU, KC_TRNS, KC_UP  , KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END , KC_TRNS,       KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_BRID, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_DEL,
                               KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
  ),
};
