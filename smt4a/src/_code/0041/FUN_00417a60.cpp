/* NON_MATCHING: flag-byte update registers and the packed flag-clearing loop use different instructions and saved registers. */
#include "shard/Shard0041.h"
#include "gamedata/EntrySortRecord.h"

extern "C" {
PartyBlockB *gameFlagBlockGet();
u32 FUN_001bd100(u32 id);
EntrySortRecord *FUN_001ad9b4(u32 id);
void FUN_004bb6d8(u32 flag, u32 value);

// Deactivate a party record and remove its selected-role references.
u8 FUN_00417a60(u32 id)
{
    struct RoleSlot { u16 id; u8 unk02[10]; };
    // Role slots are beyond the shared PartyBlockB prefix.
    struct RoleSlotsView { u8 prefix[0x8E4]; RoleSlot slots[4]; };
    PartyEntryB *entry = &gameFlagBlockGet()->e[id];
    u8 changed = entry->flags & 2;
    if (changed != 0) {
        PartyBlockB *block = gameFlagBlockGet();
        entry->bits &= ~4;
        entry->flags = (entry->flags & ~2) | 0x1C;
        if (FUN_001bd100(id)) {
            if (FUN_001ad9b4(id)->category == 1) {
                RoleSlotsView *roles = reinterpret_cast<RoleSlotsView *>(block);
                for (s32 index = 0; index < 4; ++index) {
                    if (roles->slots[index].id == id)
                        roles->slots[index].id = 0;
                }
            }
        } else if (gameFlagBlockGet()->unk8E0 == id) {
            block->unk8E0 = 0;
            for (u32 flag = 0x500; flag < 0x520; ++flag) {
                PartyBlockB *flags = gameFlagBlockGet();
                FUN_004bb6d8(flag, 0);
                flags->unk00[flag >> 3] &= ~(1 << (flag & 7));
            }
        }
        changed = 1;
    }
    return changed;
}
}
