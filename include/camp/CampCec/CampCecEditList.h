/* camp/CampCec/CampCecEdit.c: constants of the StreetPass edit screen's choice list, shared by both games'
 * edit screens (CampCecEdit in IV, StateAtF4 in Apocalypse). */
#ifndef CAMP_CAMPCEC_CAMPCECEDITLIST_H
#define CAMP_CAMPCEC_CAMPCECEDITLIST_H

/* The screen's touchFlags: what the stylus is on, and the scroll steps that follow from it. */
enum {
    CEC_EDIT_TOUCH_ARROW_UP = 1,
    CEC_EDIT_TOUCH_ARROW_DOWN = 2,
    CEC_EDIT_TOUCH_SCROLL_BAR = 4,
    CEC_EDIT_TOUCH_STEP_UP = 8,
    CEC_EDIT_TOUCH_STEP_DOWN = 0x10
};

/* The choice list shows 11 rows; its sprites are in the edit screen's sprite table. */
enum {
    CEC_EDIT_LIST_ROWS = 11,
    CEC_EDIT_SPRITE_FILE = 0x39,          /* IV */
    CEC_EDIT_SPRITE_FILE_A = 0x2e,        /* Apocalypse */
    CEC_EDIT_SPRITE_SCROLL_BAR = 0x41,
    CEC_EDIT_SPRITE_ARROW_UP = 0x42,
    CEC_EDIT_SPRITE_ARROW_DOWN = 0x43,
    CEC_EDIT_SPRITE_ROW = 0xd1,           /* the first of the 11 row sprites */
    CEC_EDIT_SPRITE_ROW_PLAIN = 0xe0,     /* IV's row sprite, and the one it draws under the stylus */
    CEC_EDIT_SPRITE_ROW_TOUCHED = 0xe1,
    CEC_EDIT_SPRITE_ROW_CURSOR = 0xe6     /* the first of the 11 selected-row sprites */
};

#endif
