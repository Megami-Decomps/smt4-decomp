/* battle/btlTargetSelect.c: the battle target selection. */
#ifndef BATTLE_BTLTARGETSELECT_H
#define BATTLE_BTLTARGETSELECT_H

#include "common.h"

/* A polymorphic UI object: slot 1 of its vtable destroys it. */
typedef struct BtlUiObject {
    /* 0x00 */ void (**vtable)(struct BtlUiObject *self);
} BtlUiObject;

/* The selection's work block: the two UI objects it owns. */
typedef struct BtlTargetSelect {
    /* 0x00 */ BtlUiObject *primary;
    /* 0x04 */ BtlUiObject *secondary;
} BtlTargetSelect;

struct BtlMainState;
extern "C" void btlTargetSelectCreate(BtlMainState *owner);

#endif
