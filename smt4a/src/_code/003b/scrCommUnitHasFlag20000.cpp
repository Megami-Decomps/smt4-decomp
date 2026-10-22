#include "shard/Shard003B.h"

extern "C" {

typedef struct BtlUnit24 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void *unk24;
} BtlUnit24;

extern BtlUnit24 *btlUnitGet(u32 id);
extern s32 btlUnitCheckAgainstActivePeers(void *p, u32 mask);
extern void scrSetResult(s32 value);
extern u32 g_btlScriptUnit;

/* Script command: result is whether btlUnitCheckAgainstActivePeers accepts the unit's +0x24 object with mask 0x20000. */
u32 scrCommUnitHasFlag20000(void)
{
    BtlUnit24 *unit = btlUnitGet(g_btlScriptUnit);

    scrSetResult(btlUnitCheckAgainstActivePeers(unit->unk24, 0x20000) != 0);
    return 1;
}

} /* extern "C" */
