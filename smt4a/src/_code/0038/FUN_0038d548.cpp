#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/SupportUnitRecord.h"

struct CategoryEntry {
    u8 unk00[0x64];    // 0x00
    s16 value;         // 0x64
};


extern "C" {

extern u64 g_btlStartFlags;  /* 0x570dd0 */
extern u32 g_btlUiBlock;     /* 0x57a9c8 */

void FUN_003e87a8(BtlMainStateA *state);
PartySlotA *gameGetOptions(void);
SupportUnitRecordA *dataTableGetCategoryEntry(s32 category, u16 entry);
void FUN_00371c3c(s16 value, s32 arg);
void FUN_004aa1d0(u32 uiBlock);

/* Script command: applies the selected option's category entry value, sets the start flags on the battle state and updates the UI block. */
u32 FUN_0038d548(void)
{
    BtlMainStateA *state = btlGetMainState();

    FUN_003e87a8(state);
    const CategoryEntry *category = reinterpret_cast<const CategoryEntry *>(
        dataTableGetCategoryEntry((s16)gameGetOptions()->id, gameGetOptions()->unk12e));
    FUN_00371c3c(category->value + 1, 0);
    state->stateFlags64.bits |= g_btlStartFlags;
    FUN_004aa1d0(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
