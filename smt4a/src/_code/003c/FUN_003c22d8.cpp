#include "common.h"

extern "C" {

typedef struct BtlUnit {
    /* 0x000 */ u8 unk000[0x3B0];
    /* 0x3B0 */ s32 value;
} BtlUnit;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern BtlUnit *FUN_003f0e20(void *state, s32 unit);

/* Script command: adds the second argument to field 0x3B0 of the unit named by the first. */
s32 FUN_003c22d8(void)
{
    s32 unitId = scrGetArg(0);
    s32 amount = scrGetArg(1);
    BtlUnit *unit = FUN_003f0e20(btlGetMainState(), unitId);

    if (unit != NULL) {
        unit->value += amount;
    }
    return 1;
}

} /* extern "C" */
