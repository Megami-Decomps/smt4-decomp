/* Returns the signed value at +0x196 of the owner's current record, or 0 when there is none or the check reports busy. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x196];
    /* 0x196 */ s16 value;
} Record;

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ Record *record;
} Owner;

extern void btlGetMainState(void);
extern s32 btlScriptUnitHasFlags(void);

s32 FUN_004f5a40(Owner *owner)
{
    s32 result = (s32)owner->record;

    if (result != 0) {
        btlGetMainState();
        result = btlScriptUnitHasFlags();
        if (result == 0) {
            result = owner->record->value;
        } else {
            result = 0;
        }
    }
    return result;
}

}
