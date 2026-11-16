/* NON_MATCHING: control flow and constants now match; the saved registers are permuted (retail: zero r7, &g_aocSystem r8, DAT_00588fd8 r6, table 15 r9). */
#include "status/StatusBustUp.h"
#include "gamedata/DevilRecordA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/Table00Lookup.h"
extern "C" {
extern StatusBustUpResources DAT_00588fd8;
extern void *g_aocSystem;
s32 gameFlagIsSet(u32 flag);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void FUN_001b2d54(void *system, u32 table, u32 node);

// Release one portrait reference and unload its texture when the last user leaves.
void statusBustUpPortraitRelease(s32 id, s32 resolveRecord)
{
    s32 table = 15;

    if (resolveRecord) {
        if (id < 0) {
            id = gameFlagIsSet(17) ? 0 : 606;
        } else {
            DevilTableRecordA *record = (DevilTableRecordA *)devilGetRecord((u16)id);
            if (record == NULL)
                return;
            // The alternate portrait metadata extends the shared table-zero view.
            struct AlternatePortraitView {
                u16 id;
                u16 flags;
                u8 prefix[0x88];
                s16 portrait;
            };
            typedef char AlternatePortraitOffsets[offsetof(AlternatePortraitView, portrait) == 0x8C ? 1 : -1];
            AlternatePortraitView *alternate = (AlternatePortraitView *)dataTable00FindById((u16)id);
            if (!(alternate->flags & 0x8000)) {
                id = record->unk9C + 1;
                if (id >= 631)
                    return;
            } else {
                s32 alternateTable = 25;
                id = alternate->portrait;
                if (id >= 154)
                    return;
                s8 *references = (s8 *)DAT_00588fd8.workB;
                if (--references[id] > 0)
                    return;
                if (asdTMTexTableNodeIsLoaded(alternateTable, id)) {
                    asdTMTexTableReleaseNode(alternateTable, id);
                    FUN_001b2d54(g_aocSystem, alternateTable, id);
                }
                ((s8 *)DAT_00588fd8.workB)[id] = 0;
                return;
            }
        }
    }
    s8 *references = (s8 *)DAT_00588fd8.workA;
    if (--references[id] > 0)
        return;
    if (asdTMTexTableNodeIsLoaded(table, id)) {
        asdTMTexTableReleaseNode(table, id);
        FUN_001b2d54(g_aocSystem, table, id);
    }
    ((s8 *)DAT_00588fd8.workA)[id] = 0;
}
}
