#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u8 unk000[0x196];
    /* 0x196 */ s16 value;
} Unit;

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ Unit *unit;
} Owner;

int btlScriptUnitIsIncapacitated(void);

/* Returns the current unit's value, or 0 if there is no unit or btlScriptUnitIsIncapacitated reports it unavailable. */
int FUN_00227630(Owner *owner)
{
    if (owner->unit == NULL) {
        return 0;
    }
    reinterpret_cast<int>(btlGetMainState());
    if (btlScriptUnitIsIncapacitated() == 0) {
        return owner->unit->value;
    }
    return 0;
}

} /* extern "C" */
