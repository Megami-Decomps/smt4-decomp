/* NON_MATCHING: texture table constants are rematerialized rather than retained in saved registers. */
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
void FUN_0038b3f8(s32 id, s32 resolveRecord)
{
    if (resolveRecord) {
        if (id < 0) {
            id = gameFlagIsSet(17) ? 0 : 606;
        } else {
            DevilTableRecordA *record = (DevilTableRecordA *)FUN_00184310((u16)id);
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
            if (alternate->flags & 0x8000) {
                id = alternate->portrait;
                if (id >= 154)
                    return;
                s8 *references = (s8 *)DAT_00588fd8.workB;
                if (--references[id] > 0)
                    return;
                if (asdTMTexTableNodeIsLoaded(25, id)) {
                    asdTMTexTableReleaseNode(25, id);
                    FUN_001b2d54(g_aocSystem, 25, id);
                }
                ((s8 *)DAT_00588fd8.workB)[id] = 0;
                return;
            }
            id = record->unk9C + 1;
            if (id >= 631)
                return;
        }
    }
    s8 *references = (s8 *)DAT_00588fd8.workA;
    if (--references[id] > 0)
        return;
    if (asdTMTexTableNodeIsLoaded(15, id)) {
        asdTMTexTableReleaseNode(15, id);
        FUN_001b2d54(g_aocSystem, 15, id);
    }
    ((s8 *)DAT_00588fd8.workA)[id] = 0;
}
}
