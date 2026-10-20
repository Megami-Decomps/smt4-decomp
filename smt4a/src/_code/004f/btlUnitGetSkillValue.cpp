#include "common.h"

extern "C" {

typedef struct SkillData {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ s16 value;
} SkillData;

typedef struct BtlUnitRecord {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ SkillData *skill;
} BtlUnitRecord;

extern void *btlGetMainState(void);
extern int FUN_003e8430(void *mainState);

/* The unit's current skill value, or 0 when it has no skill or the battle check fails. */
int btlUnitGetSkillValue(BtlUnitRecord *unit)
{
    if (unit->skill == NULL) {
        return 0;
    }
    if (FUN_003e8430(btlGetMainState()) != 0) {
        return 0;
    }
    return unit->skill->value;
}

} /* extern "C" */
