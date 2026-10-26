/* NON_MATCHING: flag-byte update registers and the packed flag-clearing loop use different instructions and saved registers. */
#include "shard/Shard0041.h"
#include "gamedata/EntrySortRecord.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 FUN_001bd100(u32 id);
void FUN_004bb6d8(u32 flag, u32 value);

// Deactivate a party record and remove its selected-role references.
u8 FUN_00417a60(u32 id)
{
    struct RoleSlot { u16 id; u8 unk02[10]; };
    // Role slots are beyond the shared PartyBlockB prefix.
    struct RoleSlotsView { u8 prefix[0x8E4]; RoleSlot slots[4]; };
    PartyEntryB *entry = &reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[id];
    u8 changed = entry->flags & 2;
    if (changed != 0) {
        PartyBlockB *block = reinterpret_cast<PartyBlockB *>(gameFlagBlockGet());
        entry->bits &= ~4;
        entry->flags = (entry->flags & ~2) | 0x1C;
        if (FUN_001bd100(id)) {
            if (reinterpret_cast<EntrySortRecord *>(FUN_001ad9b4(id))->category == 1) {
                RoleSlotsView *roles = reinterpret_cast<RoleSlotsView *>(block);
                for (s32 index = 0; index < 4; ++index) {
                    if (roles->slots[index].id == id)
                        roles->slots[index].id = 0;
                }
            }
        } else if (reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->unk8E0 == id) {
            block->unk8E0 = 0;
            for (u32 flag = 0x500; flag < 0x520; ++flag) {
                PartyBlockB *flags = reinterpret_cast<PartyBlockB *>(gameFlagBlockGet());
                FUN_004bb6d8(flag, 0);
                flags->unk00[flag >> 3] &= ~(1 << (flag & 7));
            }
        }
        changed = 1;
    }
    return changed;
}
}
