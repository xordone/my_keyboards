/* Copyright 2021 jereksel
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum my_layers {
    A_LAYER,
    B_LAYER,
    C_LAYER,
    D_LAYER,
    E_LAYER,
    F_LAYER,
    G_LAYER,
    H_LAYER,
    I_LAYER,
    K_LAYER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [A_LAYER] = LAYOUT(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_ESC,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS, RGB_TOG,
        KC_P4,   KC_P5,   KC_P6,   KC_PENT, RGB_MOD,
        KC_P1,   KC_P2,   KC_P3,   KC_UP,   TO(B_LAYER),
        KC_P0,   KC_PDOT, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [B_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(C_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [C_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(D_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [D_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(E_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [E_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(F_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [F_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(G_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [G_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(H_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [H_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(I_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [I_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(K_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [K_LAYER] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, TO(A_LAYER),
        KC_RSFT, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
};

const rgblight_segment_t PROGMEM a_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {10, 1, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM b_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {11, 1, HSV_RED}
                                                                 );
const rgblight_segment_t PROGMEM c_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {12, 1, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM d_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {13, 1, HSV_RED}
                                                                 );
const rgblight_segment_t PROGMEM e_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {14, 1, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM f_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {15, 1, HSV_RED}
                                                                 );
const rgblight_segment_t PROGMEM g_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {16, 1, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM h_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {17, 1, HSV_RED}
                                                                 );
const rgblight_segment_t PROGMEM i_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                    {18, 1, HSV_RED}
                                                                    );

const rgblight_segment_t PROGMEM k_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                 {19, 1, HSV_RED}
                                                                 );
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(a_layer,b_layer,c_layer,d_layer,e_layer,f_layer,g_layer,h_layer,i_layer,k_layer);

void keyboard_post_init_user(void) {
  rgblight_sethsv_noeeprom(HSV_PURPLE);
  rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // rgblight_set_layer_state(0, !on_qwerty());
  rgblight_set_layer_state(0, layer_state_cmp(state, A_LAYER));
  rgblight_set_layer_state(1, layer_state_cmp(state, B_LAYER));
  rgblight_set_layer_state(2, layer_state_cmp(state, C_LAYER));
  rgblight_set_layer_state(3, layer_state_cmp(state, D_LAYER));
  rgblight_set_layer_state(4, layer_state_cmp(state, E_LAYER));
  rgblight_set_layer_state(5, layer_state_cmp(state, F_LAYER));
  rgblight_set_layer_state(6, layer_state_cmp(state, G_LAYER));
  rgblight_set_layer_state(7, layer_state_cmp(state, H_LAYER));  
  rgblight_set_layer_state(8, layer_state_cmp(state, I_LAYER));
  rgblight_set_layer_state(9, layer_state_cmp(state, K_LAYER));

  return state;
}
