#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[5];
    /* 0x5 */ s8 kind;
} DevilRecord;

extern BtlState *btlGetMainState(void);
extern DevilRecord *devilGetRecord(u32 id);
extern s32 scrSetResult(s32 value);

/* Script command: pushes whether any live, non-excluded battle unit is a devil of kind 4. */
u32 scrCommBtlAnyUnitDevilKind4(void)
{
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            if (devilGetRecord(unit->groupId)->kind == 4) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
