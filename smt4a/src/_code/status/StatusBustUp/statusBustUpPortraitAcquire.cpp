/* NON_MATCHING: only r7/r8 are swapped: retail keeps g_statusBustUpResources in r7 and &g_aocSystem in r8 (same pool order). The smt4 twin FUN_002942c4 matches with this shape. */
#include "status/StatusBustUp.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "addon/AocSystemA.h"
#include "gamedata/Table00Lookup.h"

// The portrait ID is past the shared DevilRecordA prefix.  Apocalypse's table
// override flags and model ID also differ from the SMT IV model override layout.
struct PortraitDevilRecordAView {
    DevilRecordA prefix;
    u8 unk40[0x5C];
    u16 portrait;
};
typedef char PortraitRecordAOffsets[offsetof(PortraitDevilRecordAView, portrait) == 0x9C ? 1 : -1];

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
            PortraitDevilRecordAView *devil = (PortraitDevilRecordAView *)devilGetRecord((u16)id);
            if (devil == NULL)
                return;
            Table00RecordA *override = dataTable00FindById((u16)id);
            if (!(override->level & 0x8000)) {
                id = devil->portrait + 1;
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
