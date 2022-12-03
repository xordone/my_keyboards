#define CUSTOM_SAFE_RANGE AP2_SAFE_RANGE
#include "mods/lang_shift/include.h"
#include <print.h>
enum my_keycodes {
  RAT_NEXT = CUSTOM_SAFE_RANGE,
  XO_AP_LED_ON,
  XO_AP_LED_OFF,
};

// Мои языко-символьные клавиши
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // #ifdef CONSOLE_ENABLE
  // uprintf("KL: col=%d, row=%d, pressed=%d, layer=%d\n", record->event.key.col, record->event.key.row, record->event.pressed, biton32(layer_state));
  // #endif
  if (!lang_shift_process_record(keycode, record))
    return false;
  switch (keycode) {
    case RAT_NEXT:
    if (record->event.pressed) {
      shift_activate(0);

      tap_code16(KC_LEFT);
      tap_code16(KC_ENT);
      break;
    }
    case XO_AP_LED_OFF:
    if (record->event.pressed) {
      ap2_led_disable();
      break;      
    }
    case XO_AP_LED_ON:
    if (record->event.pressed) {
      ap2_led_enable();
      ap2_led_set_foreground_color(0x40, 0x20, 0x00);
      break;
    }
  }
return true; // Process all other keycodes normally

}

   