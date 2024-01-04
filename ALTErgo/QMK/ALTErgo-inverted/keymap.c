#include QMK_KEYBOARD_H
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMB,
};

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5                           ,KC_0    ,KC_9    ,KC_8    ,KC_7    ,KC_6    ,SYM_L   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐             ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,SYM_L                 ,KC_MINS ,KC_P    ,KC_O    ,KC_I    ,KC_U    ,KC_Y    ,KC_RBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_LBRC               ,KC_EQL  ,KC_SCLN ,KC_L    ,KC_K    ,KC_J    ,KC_H    ,KC_END  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_VOLU ,KC_VOLD      ,KC_RSFT ,KC_QUOT ,KC_SLSH ,KC_DOT  ,KC_COMM ,KC_M    ,KC_N    ,KC_HOME ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────┬───┼───┬────┼────────┼────────┤
     KC_LGUI ,KC_PPLS ,KC_PMNS ,KC_LALT      ,KC_BSPC     ,KC_LCTL ,KC_DEL       ,KC_RGHT ,KC_UP   ,KC_DOWN ,KC_LEFT      ,KC_SPC      ,KC_RALT ,KC_ENT
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘    └────────┴────────┴────────┴────────┘    └───────┘    └────────┴────────┘
  ),

     [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5                          ,KC_F10  ,KC_F9   ,KC_F8   ,KC_F7   ,KC_F6   ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐             ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,_______               ,XXXXXXX ,KC_PMNS ,KC_9    ,KC_8    ,KC_7    ,KC_PSLS ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_HASH ,KC_DLR  ,KC_LBRC ,KC_RBRC ,KC_GRV  ,_______               ,XXXXXXX ,KC_PPLS ,KC_6    ,KC_5    ,KC_4    ,KC_PAST ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_PERC ,KC_CIRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ ,_______      ,XXXXXXX ,XXXXXXX ,KC_ENT  ,KC_3    ,KC_2    ,KC_1    ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────┬───┼───┬────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______      ,_______     ,_______ ,_______      ,XXXXXXX ,KC_ENT  ,KC_DOT  ,KC_0         ,KC_0        ,_______ ,_______
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘    └────────┴────────┴────────┴────────┘    └───────┘    └────────┴────────┘
  ),
};
