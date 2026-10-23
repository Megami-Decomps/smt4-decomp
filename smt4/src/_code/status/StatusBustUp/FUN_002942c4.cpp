/* NON_MATCHING: texture-table constants remain immediates instead of saved registers, and alternate/default resource exits are laid out differently. */
#include "status/StatusBustUp.h"
#include "gamedata/DevilModel.h"
#include "addon/aocMain.h"

extern "C" {
extern StatusBustUpResources DAT_0044e158;
extern AocSystem *g_aocSystem;
DevilModelOverride *dataTable00FindById(u16 id);
s32 asdTMTexTableNodeIsLoaded(s32 table, s32 entry);
void asdTMTexTableLoadEntryAsync(s32 table, s32 entry);
s32 aocRunByName(AocSystem *system, s32 table, s32 entry, s32 mode);
void FUN_002a5ee4(AocSystem *system, s32 table, s32 entry, u32 options);

/* Acquire a portrait by table index or resolve a demon's normal/alternate portrait. */
void FUN_002942c4(s32 id, s32 byDevilId)
{
    if (byDevilId) {
        if (id >= 0) {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            if (!devil)
                return;
            const DevilModelOverride *override = dataTable00FindById((u16)id);
            if (override->flags & 1) {
                id = override->model;
                if (id < 0x81) {
                    if (((s8 *)DAT_0044e158.workB)[id] <= 0 &&
                        !asdTMTexTableNodeIsLoaded(0x23, id))
                        asdTMTexTableLoadEntryAsync(0x23, id);
                    ++((s8 *)DAT_0044e158.workB)[id];
                }
                return;
            }
            id = devil->model + 1;
            if (id >= 0x266)
                return;
        } else {
            id = 0;
        }
    }
    if (((s8 *)DAT_0044e158.workA)[id] <= 0 &&
        !asdTMTexTableNodeIsLoaded(0x17, id)) {
        if (aocRunByName(g_aocSystem, 0x17, id, 1))
            FUN_002a5ee4(g_aocSystem, 0x17, id, 0x10000);
        else
            asdTMTexTableLoadEntryAsync(0x17, id);
    }
    ++((s8 *)DAT_0044e158.workA)[id];
}
}
