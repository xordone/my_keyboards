/*       
*   Layer 1   
*
*       | f1    | f2   | f3    | f4 | f5    |
*       |-------+------+-------+----+-------|
*       | f6    | f7   | f8    | f9 | f10   |
*       |  DMR1 | DMR2 |DM STOP|DM 1| DM 2  |
*       | Space | UP   | Enter |    |       |
*       | LEFT  | DOWN | RIGHT |    | TO(1) |
*
*   Layer 2
*
*       | f11       | f12  | f13        | f14 | f15   |
*       |-----------+------+------------+-----+-------|
*       | f16       | f17  | f18        | f19 | f20   |
*       |  DMR1     | DMR2 |  DM STOP   | DM 1| DM 2  |
*       | Space     | UP   | Enter      |     |       |
*       | Ctrl+LEFT | DOWN | Ctrl+RIGHT |     | TO(0) |
*
*
*
*
*
*
*
*
*

*/
#include QMK_KEYBOARD_H
#include "secret.c"

enum my_layers {
    FIRST_LAYER,
    SECOND_LAYER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [FIRST_LAYER] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        DYN_REC_START1,  DYN_REC_START2,  DYN_REC_STOP, DYN_MACRO_PLAY1, DYN_MACRO_PLAY2,
        KC_SPACE,   KC_UP,   KC_TAB,   KC_NO,  KC_NO,
        KC_LEFT,   KC_DOWN, KC_RIGHT, KC_NO, TO(SECOND_LAYER)
    ),
    [SECOND_LAYER] = LAYOUT(
        KC_F11,   KC_F12,   KC_F13,   KC_F14,   KC_F15,
        KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,
        DYN_REC_START1,  DYN_REC_START2,  DYN_REC_STOP, DYN_MACRO_PLAY1, DYN_MACRO_PLAY2,
        KC_SPACE, KC_UP, KC_ENTER, KC_NO, KC_NO,
        LCTL(KC_LEFT), KC_DOWN, LCTL(KC_RIGHT), KC_NO,  TO(FIRST_LAYER)
    ),
};
                       
// FIRST_LAYER   - Red light
// SECOND_LAYER  - Blue light


const rgblight_segment_t PROGMEM first_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {0, 25, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM second_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {0, 25, HSV_BLUE}
                                                                 );

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(first_layer, second_layer);

//void keyboard_post_init_user(void) {
//  rgblight_sethsv_noeeprom(HSV_PURPLE);
//  rgblight_layers = rgb_layers;
//}

layer_state_t layer_state_set_user(layer_state_t state) {
  // rgblight_set_layer_state(0, !on_qwerty());
  rgblight_set_layer_state(0, layer_state_cmp(state, FIRST_LAYER));
  rgblight_set_layer_state(1, layer_state_cmp(state, SECOND_LAYER));
  return state;
}
