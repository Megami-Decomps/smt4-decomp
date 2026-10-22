#include "shard/Shard0037.h"

extern "C" {

typedef struct BtlUnit20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 *unk20;
} BtlUnit20;

extern BtlUnit20 *btlUnitGet(u32 id);
extern s32 FUN_003248e4(u32 *p);
extern void scrSetResult(s32 value);
extern u32 g_btlScriptUnit;

/* Script command: result is whether FUN_003248e4 accepts the battle unit's +0x20 value. */
u32 scrCommUnitCheck(void)
{
    BtlUnit20 *unit = btlUnitGet(g_btlScriptUnit);

    if (FUN_003248e4(unit->unk20) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
