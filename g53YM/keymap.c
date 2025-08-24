#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};

#define DUAL_FUNC_0 LT(5, KC_K)
#define DUAL_FUNC_1 LT(15, KC_F19)
#define DUAL_FUNC_2 LT(3, KC_K)
#define DUAL_FUNC_3 LT(5, KC_F15)
#define DUAL_FUNC_4 LT(6, KC_F3)
#define DUAL_FUNC_5 LT(9, KC_F9)
#define DUAL_FUNC_6 LT(1, KC_C)
#define DUAL_FUNC_7 LT(5, KC_F3)
#define DUAL_FUNC_8 LT(9, KC_3)
#define DUAL_FUNC_9 LT(2, KC_G)
#define DUAL_FUNC_10 LT(2, KC_F18)
#define DUAL_FUNC_11 LT(9, KC_F12)
#define DUAL_FUNC_12 LT(14, KC_F2)
#define DUAL_FUNC_13 LT(7, KC_F8)
#define DUAL_FUNC_14 LT(9, KC_F7)
#define DUAL_FUNC_15 LT(2, KC_7)
#define DUAL_FUNC_16 LT(14, KC_U)
#define DUAL_FUNC_17 LT(8, KC_U)
#define DUAL_FUNC_18 LT(8, KC_F19)
#define DUAL_FUNC_19 LT(3, KC_S)
#define DUAL_FUNC_20 LT(12, KC_F15)
#define DUAL_FUNC_21 LT(14, KC_J)
#define DUAL_FUNC_22 LT(15, KC_F9)
#define DUAL_FUNC_23 LT(13, KC_T)
#define DUAL_FUNC_24 LT(3, KC_H)
#define DUAL_FUNC_25 LT(3, KC_F19)
#define DUAL_FUNC_26 LT(13, KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_ESCAPE, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U,
        KC_Y, KC_QUOTE, KC_SCLN, QK_REPEAT_KEY, MT(MOD_LCTL, KC_A),
        MT(MOD_LALT, KC_R), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_T), KC_G, KC_M,
        MT(MOD_RSFT, KC_N), MT(MOD_RGUI, KC_E), MT(MOD_RALT, KC_I),
        MT(MOD_RCTL, KC_O), QK_REPEAT_KEY, KC_ENTER, KC_Z, KC_X, KC_C, KC_D,
        KC_V, KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_ENTER, LT(1, KC_SPACE),
        LT(3, KC_BSPC), LT(4, KC_BSPC), LT(2, KC_SPACE)),
    [1] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_7, KC_8, KC_9, KC_0, KC_PERC, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_0, DUAL_FUNC_1, DUAL_FUNC_2,
        DUAL_FUNC_3, DUAL_FUNC_4, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_DOT, KC_COMMA, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT),
    [2] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR, KC_RCBR, KC_GRAVE, KC_ASTR,
        KC_AMPR, KC_BSLS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC, KC_RBRC,
        KC_CIRC, KC_PERC, KC_DLR, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LABK, KC_RABK, KC_HASH, KC_AT, KC_EXLM,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT),
    [3] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, DUAL_FUNC_5, DUAL_FUNC_6, DUAL_FUNC_7, DUAL_FUNC_8,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,
        KC_DOWN, KC_UP, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_9, DUAL_FUNC_10, DUAL_FUNC_11,
        DUAL_FUNC_12, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_13,
        DUAL_FUNC_14, DUAL_FUNC_15, DUAL_FUNC_16, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP,
        KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, DUAL_FUNC_17, DUAL_FUNC_18, DUAL_FUNC_19, DUAL_FUNC_20,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT),
    [5] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
        KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_SYSTEM_SLEEP, KC_TRANSPARENT, KC_AUDIO_MUTE,
        KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_TRANSPARENT,
        KC_TRANSPARENT, DUAL_FUNC_22, DUAL_FUNC_23, DUAL_FUNC_24, DUAL_FUNC_25,
        KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_TAB)), LGUI(KC_LBRC),
        LGUI(KC_RBRC), LCTL(KC_TAB), KC_TRANSPARENT, KC_TRANSPARENT,
        RCTL(KC_LEFT), RCTL(KC_DOWN), RCTL(KC_UP), RCTL(KC_RIGHT),
        KC_TRANSPARENT, KC_MS_BTN1, DUAL_FUNC_21, DUAL_FUNC_26, RGUI(KC_EQUAL)),
    [6] = LAYOUT_voyager(
        KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_BRIGHTNESS_DOWN,
        KC_BRIGHTNESS_UP, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,
        KC_TRANSPARENT, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_ESCAPE, KC_A, KC_R, KC_S, KC_T, KC_G, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_ENTER, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_SPACE, KC_LEFT_SHIFT, KC_TRANSPARENT,
        KC_TRANSPARENT),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT('L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'L', 'L',
           'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'L', 'L', 'L', 'L',
           'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'L', 'L', 'L', 'L', 'L', 'L',
           'R', 'R', 'R', 'R', 'R', 'R', '*', '*', '*', '*');

