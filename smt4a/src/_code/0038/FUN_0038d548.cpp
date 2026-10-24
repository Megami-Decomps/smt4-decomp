/* NON_MATCHING: only r4/r5 swapped (retail keeps the battle state in r4, the entry in r5) */
#include "common.h"

struct GameOptionsA {
    u8 unk000[0x12C];  // 0x000
    s16 category;      // 0x12C
    u16 entry;         // 0x12E
};

struct CategoryEntry {
    u8 unk00[0x64];    // 0x00
    s16 value;         // 0x64
};

struct BtlStateA {
    u8 unk0000[0x45A0];  // 0x0000
    u64 flags;           // 0x45A0
};

extern "C" {

extern u64 g_btlStartFlags;  /* 0x570dd0 */
extern u32 g_btlUiBlock;     /* 0x57a9c8 */

BtlStateA *btlGetMainState(void);
void FUN_003e87a8(void);
GameOptionsA *gameGetOptions(void);
CategoryEntry *dataTableGetCategoryEntry(s32 category, u16 entry);
void FUN_00371c3c(s16 value, s32 arg);
void FUN_004aa1d0(u32 uiBlock);

/* Script command: applies the selected option's category entry value, sets the start flags on the battle state and updates the UI block. */
u32 FUN_0038d548(void)
{
    BtlStateA *state = btlGetMainState();

    FUN_003e87a8();
    CategoryEntry *category = dataTableGetCategoryEntry(gameGetOptions()->category, gameGetOptions()->entry);
    FUN_00371c3c(category->value + 1, 0);
    state->flags |= g_btlStartFlags;
    FUN_004aa1d0(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
