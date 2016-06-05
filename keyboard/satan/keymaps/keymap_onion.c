// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "satan.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define DEFAULT 0       // Default Windows keymap, CAPS -> FN0
#define LAYER_FN 1      // FN0 Layer, when the FN0 key is held down
#define LAYER_2 2       // GL1, triggers GL2
#define LAYER_3 3       // TR layer
#define LAYER_4 4       // Numpad/Caps/Num/Scroll Lock layer
#define LAYER_5 5       // Backlight, volume and mouse layer
#define LAYER_6 6       // GL2 (function key layer), up to F24 with arrows

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// [TEMPLATE] = KEYMAP(
// /*
//        |        |        |        |        |        |        |        |        |        |        |        |        |        | */
// KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
// /*
//        |        |        |        |        |        |        |        |        |        |        |        |        |        | */
// KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
// /*
//        |        |        |        |        |        |        |        |        |        |        |        |        |  */
// KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
// /*
//        |        |        |        |        |        |        |        |        |        |        |        | */
// KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
// /*
//        |        |        |        |        |        |        |        | */
// KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   \
// ),

[DEFAULT] = KEYMAP(
/*
`~    | 1!  | 2@  | 3#  | 4$  | 5%  | 6^  | 7&  | 8&  | 9(  | 0)  | -_     | =+    | Bspace | */
KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
/*
Tab   | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   | [{     | ]}     | \|     | */
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, \
/*
Fn    | A   | S   | D   | F   | G   | H   | J   | K   | L   | ;:     | '"     | Enter |*/
KC_FN1, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
/*
LShift | Z   | X   | C   | V   | B   | N   | M   | ,<     | .>    | /?     | RShift | */
KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
/*
LCtrl  | Win    | LAlt   | Space | RAlt   | Esc   | Delete   | RCtrl  | */
KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_ESC, KC_DELETE, KC_RCTL \
),

[LAYER_FN] = KEYMAP(
/*
Esc   | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F1    | F1    | F1    | Bspace | */
KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC, \
/*
     |      |      |      | Fn3   |      |      |      | Ins   |      | PScrn  | PUp    | PDown  | Delete   | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_FN3, KC_NO, KC_NO, KC_NO, KC_INS, KC_NO, KC_PSCR, KC_PGUP, KC_PGDN, KC_DELETE, \
/*
     |      |      |      | Fn2   |      | ←      | ↑    | ↓      | →      | Home   | End   |      | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_FN2, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_HOME, KC_END, KC_NO, \
/*
CapsL  |      |      |      |      |      |      | Fn4   |      |      |      |      | */
KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_FN4, KC_NO, KC_NO, KC_NO, KC_NO, \
/*
     | C+A+D | Fn5   | BL T  |      |      | Menu  |       |      | */
KC_NO, KC_FN0, KC_FN5, KC_FN6, KC_NO, KC_NO, KC_APP, KC_NO \
),

[LAYER_2] = KEYMAP(
/*
Esc   | 1!  | 2@  | 3#  | 4$  | 5%  | 6^  | 7&  | 8&  | 9(  | 0)  | -_     | =+    | Bspace | */
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
/*
Tab   | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   | [{     | ]}     | \|     | */
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, \
/*
Fn6    | A   | S   | D   | F   | G   | H   | J   | K   | L   | ;:     | '"     | Enter |*/
KC_FN18, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
/*
LShift | Z   | X   | C   | V   | B   | N   | M   | ,<     | .>    | /?     | RShift | */
KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
/*
LCtrl  | Fn    | LAlt   | Space | RAlt   | Fn2   |      | RCtrl  | */
KC_LCTL, KC_FN1, KC_LALT, KC_SPC, KC_RALT, KC_FN2, KC_NO, KC_RCTL \
),

[LAYER_3] = KEYMAP(
/*
`~    | 1!  | 2@  | 3#  | 4$  | 5%  | 6^  | 7&  | 8&  | 9(  | 0)  | -_     | =+    | Bspace | */
KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
/*
Tab   | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   | [{     | ]}     | \|     | */
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, \
/*
DelA | A   | S   | D   | F   | G   | H   | J   | K   | L   | ;:     | '"     | Enter |*/
M(1) , KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
/*
LShift | Z   | X   | C   | V   | B   | N   | M   | ,<     | .>    | /?     | RShift | */
KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
/*
LCtrl  |      | LAlt   | Space | RAlt   | Fn3   |      | RCtrl  | */
KC_LCTL, KC_NO, KC_LALT, KC_SPC, KC_RALT, KC_FN3, KC_NO, KC_RCTL \
),

[LAYER_4] = KEYMAP(
/*
     | N1   | N2   | N3   | N4   | N5   | N6   | N7   | N8   | N9   | N0   | N-   | N+   |     | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
/*
     |      |      |      |      |      |      |      |      |      |      | N*     |      |      | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAST, KC_NO, KC_NO, \
/*
CapsL  |      | ScrlL  |      |      |      |      |      |      |      |      |      | NEnter |*/
KC_CAPS, KC_NO, KC_SLCK, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT, \
/*
     |      |      |      |      |      |      |      | NumL   | N.     | N/     |      | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NLCK, KC_PDOT, KC_PSLS, KC_NO, \
/*
     |      |      |      |      | Fn4   |      |      | */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_FN4, KC_NO, KC_NO \
),

