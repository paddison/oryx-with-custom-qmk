#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_ESCAPE,      KC_N,           KC_R,           MT(MOD_LALT, KC_T),MT(MOD_LCTL, KC_S),KC_G,                                           KC_Y,           MT(MOD_RCTL, KC_H),MT(MOD_RALT, KC_A),KC_E,           KC_I,           KC_COMMA,       
    KC_LEFT_SHIFT,  KC_Q,           KC_X,           KC_M,           MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),KC_DOT,         KC_MINUS,       KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    MO(1),          KC_SPACE,                                       KC_ENTER,       MO(2)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     KC_7,           KC_8,           KC_9,           LCTL(KC_X),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Y),     KC_4,           KC_5,           KC_6,           LCTL(KC_C),                                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           LCTL(KC_V),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_GRAVE,       KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EQUAL,       KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                                        KC_LBRC,        KC_LPRN,        KC_LCBR,        KC_COLN,        KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_BSLS,                                        KC_RBRC,        KC_RPRN,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          TO(5),                                          KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_LEFT_ALT,    KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_COMMA,       
    KC_LEFT_SHIFT,  KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_DOT,         KC_MINUS,       KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    KC_LEFT_CTRL,   KC_SPACE,                                       KC_ENTER,       KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(6),          KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_TRANSPARENT, KC_BSPC,        
    KC_ESCAPE,      KC_A,           KC_R,           MT(MOD_RALT, KC_S),MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_RCTL, KC_N),MT(MOD_RALT, KC_E),KC_I,           KC_O,           KC_ENTER,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           MT(MOD_LGUI, KC_D),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_H),KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_RIGHT_SHIFT, 
                                                    KC_TRANSPARENT, KC_SPACE,                                       KC_RIGHT_SHIFT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_SPACE, KC_RIGHT_SHIFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(3)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250} },

    [5] = { {0,0,255}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



