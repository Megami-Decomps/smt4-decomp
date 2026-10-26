/* NON_MATCHING: readable rewrite compiles; app id arguments inferred; retail keeps the entry-table base in a register across the app loops and orders the special-case checks differently */
#include "common.h"
#include "util/FUN_0029efa8.h"

// App list menu: only the members the state change touches.
struct AppMenu {
    u8 unk00[8];
    u32 state;                  // 0x08
    u8 unk0c[4];
    u8 list[0x74 - 0x10];       // 0x10: scrolling list
    u32 entries[0x8d];          // 0x74: shown app ids
    s32 entryCount;             // 0x2a8
    u8 unk2ac[8];
    u8 showSpecialA;            // 0x2b4
    u8 showSpecialB;            // 0x2b5
    u8 unk2b6;
    u8 showSpecialC;            // 0x2b7
    u8 unk2b8[0x2d8 - 0x2b8];
    u8 timer[0x47c - 0x2d8];    // 0x2d8
    u8 cursorSprite[0x494 - 0x47c]; // 0x47c
    u16 cursorWidth;            // 0x494
    u8 unk496[0x524 - 0x496];
    u16 touchRegions;           // 0x524
};

extern "C" {

void gauntletAppSortMenuEntries(void);
s32 appCheckPurchaseRequirements(u32 app);
void FUN_00295eb0(void* sprite, s32 a, s32 b);
void FUN_0029f848(void* list, s32 count, s32 a, s32 b, s32 c, s32 d);
s32 appCostRecordFindById(u32 app);
void ifTouchRegionRemove(s32 index);
void timerStart(void* timer, s32 a, s32 b);
void spriteStartAnimationByIndex(void* sprite, s32 index);
s32 flagBitIsSet(u32 bit);

static void addEntry(AppMenu* menu, u32 app)
{
    menu->entries[menu->entryCount] = app;
    menu->entryCount++;
}

// Switches the app menu to `newState` and rebuilds its list for that state; returns 0 when
// an empty list sent it back to the previous state.
u32 FUN_00248738(AppMenu* menu, u32 newState)
{
    switch (newState) {
    case 0:
        timerStart(menu->timer, 0, 0);
        menu->entryCount = 0;
        if (menu->showSpecialA != 0) {
            menu->entries[0] = 0x2e;
            menu->entryCount = 1;
        } else if (menu->showSpecialB != 0) {
            menu->entries[0] = 0x18;
            menu->entryCount = 1;
        } else if (menu->showSpecialC != 0) {
            menu->entries[0] = 0x76;
            menu->entryCount = 1;
        } else {
            for (u32 app = 1; app < 0x8d; app++) {
                if (appCostRecordFindById(app) != 0 && (flagBitIsSet(app) != 0 || appCheckPurchaseRequirements(app) != 2)) addEntry(menu, app);
            }
        }
        FUN_0029f848(menu->list, menu->entryCount, 10, 1, 1, 1);
        gauntletAppSortMenuEntries();
        break;
    case 1:
        menu->entryCount = 0;
        for (u32 app = 1; app < 0x8d; app++) {
            if (flagBitIsSet(app) != 0) addEntry(menu, app);
        }
        FUN_0029f848(menu->list, menu->entryCount, 10, 1, 1, 1);
        break;
    case 2:
        menu->entryCount = 0;
        if (menu->showSpecialA != 0) {
            if (flagBitIsSet(0x2e) == 0 && appCheckPurchaseRequirements(0x2e) == 0) addEntry(menu, 0x2e);
        } else if (menu->showSpecialB == 0) {
            for (u32 app = 1; app < 0x8d; app++) {
                if (flagBitIsSet(app) == 0 && appCheckPurchaseRequirements(app) == 0) addEntry(menu, app);
            }
        } else {
            if (flagBitIsSet(0x18) == 0 && appCheckPurchaseRequirements(0x18) == 0) addEntry(menu, 0x18);
        }
        FUN_0029f848(menu->list, menu->entryCount, 10, 1, 1, 1);
        if (menu->entryCount == 0) {
            FUN_00248738(menu, menu->state);
            return 0;
        }
        break;
    case 5:
        spriteStartAnimationByIndex(menu->cursorSprite, 1);
        FUN_00295eb0(menu->cursorSprite, 0x1d, FUN_0029efa8(menu->list) + 0x40e);
        menu->cursorWidth = 0xa0;
        break;
    case 7:
        timerStart(menu->timer, 1, 0);
        for (s32 i = 0; i < (s32)menu->touchRegions; i++) ifTouchRegionRemove(i);
        menu->touchRegions = 0;
        break;
    }
    menu->state = newState;
    return 1;
}

} /* extern "C" */
