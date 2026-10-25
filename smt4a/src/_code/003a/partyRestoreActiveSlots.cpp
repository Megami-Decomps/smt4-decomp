/* Preserves valid active-slot ids while rebuilding the party and reactivates those slots. */
#include "common.h"
#include "gamedata/GameFlags.h"

struct ActiveSlotView {
    u8 unk000[0x12C];
    u16 id;
};

extern "C" {
void rt_aeabi_memclr(void *memory, u32 size);
void FUN_003e48dc(s32 id);
void FUN_003e4e4c(u32 mode);
ActiveSlotView *FUN_003e503c(u16 slot);

void *gameDataBlocksGetSaveData(void);
void *saveSlotFindById(u16 id);
u32 FUN_00187168(void *slot);

u32 partyRestoreActiveSlots(void)
{
    struct SavedPartyView {
        u8 unk00000[0x29814];
        u16 ids[12];
    };
    SavedPartyView *saved = (SavedPartyView *)gameDataBlocksGetSaveData();
    rt_aeabi_memclr(saved->ids, sizeof(saved->ids));
    u32 count = 0;
    for (s32 index = 0; index < 12; ++index) {
        ActiveSlotView *slot = FUN_003e503c((u16)index);
        if (slot != NULL && FUN_00187168(slot)) {
            saved->ids[count++] = slot->id;
        }
    }
    FUN_003e4e4c(0);
    for (s32 index = 0; index < 12; ++index) {
        u16 id = saved->ids[index];
        if (id != 0) {
            void *slot = saveSlotFindById(id);
            if (slot != NULL && FUN_00187168(slot)) {
                FUN_003e48dc(id);
            }
        }
    }
    gameFlagSetValue(0x4F8, 1, 1);
    return 1;
}
}
