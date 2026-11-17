/* NON_MATCHING: only r7/r8 are swapped: retail keeps g_statusBustUpResources in r7 and &g_aocSystem in r8 (same pool order). The smt4 twin FUN_002942c4 matches with this shape. */
#include "status/StatusBustUp.h"
#include "gamedata/NkmBaseRecordA.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "addon/AocSystemA.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
extern StatusBustUpResources g_statusBustUpResources;
s32 gameFlagIsSet(u32 flag);
s32 aocRunByName(AocSystemA *system, s32 table, s32 entry, s32 mode);
void texTableRequestNamedTextureLoad(AocSystemA *system, s32 table, s32 entry, u32 options);

void statusBustUpPortraitAcquire(s32 id, s32 byDevilId)
{
    s32 table = 15;

    if (byDevilId) {
        if (id < 0) {
            id = gameFlagIsSet(17) ? 0 : 606;
        } else {
            NkmBaseRecordA *devil = nkmBaseGetRecord((u16)id);
            if (devil == NULL)
                return;
            NkmEnemyRecordA *override = nkmEnemyFindById((u16)id);
            if (!(override->level & 0x8000)) {
                id = devil->model + 1;
                if (id >= 631)
                    return;
            } else {
                s32 overrideTable = 25;
                id = override->battleTextureId;
                if (id >= 154)
                    return;
                if (((s8 *)g_statusBustUpResources.workB)[id] <= 0 && !asdTMTexTableNodeIsLoaded(overrideTable, id)) {
                    if (aocRunByName(g_aocSystem, overrideTable, id, 1))
                        texTableRequestNamedTextureLoad(g_aocSystem, overrideTable, id, 0x10000);
                    else
                        asdTMTexLoadMainHeap(overrideTable, id);
                }
                ++((s8 *)g_statusBustUpResources.workB)[id];
                return;
            }
        }
    }
    if (((s8 *)g_statusBustUpResources.workA)[id] <= 0 && !asdTMTexTableNodeIsLoaded(table, id)) {
        if (aocRunByName(g_aocSystem, table, id, 1))
            texTableRequestNamedTextureLoad(g_aocSystem, table, id, 0x10000);
        else
            asdTMTexLoadMainHeap(table, id);
    }
    ++((s8 *)g_statusBustUpResources.workA)[id];
}
}