[LAYER_5] = KEYMAP(
/*
Boot   | Fn2    | Fn3    | Fn4    |        |        |        |        |        |        | Mute   | VolUp  | VolDn  |       | */
KC_NO  , KC_FN2 , KC_FN3 , KC_FN4 , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_MUTE, KC_VOLU, KC_VOLD, KC_NO  , \
/*
       |        | Mouse↑ |        | Mouse2 |        |        |        |        |        |        |        |        |       | */
KC_NO  , KC_NO  , KC_MS_U, KC_NO  , KC_BTN2, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
/*
Fn5    | Mouse← | Mouse↓ | Mouse→ | Mouse1 |        | ←      | ↑      | ↓      | →      |        |        |       |*/
KC_FN5 , KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, KC_NO  , KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, KC_NO  , KC_NO  , KC_NO  , \
/*
       | Hue -  | Hue +  | Sat -  | Sat +  | Val -  | Val +  |        | BL -   | BL +   | BL M   |        | */
KC_NO  , KC_FN12, KC_FN13, KC_FN14, KC_FN15, KC_FN16, KC_FN17, KC_NO  , KC_FN9 , KC_FN8 , KC_FN7 , KC_NO  , \
/*
RGB M  |        |        | RGB On | BL On  | Fn5    | Menu     |         | */
KC_FN11, KC_NO  , KC_NO  , KC_FN10, KC_FN6 , KC_FN5 , KC_APP , KC_NO   \
),

[LAYER_6] = KEYMAP(
/*
Esc    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    |        | */
KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_NO  , \
/*
Tab    | F13    | F14    | F15    | F16    |        |        |        |        |        |        |        |        |        | */
KC_NO  , KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
/*
       | F17    | F18    | F19    | F20    |        | ←      | ↑      | ↓      | →      |        |        |        | */
KC_NO  , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_NO  , KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, KC_NO  , KC_NO  , KC_NO  , \
/*
       | F21    | F22    | F23    | F24    |        |        |        |        |        |        |        | */
KC_NO  , KC_F21 , KC_F22 , KC_F23 , KC_F24 , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , \
/*
       |        |        |        |        |        |        |        | */
KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   \
)

};

enum function_id {
    SHIFT_ESC,
    RGBLED_TOGGLE,
    RGBLED_STEP_MODE,
    RGBLED_INCREASE_HUE,
    RGBLED_DECREASE_HUE,
    RGBLED_INCREASE_SAT,
    RGBLED_DECREASE_SAT,
    RGBLED_INCREASE_VAL,
    RGBLED_DECREASE_VAL,
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DELETE),    // CTRL + ALT + DELETE
  [1] = ACTION_LAYER_MOMENTARY(LAYER_FN),                   // Layer 1/Hold down FN key
  [2] = ACTION_LAYER_TOGGLE(LAYER_2),                       // Layer 2/Switch to gaming layer
  [3] = ACTION_LAYER_TOGGLE(LAYER_3),                       // Layer 3/Switch to TR layer
  [4] = ACTION_LAYER_TOGGLE(LAYER_4),                       // Layer 4/Switch to numpad layer
  [5] = ACTION_LAYER_TOGGLE(LAYER_5),                       // Layer 5/Switch to controls layer
  [6] = ACTION_BACKLIGHT_TOGGLE(),                          // Backlight toggle
  [7] = ACTION_BACKLIGHT_STEP(),                            // Backlight lighting mode toggle
  [8] = ACTION_BACKLIGHT_INCREASE(),                        // Backlight increase
  [9] = ACTION_BACKLIGHT_DECREASE(),                        // Backlight decrease
  [10] = ACTION_FUNCTION(RGBLED_TOGGLE),                    // RGB underglow toggle
  [11] = ACTION_FUNCTION(RGBLED_STEP_MODE),                 // RGB underglow switch lighting mode
  [12] = ACTION_FUNCTION(RGBLED_INCREASE_HUE),              // RGB hue increase
  [13] = ACTION_FUNCTION(RGBLED_DECREASE_HUE),              // RGB hue decrease
  [14] = ACTION_FUNCTION(RGBLED_INCREASE_SAT),              // RGB saturation increase
  [15] = ACTION_FUNCTION(RGBLED_DECREASE_SAT),              // RGB saturation decrease
  [16] = ACTION_FUNCTION(RGBLED_INCREASE_VAL),              // RGB value increase
  [17] = ACTION_FUNCTION(RGBLED_DECREASE_VAL),              // RGB value decrease
  [18] = ACTION_LAYER_MOMENTARY(LAYER_6)                    // Layer 8/Toggle FKeys
};

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
    case RGBLED_TOGGLE:
      //led operations
      if (record->event.pressed) {
        rgblight_toggle();
      }

      break;
    case RGBLED_INCREASE_HUE:
      if (record->event.pressed) {
        rgblight_increase_hue();
      }
      break;
    case RGBLED_DECREASE_HUE:
      if (record->event.pressed) {
        rgblight_decrease_hue();
      }
      break;
    case RGBLED_INCREASE_SAT:
      if (record->event.pressed) {
        rgblight_increase_sat();
      }
      break;
    case RGBLED_DECREASE_SAT:
      if (record->event.pressed) {
        rgblight_decrease_sat();
      }
      break;
      case RGBLED_INCREASE_VAL:
        if (record->event.pressed) {
          rgblight_increase_val();
        }
        break;
      case RGBLED_DECREASE_VAL:
        if (record->event.pressed) {
          rgblight_decrease_val();
        }
        break;
      case RGBLED_STEP_MODE:
        if (record->event.pressed) {
          rgblight_step();
        }
        break;
  }
}


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          return (record->event.pressed ? MACRO( D(LCTL) ,T(A) , U(LCTL), T(DEL), END ) :MACRO( END ));
          break;
        case 1:
          return (record->event.pressed ? MACRO(D(LSFT),T(A),T(S),T(D),U(LSFT),T(F),T(G),T(H), END ) :MACRO( END ));
          break;
      }
    return MACRO_NONE;
};
