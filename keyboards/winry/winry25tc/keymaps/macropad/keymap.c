/*       
*   Layer 1
*   
*         |-------+------+-------+------+-------|
*         | TAP1  | TAP2 | TAP3  | TAP4 | TAP5  |
*         |-------+------+-------+------+-------|
*         | F13   | F14  | F15   | F16  | F17   |
*         |-------+------+-------+------+-------|
*         | M1    | M2   | M3    | M4   | M5    |
*         |-------+------+-------+------+-------|
*         | Space | Up   | Enter |      |       |
*         |-------+------+-------+------+-------|
*         | Left  | Down | Right |      | TO(1) |
*         |-------+------+-------+------+-------|
*
*
*   Layer 2
*
*         |-------+------+-------+------+-------|
*         | TAP6  | TAP7 | TAP8  | TAP9 | TAP10 |
*         |-------+------+-------+------+-------|
*         | F18   | F19  | F20   | F21  | F22   |
*         |-------+------+-------+------+-------|
*         | M6    | M7   | M8    | M9   | M10   |
*         |-------+------+-------+------+-------|
*         | Space | Up   | Enter |      |       |
*         |-------+------+-------+------+-------|
*         | Left  | Down | Right |      | TO(0) |
*         |-------+------+-------+------+-------|
*
*

*/
#include QMK_KEYBOARD_H
#include "secret.c"



enum my_layers {
    FIRST_LAYER,
    SECOND_LAYER
};
// Tap Dance declarations
enum {
    TAP1,
};
enum custom_keycodes {
    M1 = SAFE_RANGE,
    M2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [FIRST_LAYER] = LAYOUT(
    TD(TAP1), KC_NO, KC_NO, KC_NO, KC_NO,
    KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,
    M1, M2, KC_NO, KC_NO, KC_NO,
    KC_SPACE, KC_UP, KC_ENTER, KC_NO, KC_NO,
    KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, TO(SECOND_LAYER)
    ),
    [SECOND_LAYER] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_F18, KC_F19, KC_F20, KC_F21, KC_F22,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_SPACE, KC_UP, KC_ENTER, KC_NO, KC_NO,
      KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, TO(FIRST_LAYER)
      ),
};
                       
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
//const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//    {9, 2, HSV_CYAN}
//);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
//const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//    {11, 2, HSV_PURPLE}
//);


const rgblight_segment_t PROGMEM first_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {0, 40, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM second_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {0, 40, HSV_BLUE}
                                                                 );

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(first_layer, second_layer);

void keyboard_post_init_user(void) {
  rgblight_sethsv_noeeprom(HSV_PURPLE);
  rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // rgblight_set_layer_state(0, !on_qwerty());
  rgblight_set_layer_state(0, layer_state_cmp(state, FIRST_LAYER));
  rgblight_set_layer_state(1, layer_state_cmp(state, SECOND_LAYER));
  return state;
}

// Tap Dance definitions
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
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case M1:
        if (record->event.pressed) {
          // when keycode M1 is pressed
            send_string(m1_string);
        } else {
            // when keycode M1 is released
        }
        break;
    
    case M2:
        if (record->event.pressed) {
            send_string(m2_string);
        } else {
        }
        break;
    }
    return true;
};
