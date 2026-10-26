/* Returns the signed value at +0x194 of the object's current record, or 0 when there is none or FUN_00293230 reports busy. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code0028_Smt4.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ s16 value;
} Record;

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ Record *record;
} Owner;

extern s32 FUN_00293230(void);

s32 FUN_0028299c(Owner *owner)
{
    s32 result = (s32)owner->record;

    if (result != 0) {
        btlGetMainState();
        result = FUN_00293230();
        if (result == 0) {
            result = owner->record->value;
        } else {
            result = 0;
        }
    }
    return result;
}

}
