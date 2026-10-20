#include "shard/Shard003B.h"

extern "C" {

typedef struct BtlUnit24 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void *unk24;
} BtlUnit24;

extern BtlUnit24 *btlUnitGet(u32 id);
extern s32 FUN_003389d0(void *p, u32 mask);
extern void scrSetResult(s32 value);

/* Script command: result is whether FUN_003389d0 accepts the unit's +0x24 object with mask 0x40000. */
u32 scrCommUnitHasFlag40000(u32 *unitId)
{
    BtlUnit24 *unit = btlUnitGet(*unitId);

    scrSetResult(FUN_003389d0(unit->unk24, 0x40000) != 0);
    return 1;
}

} /* extern "C" */
