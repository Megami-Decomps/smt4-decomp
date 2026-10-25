/* NON_MATCHING: Battle-entry ID reloads, pointer registers, and multiplier-load scheduling differ. */
#include "common.h"
#include "battle/btlMain.h"
#include <stddef.h>

/* No canonical IV listed-entry layout is identified by this caller. */
struct BattleEntry;

extern "C" {
BtlMainState *btlGetMainState(void);
BattleEntry *btlMainFindEntryByListedId(BtlMainState *, u32);
void FUN_00247478(void *, BtlMainState *, BattleEntry *);
u32 FUN_00246134(u32, u32, s32, u32);
void selectionCopySupportedValue(u32, u32 *);
s32 btlEntryHasSkillCategory(BattleEntry *, u32);
f32 battleGetPassiveAffinityMultiplier(u32, u32);

f32 FUN_003bd1d8(u32 listedId, u32 request)
{
    /* Caller-owned output capacity, not a recovered record boundary.
     * Retail reserves 36 bytes starting at sp+4. */
    struct QueryStorageIV {
        u16 unknown00;
        u16 entryId;
        s16 category;
        u8 remainingCapacity[30];
    };
    typedef char QueryStorageIVCheck[
        sizeof(QueryStorageIV) == 36 &&
        offsetof(QueryStorageIV, entryId) == 2 &&
        offsetof(QueryStorageIV, category) == 4 &&
        offsetof(QueryStorageIV, remainingCapacity) == 6 ? 1 : -1];

    /* The accessed word is beyond canonical BtlMainState's recovered end
     * (0x1E9C). This local view does not extend the canonical type. */
    struct MinimumPercentViewIV {
        u8 prefix[0x48B8];
        u32 minimumPercentApplied;
    };
    typedef char MinimumPercentViewIVCheck[
        offsetof(MinimumPercentViewIV, minimumPercentApplied) == 0x48B8 &&
        sizeof(MinimumPercentViewIV) == 0x48BC ? 1 : -1];

    BtlMainState *mainState = btlGetMainState();
    BattleEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    QueryStorageIV query;
    FUN_00247478(&query, btlGetMainState(), entry);

    if (static_cast<u32>(static_cast<s32>(query.category) - 3) <= 7u)
        return 1.0f;

    const u32 result = FUN_00246134(request, query.entryId,
                                  static_cast<s32>(query.category), 0xFFFFFFFFu);
    u16 percent = static_cast<u16>(result);
    if ((result & 0x60000u) != 0 && percent == 0)
        percent = 100;

    entry = btlMainFindEntryByListedId(mainState, listedId);
    u32 attributes;
    selectionCopySupportedValue(query.entryId, &attributes);
    if (btlEntryHasSkillCategory(entry, attributes & 0xFFu) != 0 && percent < 100) {
        percent = 100;
        reinterpret_cast<MinimumPercentViewIV *>(mainState)->minimumPercentApplied = 1;
    }

    const f32 scale = static_cast<f32>(static_cast<s32>(percent)) * 0.01f;
    return battleGetPassiveAffinityMultiplier(listedId, query.entryId) * scale;
}
}
