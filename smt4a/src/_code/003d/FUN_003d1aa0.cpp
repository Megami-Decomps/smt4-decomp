/* NON_MATCHING: forced-choice byte loads use the full owner base rather than a shared subobject base, shifting final branchnop. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {
const void *dataFindKeyedRecordWithOverrides(u32 id);
s32 gameDataFlagTestBit(u32 id);
s32 FUN_003e4230(u32 id);
s32 FUN_003e44ec(u32 id);
void gameDataSetAreaBit(u32 id, u32 enabled);
void FUN_003e41f8(u32 id, u32 enabled);
void FUN_00203b40(void *controller, u32 count, u32 visibleRows, u32 enabled, u32 wrap, u32 reset);
void gauntletAppSortMenuEntries(void);

// Build available apps (or the forced single choice), then initialize and sort the menu.
void FUN_003d1aa0(GauntletAppMenuWork *menu)
{
    menu->list.count = 0;
    if (menu->list.forceFirst) {
        menu->list.entries[0] = 0x2E;
        menu->list.count = 1;
    } else if (menu->list.forceSecond) {
        menu->list.entries[0] = 0x18;
        menu->list.count = 1;
    } else if (menu->list.forceThird) {
        menu->list.entries[0] = 0x76;
        menu->list.count = 1;
    } else {
        for (u32 id = 1; id < 0x8D; ++id) {
            if (dataFindKeyedRecordWithOverrides(id) != NULL &&
                (gameDataFlagTestBit(id) || FUN_003e4230(id) != 2)) {
                if (!FUN_003e44ec(id)) {
                    gameDataSetAreaBit(id, 1);
                    FUN_003e41f8(id, 1);
                }
                menu->list.entries[menu->list.count] = id;
                ++menu->list.count;
            }
        }
    }
    FUN_00203b40(menu->list.controller, menu->list.count, 10, 1, 1, 1);
    gauntletAppSortMenuEntries();
}
}
