#include "shard/Shard0041.h"
#include "gamedata/EntrySortRecord.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 FUN_001bd100(u32 id);
void FUN_004bb6d8(u32 flag, u32 value);

/* Reports a game flag change to FUN_004bb6d8, then sets or clears the flag's bit. */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    PartyBlockB *block = reinterpret_cast<PartyBlockB *>(gameFlagBlockGet());

    FUN_004bb6d8(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->unk00[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->unk00[index] &= keep;
    }
}

/* Clears the selected record's flags 0x500-0x51f. */
static __inline void clearSelectedFlags(void)
{
    u32 flag;

    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Deactivates party record `id` (clears status flag 2, sets 0x1c) and releases its role slots or
 * its selection flags; 0 when it was not active. */
u8 FUN_00417a60(u32 id)
{
    PartyEntryB *entry = &reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[id];
    if (!(entry->flags & 2)) {
        return 0;
    }
    struct RoleSlot { u16 id; u8 unk02[10]; };
    // Role slots are beyond the shared PartyBlockB prefix.
    struct RoleSlotsView { u8 prefix[0x8E4]; RoleSlot slots[4]; };
    PartyBlockB *block = reinterpret_cast<PartyBlockB *>(gameFlagBlockGet());
    entry->flags = (entry->flags & ~2) | 0x1C;
    entry->bits &= ~4;
    if (FUN_001bd100(id)) {
        if (reinterpret_cast<EntrySortRecord *>(FUN_001ad9b4(id))->category == 1) {
            RoleSlotsView *roles = reinterpret_cast<RoleSlotsView *>(block);
            for (s32 index = 0; index < 4; ++index) {
                if (roles->slots[index].id == id) {
                    roles->slots[index].id = 0;
                }
            }
        }
    } else if (reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->unk8E0 == id) {
        block->unk8E0 = 0;
        clearSelectedFlags();
    }
    return 1;
}
}
