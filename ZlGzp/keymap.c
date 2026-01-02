// clang-format off
#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};

#define DUAL_FUNC_0 LT(4, KC_1)
#define DUAL_FUNC_1 LT(10, KC_0)
#define DUAL_FUNC_2 LT(10, KC_F10)
#define DUAL_FUNC_3 LT(5, KC_G)
#define DUAL_FUNC_4 LT(13, KC_X)
#define DUAL_FUNC_5 LT(10, KC_T)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DELETE,      TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_ESCAPE,      KC_N,           KC_R,           MT(MOD_LALT, KC_T),MT(MOD_LCTL, KC_S),KC_G,                                           KC_Y,           MT(MOD_RCTL, KC_H),MT(MOD_RALT, KC_A),KC_E,           KC_I,           KC_COMMA,       
    KC_LEFT_SHIFT,  KC_Q,           KC_X,           KC_M,           MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),KC_DOT,         KC_MINUS,       KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    MO(1),          KC_SPACE,                                       KC_ENTER,       MO(2)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     KC_7,           KC_8,           KC_9,           LCTL(KC_X),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Y),     KC_4,           MT(MOD_LALT, KC_5),MT(MOD_LCTL, KC_6),LCTL(KC_C),                                     KC_LEFT,        MT(MOD_RCTL, KC_DOWN),MT(MOD_RALT, KC_UP),KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           MT(MOD_LGUI, KC_3),LCTL(KC_V),                                     KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, MO(3)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_GRAVE,       KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EQUAL,       KC_DLR,         DUAL_FUNC_0,    DUAL_FUNC_1,    KC_PLUS,                                        KC_LBRC,        DUAL_FUNC_3,    DUAL_FUNC_4,    KC_COLN,        KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_EXLM,        KC_AT,          DUAL_FUNC_2,    KC_BSLS,                                        KC_RBRC,        DUAL_FUNC_5,    KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    MO(3),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(5),          
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_LEFT_ALT,    KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_COMMA,       
    KC_LEFT_SHIFT,  KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_DOT,         KC_MINUS,       KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    KC_LEFT_CTRL,   KC_SPACE,                                       KC_ENTER,       KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_MINUS,       KC_BSPC,        
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    KC_LEFT_CTRL,   KC_SPACE,                                       KC_ENTER,       KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb(hsv);
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250},
           {145, 57, 250}, {145, 57, 250}, {145, 57, 250}, {145, 57, 250}},

    [4] = { {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250} },

    [5] = { {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248}, {139,131,248} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
    } else {
      RGB rgb = hsv_to_rgb_with_value(hsv);
      rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
    return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case DUAL_FUNC_0:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_PERC);
      } else {
        unregister_code16(KC_PERC);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_LEFT_ALT);
      } else {
        unregister_code16(KC_LEFT_ALT);
      }
    }
    return false;
  case DUAL_FUNC_1:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_CIRC);
      } else {
        unregister_code16(KC_CIRC);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_LEFT_CTRL);
      } else {
        unregister_code16(KC_LEFT_CTRL);
      }
    }
    return false;
  case DUAL_FUNC_2:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_HASH);
      } else {
        unregister_code16(KC_HASH);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_LEFT_GUI);
      } else {
        unregister_code16(KC_LEFT_GUI);
      }
    }
    return false;
  case DUAL_FUNC_3:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_LPRN);
      } else {
        unregister_code16(KC_LPRN);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_RIGHT_CTRL);
      } else {
        unregister_code16(KC_RIGHT_CTRL);
      }
    }
    return false;
  case DUAL_FUNC_4:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_LCBR);
      } else {
        unregister_code16(KC_LCBR);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_RIGHT_ALT);
      } else {
        unregister_code16(KC_RIGHT_ALT);
      }
    }
    return false;
  case DUAL_FUNC_5:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_RPRN);
      } else {
        unregister_code16(KC_RPRN);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_RIGHT_GUI);
      } else {
        unregister_code16(KC_RIGHT_GUI);
      }
    }
    return false;
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

// Custom QMK here
const key_override_t shift_minus_to_double_quote =
    ko_make_with_layers(MOD_MASK_SHIFT, KC_MINUS, S(KC_QUOTE), 1);
const key_override_t shift_slash_to_less_than =
    ko_make_with_layers(MOD_MASK_SHIFT, KC_SLASH, S(KC_COMMA), 1);
const key_override_t shift_comma_to_question_mark =
    ko_make_with_layers(MOD_MASK_SHIFT, KC_COMMA, S(KC_SLASH), 1);
const key_override_t shift_quote_to_underline =
    ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOTE, S(KC_MINUS), 1);

const key_override_t *key_overrides[] = (const key_override_t *[]){
    &shift_minus_to_double_quote, &shift_slash_to_less_than,
    &shift_comma_to_question_mark, &shift_quote_to_underline, NULL};

// clang-format on
