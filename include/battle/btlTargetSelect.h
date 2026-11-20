/* battle/btlTargetSelect.c: the battle target selection. */
#ifndef BATTLE_BTLTARGETSELECT_H
#define BATTLE_BTLTARGETSELECT_H

#include "common.h"
#include <stddef.h>

/* A polymorphic UI object: slot 1 of its vtable destroys it. */
typedef struct BtlUiObject {
    /* 0x00 */ void (**vtable)(struct BtlUiObject *self);
} BtlUiObject;

/* The selection's work block: the two UI objects it owns. */
typedef struct BtlTargetSelect {
    /* 0x00 */ BtlUiObject *primary;
    /* 0x04 */ BtlUiObject *secondary;
} BtlTargetSelect;

/* BtlTargetSelectWork.mode: what the two draw tasks ("DrawUpL", "DrawUpR") draw. */
enum {
    BTL_TARGET_SELECT_DRAW_NONE,
    BTL_TARGET_SELECT_DRAW_PANEL,   /* the information panel, `primary` */
    BTL_TARGET_SELECT_DRAW_MARKERS  /* the marker group, `secondary` */
};

/* The work area btlTargetSelectCreate allocates and passes to the selection's calc and draw tasks
 * (only the prefix both games share; the sprite state that follows differs). */
typedef struct BtlTargetSelectWork {
    /* 0x00 */ BtlTargetSelect base;  /* g_btlTargetSelect points here */
    /* 0x08 */ u8 mode;               /* BTL_TARGET_SELECT_DRAW_* */
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u8 unk0C[0x20];        /* the sprite resource parameters (UiResourceParameters) */
} BtlTargetSelectWork;

typedef char BtlTargetSelectWorkLayoutCheck[offsetof(BtlTargetSelectWork, mode) == 8 ? 1 : -1];

struct BtlMainState;
extern "C" void btlTargetSelectCreate(BtlMainState *owner);

#endif
