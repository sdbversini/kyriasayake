#pragma once

#include "keymap.h"
// clang-format off

#define OM_DLR  KC_GRV  // $
#define OM_LDAQ KC_1    // «
#define OM_RDAQ KC_2    // »
#define OM_DQUO KC_3    // "
#define OM_MINS KC_4    // -
#define OM_PLUS KC_5    // +
#define OM_ASTR KC_6    // *
#define OM_SLSH KC_7    // /
#define OM_EQL  KC_8    // =
#define OM_LPRN KC_9    // (
#define OM_RPRN KC_0    // )
#define OM_AT   KC_6    // @
#define OM_HASH KC_EQL  // #

#define OM_AGRV KC_Q    // À
#define OM_J    KC_W    // J
#define OM_O    KC_E    // O
#define OM_EACU KC_R    // É
#define OM_B    KC_T    // B
#define OM_F    KC_Y    // F
#define OM_D    KC_U    // D
#define OM_L    KC_I    // L
#define OM_QUOT KC_O    // '
#define OM_Q    KC_P    // Q
#define OM_X    KC_LBRC // X
#define OM_CCED KC_RBRC // Ç

#define OM_A    KC_A    // A
#define OM_I    KC_S    // I
#define OM_E    KC_D    // E
#define OM_U    KC_F    // U
#define OM_COMM KC_G    // ,
#define OM_P    KC_H    // P
#define OM_T    KC_J    // T
#define OM_S    KC_K    // S
#define OM_R    KC_L    // R
#define OM_N    KC_SCLN // N
#define OM_DCIR KC_QUOT // ^ (dead)
#define OM_Z    KC_BSLS // Z

#define OM_ECIR KC_NUBS // Ê
#define OM_K    KC_Z    // K
#define OM_Y    KC_X    // Y
#define OM_EGRV KC_C    // È
#define OM_DOT  KC_V    // .
#define OM_W    KC_B    // W
#define OM_G    KC_N    // G
#define OM_C    KC_M    // C
#define OM_M    KC_COMM // M
#define OM_H    KC_DOT  // H
#define OM_V    KC_SLSH // V

#define OM_EURO S(OM_DLR)  // €
#define OM_1    S(OM_LDAQ) // 1
#define OM_2    S(OM_RDAQ) // 2
#define OM_3    S(OM_DQUO) // 3
#define OM_4    S(OM_MINS) // 4
#define OM_5    S(OM_PLUS) // 5
#define OM_6    S(OM_ASTR) // 6
#define OM_7    S(OM_SLSH) // 7
#define OM_8    S(OM_EQL)  // 8
#define OM_9    S(OM_LPRN) // 9
#define OM_0    S(OM_RPRN) // 0
#define OM_UNDS S(OM_AT)   // _
#define OM_PERC S(OM_HASH) // %

#define OM_QUES S(OM_QUOT) // ?

#define OM_SCLN S(OM_COMM) // ;
#define OM_EXLM S(OM_DCIR) // !

#define OM_COLN S(OM_DOT)  // :

#define OM_NNBS S(KC_SPC)  //   (narrow non-breaking space)

#define OM_CURR ALGR(OM_DLR)  // ¤ (dead)
#define OM_LDQU ALGR(OM_LDAQ) // “
#define OM_RDQU ALGR(OM_RDAQ) // ”
#define OM_DLQU ALGR(OM_DQUO) // „
#define OM_NBH  ALGR(OM_MINS) // ‑ NON BREAKING HYPHEN
#define OM_PLMN ALGR(OM_PLUS) // ±
#define OM_MUL  ALGR(OM_ASTR) // ×
#define OM_BSLS ALGR(OM_SLASH)// (backslash)
#define OM_NEQL ALGR(OM_EQL)  // ≠
#define OM_LBRC ALGR(OM_LPRN) // [
#define OM_RBRC ALGR(OM_RPRN) // ]
#define OM_MMNS ALGR(OM_AT)   // −
#define OM_DEG  ALGR(OM_HASH) // °

#define OM_LABK ALGR(OM_AGRV) // <
#define OM_RABK ALGR(OM_J)    // >
#define OM_OE   ALGR(OM_O)    // œ
#define OM_ACUT ALGR(OM_EACU) // ´ (dead)
#define OM_EMD  ALGR(OM_B)    // — EM DASH
#define OM_END  ALGR(OM_F)    // – EN DASH
#define OM_LCBR ALGR(OM_D)    // {
#define OM_RCBR ALGR(OM_L)    // }
#define OM_IQUE ALGR(OM_QUOT) // ¿
#define OM_DNGA ALGR(OM_Q)    // ° (dead)
#define OM_PIPE ALGR(OM_X)    // |
#define OM_WTRA ALGR(OM_CCED) // ➼ wedge tailed rightwards arrow

