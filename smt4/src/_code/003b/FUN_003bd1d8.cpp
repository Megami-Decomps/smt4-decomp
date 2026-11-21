/* NON_MATCHING: register allocation only: retail keeps the second entry lookup in r2 across selectionCopySupportedValue
 * (a multifile build, which takes it to 30 lines), and gives listedId/request/mainState/entryId r5/r8/r6/r7. */
#include "common.h"
#include "battle/btlMain.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"


extern "C" {
void btlEntryBuildSummary(void *, BtlMainState *, BtlEntry *);
u32 FUN_00246134(u32, u32, s32, u32);
void selectionCopySupportedValue(u32, u32 *);
s32 btlEntryHasSkillCategory(BtlEntry *, u32);
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

    f32 scale = 1.0f;
    BtlMainState *mainState = btlGetMainState();
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    QueryStorageIV query;
    btlEntryBuildSummary(&query, btlGetMainState(), entry);
    u32 entryId = query.entryId;

    if ((u32)(query.category - 3) <= 7u)
        return scale;

    u32 result = FUN_00246134(request, entryId, query.category, 0xFFFFFFFFu);
    s32 percent = (u16)result;
    if ((result & 0x60000u) != 0 && percent == 0)
        percent = 100;

    entry = btlMainFindEntryByListedId(mainState, listedId);
    u32 attributes;
    selectionCopySupportedValue(entryId, &attributes);
    if (btlEntryHasSkillCategory(entry, attributes & 0xFFu) != 0 && percent < 100) {
        percent = 100;
        mainState->affinity.minimumPercentApplied = 1;
    }

    scale = (f32)percent * 0.01f;
    return battleGetPassiveAffinityMultiplier(listedId, entryId) * scale;
}
}
