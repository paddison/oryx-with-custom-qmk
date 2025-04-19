#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_ESCAPE,      KC_N,           KC_R,           MT(MOD_LALT, KC_T),MT(MOD_LCTL, KC_S),KC_G,                                           KC_Y,           MT(MOD_RCTL, KC_H),MT(MOD_RALT, KC_A),KC_E,           KC_I,           KC_COMMA,       
    KC_LEFT_SHIFT,  KC_Q,           KC_X,           KC_M,           MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),KC_DOT,         KC_MINUS,       KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    MO(1),          KC_SPACE,                                       KC_ENTER,       MO(2)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_LEFT_ALT,    MT(MOD_LCTL, KC_TAB),KC_TRANSPARENT,                                 KC_LEFT,        MT(MOD_RCTL, KC_DOWN),MT(MOD_RALT, KC_UP),KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     TD(DANCE_0),    LCTL(KC_V),                                     KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_GRAVE,       KC_TILD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_QUOTE,       KC_LCBR,        MT(MOD_RALT, KC_LBRC),TD(DANCE_1),    KC_PERC,                                        KC_SLASH,       MT(MOD_RCTL, KC_MINUS),MT(MOD_RALT, KC_EQUAL),KC_COLN,        KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DQUO,        KC_RCBR,        KC_RBRC,        TD(DANCE_2),    KC_DLR,                                         KC_BSLS,        TD(DANCE_3),    KC_PLUS,        KC_PIPE,        KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          TO(4),                                          KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(5),          TO(6),          TO(7),          TO(0),          TO(8),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_TRANSPARENT, KC_BSPC,        
    KC_ESCAPE,      KC_A,           KC_R,           MT(MOD_RALT, KC_S),MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_RCTL, KC_N),MT(MOD_RALT, KC_E),KC_I,           KC_O,           KC_ENTER,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           MT(MOD_LGUI, KC_D),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_H),KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_RIGHT_SHIFT, 
                                                    KC_TRANSPARENT, KC_SPACE,                                       KC_RIGHT_SHIFT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Y,           KC_C,           KC_L,           KC_M,           KC_K,                                           KC_Z,           KC_F,           KC_U,           KC_ENTER,       KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_I,           KC_S,           KC_R,           KC_T,           KC_G,                                           KC_P,           KC_N,           KC_E,           KC_A,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_V,           KC_W,           KC_D,           KC_J,           KC_Q,                                           KC_B,           KC_H,           KC_COMMA,       KC_DOT,         KC_X,           KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_W,           KC_L,           KC_Y,           KC_P,           KC_K,                                           KC_Z,           KC_X,           KC_O,           KC_U,           KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_C,           KC_R,           KC_S,           KC_T,           KC_B,                                           KC_F,           KC_N,           KC_E,           KC_I,           KC_A,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_J,           KC_V,           KC_D,           KC_G,           KC_Q,                                           KC_M,           KC_H,           KC_COMMA,       KC_DOT,         KC_ENTER,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_SPACE,                                       KC_RIGHT_SHIFT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_B,           KC_L,           KC_D,           KC_C,           KC_V,                                           KC_J,           KC_Y,           KC_O,           KC_U,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_P,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_X,           KC_Q,           KC_M,           KC_W,           KC_Z,                                           KC_K,           KC_F,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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

    [1] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {0,0,255}, {188,106,248}, {188,106,248} },

    [4] = { {0,0,255}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {188,106,248}, {145,57,250}, {188,106,248}, {188,106,248} },

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
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 4:
      set_layer_color(4);
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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Y));
        tap_code16(LCTL(KC_Y));
        tap_code16(LCTL(KC_Y));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Y));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Y)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Y)); register_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Y)); register_code16(LCTL(KC_Y));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Y)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_LPRN); register_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
    }
    if(state->count > 3) {
        tap_code16(KC_UNDS);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_UNDS); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: register_code16(KC_UNDS); register_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UNDS); register_code16(KC_UNDS);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_UNDS); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: unregister_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UNDS); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};




// Custom QMK here
const key_override_t shift_minus_to_double_quote = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINUS, S(KC_QUOTE), 1);
const key_override_t shift_slash_to_less_than = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLASH, S(KC_COMMA), 1);
const key_override_t shift_comma_to_question_mark = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMMA, S(KC_SLASH), 1);
const key_override_t shift_quote_to_underline = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOTE, S(KC_MINUS), 1);

const key_override_t **key_overrides = (const key_override_t *[]){
	&shift_minus_to_double_quote,
        &shift_slash_to_less_than,
        &shift_comma_to_question_mark,
        &shift_quote_to_underline,
	NULL
};

