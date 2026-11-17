#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SupportUnitRecord.h"
#include "battle/BtlUiGlobal.h"

struct CategoryEntry {
    u8 unk00[0x64];    // 0x00
    s16 value;         // 0x64
};


extern "C" {

extern u64 g_btlStartFlags;  /* 0x570dd0 */

void battleApplyOptionOverrides(BtlMainStateA *state);
PartySlotA *gameGetOptions(void);
SupportUnitRecordA *dataTableGetCategoryEntry(s32 category, u16 entry);
void statusBustUpPortraitAcquire(s16 value, s32 arg);
void FUN_004aa1d0(BtlUiA *uiBlock);

/* Script command: applies the selected option's category entry value, sets the start flags on the battle state and updates the UI block. */
u32 FUN_0038d548(void)
{
    BtlMainStateA *state = btlGetMainState();

    battleApplyOptionOverrides(state);
    const CategoryEntry *category = reinterpret_cast<const CategoryEntry *>(
        dataTableGetCategoryEntry((s16)gameGetOptions()->id, gameGetOptions()->slotIndex));
    statusBustUpPortraitAcquire(category->value + 1, 0);
    state->stateFlags64.bits |= g_btlStartFlags;
    FUN_004aa1d0(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
