#include QMK_KEYBOARD_H
#include "secret.c"
#include "custom_keycodes.c"
// Tap Dance declarations
enum {
    TAP1,
};


enum anne_pro_layers {
    _EARTH = 0,
    _EARTH_S = 1,
    _VENUS = 2,
    _VENUS_S = 3,
    _SPUT,
    _EXPL,

};


const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
* Layer _EARTH
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |    Shift       |
* |-----------------------------------------------------------------------------------------+
* | TG(venus) |  L1   |  Alt  |            space           |  Caps  |  FN1  |  FN2  | Ctrl  |
* \-----------------------------------------------------------------------------------------/
*/
[_EARTH] = LAYOUT_60_ansi( /* Base */
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPACE,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_CAPS, KC_LALT, MO(_SPUT), KC_SPC, KC_RALT, MO(_EXPL), KC_RGUI, TO(_VENUS)
),
[_EARTH_S] = LAYOUT_60_ansi( /* Base */
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPACE,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_CAPS, KC_LALT, MO(_SPUT), KC_SPC, KC_RALT, MO(_EXPL), KC_RGUI, TO(_VENUS)
),
/*
* Layer _VENUS
* ,-----------------------------------------------------------------------------------------.
* | BT OFF | BT1 | BT2 |  F3 |  F4 |  F5 |  F6 |  F7 | F8 | F9 |  F10 | F11 | F12 |  DELETE |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  | UP  |  e  |  r  |  t  |  y  |  u  |  i  |  o  | PS | HOME | END |   \    |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    |LEFT |DOWN |RIGHT|  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift       |
* |-----------------------------------------------------------------------------------------+
* | Caps  |  L1   |  Alt  |        Tap Dance 1              |  Alt  |  FN1  |  FN2  | Ctrl  |
* \-----------------------------------------------------------------------------------------/
*
*/ 
[_VENUS] = LAYOUT_60_ansi( /* Base */
    KC_GESC, AG_EXCL, EN_AT, EN_HASH, EN_DLR, EN_PERC, EN_CIRC, EN_AMPR, EN_ASTR, EN_LPRN, EN_RPRN, AG_UNDS, AG_PLUS, KC_BSPACE,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    SFT_N, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
    KC_CAPS, TO(_EARTH), KC_LALT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
),
[_VENUS_S] = LAYOUT_60_ansi( /* Base */
    KC_GESC, AG_1, AG_2, AG_3, AG_4, AG_5, AG_6, AG_7, AG_8, AG_9, AG_0, AG_MINS, AG_EQL, KC_BSPACE,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    SFT_N, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
    KC_CAPS, TO(_EARTH), KC_LALT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
),

/*
* Layer _SPUT
* ,------------------------------------------------------------------------------------------------.
* | esc |   F1 |    F2 |   F3 |   F4 |   F5 |   F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE   |
* |------------------------------------------------------------------------------------------------+
* | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  C(L)  |  UP  |  C(R)  | p |  [  |  ]  |     \   |
* |------------------------------------------------------------------------------------------------+
* | Ctrl  |  a  |  s  |  d  |  f  |  g  |  h  |  LEFT  |  DOWN  |  RIGHT  | ; | ' |         Enter  |
* |------------------------------------------------------------------------------------------------+
* | Shift      |V-UP |V-DWN|MUTE |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift              |
* |------------------------------------------------------------------------------------------------+
* | Caps  |  L1   |  Alt  |               space             |  Alt  |  FN1  |  FN2  | Ctrl         |
* \------------------------------------------------------------------------------------------------/
*
*/

[_SPUT] = LAYOUT_60_ansi( /* Base */
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), KC_END, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, KC_PGDN, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_DEL, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
/*
* Layer _EXPL
* ,-----------------------------------------------------------------------------------------.
* | USB | BT1 | BT2 |  F3 |  F4 |  F5 |  F6 |  F7 | F8 | F9 |  F10 | F11 | F12 |  LED Off   |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  | UP  |  e  |  r  |  t  |  y  |  u  |  i  |  o  | PS | HOME | END |   \    |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    |LEFT |DOWN |RIGHT|  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    LED On   |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift       |
* |-----------------------------------------------------------------------------------------+
* | Caps  |  L1   |  Alt  |        Tap Dance 1              |  Alt  |  FN1  |  FN2  | Ctrl  |
* \-----------------------------------------------------------------------------------------/
*
*/
[_EXPL] = LAYOUT_60_ansi( /* Base */
    KC_AP2_USB, KC_AP2_BT1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XO_AP_LED_OFF,
    KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_HOME, KC_END, KC_TRNS,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_PGDN,XO_AP_LED_ON,
    KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_DEL, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, TD(TAP1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

};
// lang_shift
void user_timer(void) {
    lang_shift_user_timer();
}

void matrix_scan_user(void) {
    user_timer();
}

void keyboard_post_init_user(void) {
    ap2_led_enable();
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _SPUT:
            ap2_led_set_foreground_color(0x00, 0x50, 0x10);
            break;
        case _EXPL:
            ap2_led_set_foreground_color(0x00, 0x10, 0x50);
            break;
        case _VENUS:
            ap2_led_set_foreground_color(0x30, 0x00, 0x60);
            break;
        case _EARTH:
            ap2_led_set_foreground_color(0x40, 0x20, 0x00);
            break;
    }
    return state;
}

// The function to handle the caps lock logic
// It's called after the capslock changes state or after entering layers 1 and 2.
bool led_update_user(led_t leds) {
    if (leds.caps_lock) {
        // Set the caps-lock to red
        const ap2_led_t color = {.p.red = 0x40, .p.green = 0x00, .p.blue = 0x00, .p.alpha = 0x20};

        ap2_led_mask_set_key(2, 0, color);
        /*
        NOTE: Instead of colouring the capslock only, you can change the whole
           keyboard with ap2_led_set_foreground_color */
    } else {
        // Reset the capslock if there is no layer active
        if (layer_state_is(_EARTH))  {
            ap2_led_set_foreground_color(0x40, 0x20, 0x00);
        }
        // Проблему с подсветкой капса решили но зачем оно в этих слоях ?
        if (layer_state_is(_SPUT))  {
            ap2_led_set_foreground_color(0x00, 0x50, 0x10);
        }
        if (layer_state_is(_EXPL))  {
            ap2_led_set_foreground_color(0x00, 0x10, 0x50);
        }
        if (layer_state_is(_VENUS))  {
            ap2_led_set_foreground_color(0x30, 0x00, 0x60);
        }

    }

    return true;
}


void dancing_pass(qk_tap_dance_state_t *state, void *user_data) {

    if (state->count >= 3) {
        send_string(td1_string);
        reset_tap_dance(state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TAP1] = ACTION_TAP_DANCE_FN(dancing_pass),
};