const uint16_t PROGMEM combo0[] = {LT(1, KC_SPACE), LT(2, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo1[] = {LT(3, KC_BSPC), LT(4, KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo2[] = {LT(3, KC_BSPC), LT(4, KC_BSPC), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_ESCAPE)),
    COMBO(combo1, TT(5)),
    COMBO(combo2, TT(5)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MT(MOD_LSFT, KC_T):
    return TAPPING_TERM - 40;
  case MT(MOD_RSFT, KC_N):
    return TAPPING_TERM - 40;
  default:
    return TAPPING_TERM;
  }
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb(hsv);
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [5] = {{0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153}, {0, 0, 153},
           {0, 0, 153}, {0, 0, 153}},

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
        register_code16(KC_4);
      } else {
        unregister_code16(KC_4);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_KP_SLASH);
      } else {
        unregister_code16(KC_KP_SLASH);
      }
    }
    return false;
  case DUAL_FUNC_1:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_5);
      } else {
        unregister_code16(KC_5);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_KP_ASTERISK);
      } else {
        unregister_code16(KC_KP_ASTERISK);
      }
    }
    return false;
  case DUAL_FUNC_2:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_6);
      } else {
        unregister_code16(KC_6);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_KP_MINUS);
      } else {
        unregister_code16(KC_KP_MINUS);
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
        register_code16(KC_KP_PLUS);
      } else {
        unregister_code16(KC_KP_PLUS);
      }
    }
    return false;
  case DUAL_FUNC_4:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_RPRN);
      } else {
        unregister_code16(KC_RPRN);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_KP_EQUAL);
      } else {
        unregister_code16(KC_KP_EQUAL);
      }
    }
    return false;
  case DUAL_FUNC_5:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_Z));
      } else {
        unregister_code16(LGUI(KC_Z));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_Z)));
      } else {
        unregister_code16(LGUI(LSFT(KC_Z)));
      }
    }
    return false;
  case DUAL_FUNC_6:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_X));
      } else {
        unregister_code16(LGUI(KC_X));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_X)));
      } else {
        unregister_code16(LGUI(LSFT(KC_X)));
      }
    }
    return false;
  case DUAL_FUNC_7:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_C));
      } else {
        unregister_code16(LGUI(KC_C));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_C)));
      } else {
        unregister_code16(LGUI(LSFT(KC_C)));
      }
    }
    return false;
  case DUAL_FUNC_8:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_V));
      } else {
        unregister_code16(LGUI(KC_V));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_V)));
      } else {
        unregister_code16(LGUI(LSFT(KC_V)));
      }
    }
    return false;
  case DUAL_FUNC_9:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RALT(KC_LEFT));
      } else {
        unregister_code16(RALT(KC_LEFT));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RALT(RSFT(KC_LEFT)));
      } else {
        unregister_code16(RALT(RSFT(KC_LEFT)));
      }
    }
    return false;
  case DUAL_FUNC_10:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RALT(KC_DOWN));
      } else {
        unregister_code16(RALT(KC_DOWN));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RALT(RSFT(KC_DOWN)));
      } else {
        unregister_code16(RALT(RSFT(KC_DOWN)));
      }
    }
    return false;
  case DUAL_FUNC_11:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RALT(KC_UP));
      } else {
        unregister_code16(RALT(KC_UP));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RALT(RSFT(KC_UP)));
      } else {
        unregister_code16(RALT(RSFT(KC_UP)));
      }
    }
    return false;
  case DUAL_FUNC_12:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RALT(KC_RIGHT));
      } else {
        unregister_code16(RALT(KC_RIGHT));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RALT(RSFT(KC_RIGHT)));
      } else {
        unregister_code16(RALT(RSFT(KC_RIGHT)));
      }
    }
    return false;
  case DUAL_FUNC_13:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RGUI(KC_B));
      } else {
        unregister_code16(RGUI(KC_B));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RGUI(RSFT(KC_B)));
      } else {
        unregister_code16(RGUI(RSFT(KC_B)));
      }
    }
    return false;
  case DUAL_FUNC_14:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RGUI(KC_I));
      } else {
        unregister_code16(RGUI(KC_I));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RGUI(RSFT(KC_I)));
      } else {
        unregister_code16(RGUI(RSFT(KC_I)));
      }
    }
    return false;
  case DUAL_FUNC_15:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RGUI(KC_U));
      } else {
        unregister_code16(RGUI(KC_U));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RGUI(RSFT(KC_U)));
      } else {
        unregister_code16(RGUI(RSFT(KC_U)));
      }
    }
    return false;
  case DUAL_FUNC_16:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RGUI(KC_H));
      } else {
        unregister_code16(RGUI(KC_H));
      }
    } else {
      if (record->event.pressed) {
        register_code16(RGUI(RSFT(KC_H)));
      } else {
        unregister_code16(RGUI(RSFT(KC_H)));
      }
    }
    return false;
  case DUAL_FUNC_17:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_LEFT));
      } else {
        unregister_code16(LGUI(KC_LEFT));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_LEFT)));
      } else {
        unregister_code16(LGUI(LSFT(KC_LEFT)));
      }
    }
    return false;
  case DUAL_FUNC_18:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_DOWN));
      } else {
        unregister_code16(LGUI(KC_DOWN));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_DOWN)));
      } else {
        unregister_code16(LGUI(LSFT(KC_DOWN)));
      }
    }
    return false;
  case DUAL_FUNC_19:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_UP));
      } else {
        unregister_code16(LGUI(KC_UP));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_UP)));
      } else {
        unregister_code16(LGUI(LSFT(KC_UP)));
      }
    }
    return false;
  case DUAL_FUNC_20:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(LGUI(KC_RIGHT));
      } else {
        unregister_code16(LGUI(KC_RIGHT));
      }
    } else {
      if (record->event.pressed) {
        register_code16(LGUI(LSFT(KC_RIGHT)));
      } else {
        unregister_code16(LGUI(LSFT(KC_RIGHT)));
      }
    }
    return false;
  case DUAL_FUNC_21:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_MINUS);
      } else {
        unregister_code16(KC_MINUS);
      }
    } else {
      if (record->event.pressed) {
        layer_move(0);
      } else {
        layer_move(0);
      }
    }
    return false;
  case DUAL_FUNC_22:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_LEFT);
      } else {
        unregister_code16(KC_LEFT);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MS_WH_RIGHT);
      } else {
        unregister_code16(KC_MS_WH_RIGHT);
      }
    }
    return false;
  case DUAL_FUNC_23:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_DOWN);
      } else {
        unregister_code16(KC_DOWN);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MS_WH_UP);
      } else {
        unregister_code16(KC_MS_WH_UP);
      }
    }
    return false;
  case DUAL_FUNC_24:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_UP);
      } else {
        unregister_code16(KC_UP);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MS_WH_DOWN);
      } else {
        unregister_code16(KC_MS_WH_DOWN);
      }
    }
    return false;
  case DUAL_FUNC_25:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(KC_RIGHT);
      } else {
        unregister_code16(KC_RIGHT);
      }
    } else {
      if (record->event.pressed) {
        register_code16(KC_MS_WH_LEFT);
      } else {
        unregister_code16(KC_MS_WH_LEFT);
      }
    }
    return false;
  case DUAL_FUNC_26:
    if (record->tap.count > 0) {
      if (record->event.pressed) {
        register_code16(RGUI(KC_MINUS));
      } else {
        unregister_code16(RGUI(KC_MINUS));
      }
    } else {
      if (record->event.pressed) {
        layer_move(0);
      } else {
        layer_move(0);
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
