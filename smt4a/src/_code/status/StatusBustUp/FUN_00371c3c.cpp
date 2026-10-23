/* NON_MATCHING: texture table constants are immediates instead of saved registers, and the normal/alternate resource blocks have different placement. */
#include "status/StatusBustUp.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "addon/aocMain.h"

// The portrait ID is past the shared DevilRecordA prefix.  Apocalypse's table
// override flags and model ID also differ from the SMT IV model override layout.
struct PortraitDevilRecordAView {
    DevilRecordA prefix;
    u8 unk40[0x5C];
    u16 portrait;
};
struct PortraitOverrideAView {
    u16 id;
    u16 flags;
    u8 unk04[0x88];
    s16 portrait;
};
typedef char PortraitRecordAOffsets[offsetof(PortraitDevilRecordAView, portrait) == 0x9C &&
    offsetof(PortraitOverrideAView, portrait) == 0x8C ? 1 : -1];

extern "C" {
extern StatusBustUpResources DAT_00588fd8;
extern AocSystem *g_aocSystem;
s32 gameFlagIsSet(u32 flag);
PortraitOverrideAView *dataTable00FindById(u16 id);
s32 asdTMTexTableNodeIsLoaded(s32 table, s32 entry);
s32 aocRunByName(AocSystem *system, s32 table, s32 entry, s32 mode);
void FUN_001a6568(AocSystem *system, s32 table, s32 entry, u32 options);
void asdTMTexLoadMainHeap(s32 table, s32 entry);

void FUN_00371c3c(s32 id, s32 byDevilId)
{
    if (byDevilId) {
        if (id < 0) {
            id = gameFlagIsSet(17) ? 0 : 606;
        } else {
            PortraitDevilRecordAView *devil = (PortraitDevilRecordAView *)FUN_00184310((u16)id);
            if (devil == NULL)
                return;
            PortraitOverrideAView *override = dataTable00FindById((u16)id);
            if (override->flags & 0x8000) {
                id = override->portrait;
                if (id < 154) {
                    if (((s8 *)DAT_00588fd8.workB)[id] <= 0 &&
                        !asdTMTexTableNodeIsLoaded(25, id)) {
                        if (aocRunByName(g_aocSystem, 25, id, 1))
                            FUN_001a6568(g_aocSystem, 25, id, 0x10000);
                        else
                            asdTMTexLoadMainHeap(25, id);
                    }
                    ++((s8 *)DAT_00588fd8.workB)[id];
                }
                return;
            }
            id = devil->portrait + 1;
            if (id >= 631)
                return;
        }
    }
    if (((s8 *)DAT_00588fd8.workA)[id] <= 0 &&
        !asdTMTexTableNodeIsLoaded(15, id)) {
        if (aocRunByName(g_aocSystem, 15, id, 1))
            FUN_001a6568(g_aocSystem, 15, id, 0x10000);
        else
            asdTMTexLoadMainHeap(15, id);
    }
    ++((s8 *)DAT_00588fd8.workA)[id];
}
}
