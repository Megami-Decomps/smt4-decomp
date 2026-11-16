#include "status/StatusBustUp.h"
#include "gamedata/DevilModel.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DevilRecord.h"

extern "C" {
extern StatusBustUpResources DAT_0044e158;
extern AocSystem *g_aocSystem;
DevilModelOverride *dataTable00FindById(u16 id);
void asdTMTexTableLoadEntryAsync(s32 table, s32 entry);
void FUN_002a5ee4(AocSystem *system, s32 table, s32 entry, u32 options);

/* Acquires a bust-up portrait (texture table 0x17) by index, or by demon id: the demon's alternate
 * model in table 0x23 when its override flag is set, else its normal portrait. Counts the users of
 * each portrait and starts loading it on first use. */
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId)
{
    s32 table = 0x17;

    if (byDevilId) {
        if (id >= 0) {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            if (!devil)
                return;
            const DevilModelOverride *override = dataTable00FindById((u16)id);
            if (!(override->flags & 1)) {
                id = devil->model + 1;
                if (id >= 0x266)
                    return;
            } else {
                s32 overrideTable = 0x23;
                id = override->model;
                if (id >= 0x81)
                    return;
                if (((s8 *)DAT_0044e158.workB)[id] <= 0 && !asdTMTexTableNodeIsLoaded(overrideTable, id))
                    asdTMTexTableLoadEntryAsync(overrideTable, id);
                ++((s8 *)DAT_0044e158.workB)[id];
                return;
            }
        } else {
            id = 0;
        }
    }
    if (((s8 *)DAT_0044e158.workA)[id] <= 0 && !asdTMTexTableNodeIsLoaded(table, id)) {
        if (aocRunByName(reinterpret_cast<u32>(g_aocSystem), table, id, 1))
            FUN_002a5ee4(g_aocSystem, table, id, 0x10000);
        else
            asdTMTexTableLoadEntryAsync(table, id);
    }
    ++((s8 *)DAT_0044e158.workA)[id];
}
}
