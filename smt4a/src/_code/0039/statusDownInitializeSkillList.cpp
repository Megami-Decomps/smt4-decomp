/* NON_MATCHING: menu-owned slot copies and parent-relative selector setup match; final state/phase reset uses two stores instead of retail's paired stm. */
#include "status/StatusDownA.h"
#include "gamedata/GamePlayerData.h"

static inline void copyStatusSkillSlots(StatusDownSkillMenuA *menu,
                                        const PlayerDataA *source, s32 count)
{
    for (s32 index = 0; index < count; ++index) {
        menu->rows[index].id = source->skills[index];
        menu->rows[index].level = source->skillRanks[index];
    }
}

extern "C" {
PlayerDataA *slotRecordFindById(u16 id);
s32 countUnlockedSlots();
s32 getUnlockedSlotCount();
void fillTwoWordsWithByte(u32 *destination, u32 value);
u8 FUN_002c7e3c();
void gridNavigationConfigure(GridNavigation *controller, s32 items, s32 visible, s32 columns,
                  s32 option, s32 secondOption);
s32 FUN_002857b8();
void gameGlobalsSetMenuOpenFlag(u8 value);

void statusDownInitializeSkillList()
{
    StatusDownStateA *screen = g_statusDown;
    StatusDownSkillMenuA *menu = &screen->menu;
    menu->rows[0].idWord = 0;
    menu->state = 1;
    menu->rows[0].level = 0;
    menu->rows[1].idWord = 0;
    menu->rows[1].level = 0;
    menu->rows[2].idWord = 0;
    menu->rows[2].level = 0;
    menu->rows[3].idWord = 0;
    menu->rows[3].level = 0;
    menu->rows[4].idWord = 0;
    menu->rows[4].level = 0;
    menu->rows[5].idWord = 0;
    menu->rows[5].level = 0;
    menu->rows[6].idWord = 0;
    menu->rows[6].level = 0;
    menu->rows[7].idWord = 0;
    menu->rows[7].level = 0;
    fillTwoWordsWithByte((u32 *)screen->menu.selection, ~0u);
    menu->changed = 0;
    menu->source = NULL;
    FUN_002c7e3c();
    if ((s16)screen->selectedEntry <= 0) {
        const PlayerDataA *source = gameGetPlayerData();
        s32 count = countUnlockedSlots();
        menu->count = count;
        copyStatusSkillSlots(menu, source, count);
    } else {
        PlayerDataA *source = slotRecordFindById(screen->selectedEntry);
        menu->source = source;
        s32 count = getUnlockedSlotCount();
        menu->count = count;
        copyStatusSkillSlots(menu, source, count);
    }
    s32 items = menu->count + 1;
    gridNavigationConfigure(&menu->controller, items, items, 1, 1, 1);
    menu->activatedSession = 0;
    if (FUN_002857b8() == 0) {
        gameGlobalsSetMenuOpenFlag(1);
        menu->activatedSession = 1;
    }
    menu->state = 0;
    menu->phase = 0;
}
}