#define OM_AE   ALGR(OM_A)    // æ
#define OM_DIAE ALGR(OM_I)    // ¨ (dead)
#define OM_EXIN ALGR(OM_E)    // exp / ind
#define OM_UGRV ALGR(OM_U)    // ù
#define OM_RSQU ALGR(OM_COMM) // ’
#define OM_GRV  ALGR(OM_P)    // `
#define OM_AMPR ALGR(OM_T)    // &
#define OM_SCI  ALGR(OM_S)    // SCIENCE (dead)
#define OM_LAT  ALGR(OM_R)    // latin (dead)
#define OM_DTIL ALGR(OM_N)    // ~ (dead)
#define OM_IEXL ALGR(OM_DCIR) // ¡
#define OM_STTH ALGR(OM_Z)    // strikethrough (dead)

// ø
#define OM_DDOT ALGR(OM_Y)    //  ̇ ̇ (dead)
#define OM_DGRV ALGR(OM_EGRV) //  òȍ (dead, the thing on top)
#define OM_ELLP ALGR(OM_DOT)  // …
#define OM_BLLT ALGR(OM_W)    // •
#define OM_DGRK ALGR(OM_G)    // µ (dead Greek key)
#define OM_VIRG ALGR(OM_C)    //  ̦ virgule (dead)
#define OM_MACR ALGR(OM_M)    // macron (dead)
#define OM_BREV ALGR(OM_M)   // brève (dead)
#define OM_CARO ALGR(OM_V)    // caron (dead)

#define OM_NBSP ALGR(KC_SPC)  //   (non-breaking space)

#define OM_COPY S(ALGR(OM_DLR))  // ©
#define OM_QRTR S(ALGR(OM_LDAQ)) // ¼
#define OM_HALF S(ALGR(OM_RDAQ)) // ½
#define OM_TQTR S(ALGR(OM_DQUO)) // ¾
#define OM_OTHD S(ALGR(OM_MINS)) // ⅓
#define OM_TTHD S(ALGR(OM_PLUS)) // ⅔
#define OM_TDSA S(ALGR(OM_ASTR)) // ✻
#define OM_DIV  S(ALGR(OM_SLSH)) // ÷
#define OM_AEQL S(ALGR(OM_EQL))  // ≈
#define OM_PRIM S(ALGR(OM_LPRN)) // ′
#define OM_DPRM S(ALGR(OM_RPRN)) // ″
#define OM_FORD S(ALGR(OM_AT))   // ª
#define OM_MORD S(ALGR(OM_HASH)) // º

#define OM_LEQL S(ALGR(OM_AGRV)) // ≤
#define OM_GEQL S(ALGR(OM_J))    // ≥
#define OM_COE  S(ALGR(OM_O))    // Œ (capital)
#define OM_SECT S(ALGR(OM_EACU)) // §
#define OM_PARA S(ALGR(OM_B))    // ¶
#define OM_BFPS S(ALGR(OM_F))    // ✦
#define OM_BSS  S(ALGR(OM_D))    // ♠
#define OM_RHS  S(ALGR(OM_L))    // ♥
#define OM_HDS  S(ALGR(OM_QUOT)) // ♦
#define OM_BLS  S(ALGR(OM_Q))    // ♣
#define OM_RQM  S(ALGR(OM_X))    // ⸮
#define OM_RCPY S(ALGR(OM_CCED)) // 🄯

#define OM_CAE  S(ALGR(OM_A))    // Æ (capital)
#define OM_LIGA S(ALGR(OM_I))    // Ligature (dead)
#define OM_MLGS S(ALGR(OM_E))    // MODIFIER LETTER GLOTTAL STOP (dead)
#define OM_CUGR S(ALGR(OM_U))    // Ù (capital)
#define OM_CHKM S(ALGR(OM_COMM)) // ✓
#define OM_STAR S(ALGR(OM_P))    // ★
#define OM_LARR S(ALGR(OM_T))    // ⬅
#define OM_DARR S(ALGR(OM_S))    // ⬇
#define OM_UARR S(ALGR(OM_R))    // ⬆
#define OM_RARR S(ALGR(OM_N))    // ➡
#define OM_RAWH S(ALGR(OM_DCIR)) // ↪
#define OM_LAWH S(ALGR(OM_Z))    // ↩

#define OM_HELM S(ALGR(OM_K))    // ⎈
#define OM_OPT  S(ALGR(OM_Y)     // ⌥
#define OM_CMD  S(ALGR(OM_EGRV)  // ⌘
#define OM_MDOT S(ALGR(OM_DOT)   // ·
#define OM_BALX S(ALGR(OM_W)     // ✗ (ballot x)
#define OM_FBSA S(ALGR(OM_G))    // ✣
#define OM_DAG  S(ALGR(OM_C))    // †
#define OM_DDAG S(ALGR(OM_M))    // ‡
#define OM_REG  S(ALGR(OM_M))    // ®
#define OM_TM   S(ALGR(OM_V))    // ™

#define OM_SH   S(ALGR(KC_SPC))  // ­ (soft hyphen)
