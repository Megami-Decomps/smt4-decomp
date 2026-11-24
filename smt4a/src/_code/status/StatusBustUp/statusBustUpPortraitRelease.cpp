/* NON_MATCHING: the reference counts are decremented and reread as in the matched IV twin; only the saved registers are permuted (retail: g_statusBustUpResources r6, zero r7, &g_aocSystem r8, table 15 r9). */
#include "status/StatusBustUp.h"
#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/NkmEnemyLookup.h"
extern "C" {
extern StatusBustUpResources g_statusBustUpResources;
extern void *g_aocSystem;
s32 gameFlagIsSet(u32 flag);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void packageFileDisableByKindName(void *system, u32 table, u32 node);

/* Releases one portrait reference and unloads its texture when the last user leaves. */
void statusBustUpPortraitRelease(s32 id, s32 resolveRecord)
{
    s32 table = 15;

    if (resolveRecord) {
        if (id < 0) {
            id = gameFlagIsSet(17) ? 0 : 606;
        } else {
            NkmBaseRecordA *record = (NkmBaseRecordA *)nkmBaseGetRecord((u16)id);
            if (record == NULL)
                return;
            NkmEnemyRecordA *alternate = nkmEnemyFindById((u16)id);
            if (!(alternate->level & 0x8000)) {
                id = record->model + 1;
                if (id >= 631)
                    return;
            } else {
                s32 alternateTable = 25;
                id = alternate->battleTextureId;
                if (id >= 154)
                    return;
                --((s8 *)g_statusBustUpResources.workB)[id];
                if (((s8 *)g_statusBustUpResources.workB)[id] > 0)
                    return;
                if (asdTMTexTableNodeIsLoaded(alternateTable, id)) {
                    asdTMTexTableReleaseNode(alternateTable, id);
                    packageFileDisableByKindName(g_aocSystem, alternateTable, id);
                }
                ((s8 *)g_statusBustUpResources.workB)[id] = 0;
                return;
            }
        }
    }
    --((s8 *)g_statusBustUpResources.workA)[id];
    if (((s8 *)g_statusBustUpResources.workA)[id] > 0)
        return;
    if (asdTMTexTableNodeIsLoaded(table, id)) {
        asdTMTexTableReleaseNode(table, id);
        packageFileDisableByKindName(g_aocSystem, table, id);
    }
    ((s8 *)g_statusBustUpResources.workA)[id] = 0;
}
}
