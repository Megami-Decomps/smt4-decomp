/* NON_MATCHING: -O2 candidate; population loops become dual output pointers instead of indexed entries, and selector-base/final-state clear grouping differ. */
#include "shard/W4_W4Match5_StatusDown.h"

struct StatusSkillSource {
    u8 unk00[0x34];
    u16 skills[8];
    s8 levels[8];
};

struct StatusSkillEntry {
    union {
        u32 idWord;
        struct { u16 id; u16 unk02; } skill;
    };
    s32 level;
};

struct StatusSkillMenu {
    StatusSkillEntry entries[8];
    s32 count;
    u8 changed;
    u8 unk45[3];
    s32 selection[2];
    StatusSkillSource *source;
    u8 controller[0x64];
    u32 state;
    u32 phase;
    u8 unkc0[0x14];
    u8 activatedSession;
};

struct StatusSkillScreen {
    u8 unk000[0x598];
    s16 selectedUnit;
    u8 unk59a[0x1f12];
    StatusSkillMenu menu;
};

static inline void copyStatusSkillSlots(StatusSkillEntry *entries,
                                        const StatusSkillSource *source, s32 count)
{
    for (s32 index = 0; index < count; ++index) {
        entries[index].skill.id = source->skills[index];
        entries[index].level = source->levels[index];
    }
}

extern "C" {
StatusSkillSource *gameGetPlayerData();
StatusSkillSource *slotRecordFindById(u16 id);
s32 countUnlockedSlots();
s32 getUnlockedSlotCount();
void fillTwoWordsWithByte(u32 *destination, u32 value);
u8 FUN_002c7e3c();
void FUN_00203b40(void *controller, s32 items, s32 visible, s32 columns,
                  s32 option, s32 secondOption);
s32 FUN_002857b8();
void FUN_003343f0(u8 value);

void statusDownInitializeSkillList()
{
    StatusSkillScreen *screen = (StatusSkillScreen *)g_statusDown;
    StatusSkillMenu *menu = &screen->menu;
    menu->entries[0].idWord = 0;
    menu->state = 1;
    menu->entries[0].level = 0;
    menu->entries[1].idWord = 0;
    menu->entries[1].level = 0;
    menu->entries[2].idWord = 0;
    menu->entries[2].level = 0;
    menu->entries[3].idWord = 0;
    menu->entries[3].level = 0;
    menu->entries[4].idWord = 0;
    menu->entries[4].level = 0;
    menu->entries[5].idWord = 0;
    menu->entries[5].level = 0;
    menu->entries[6].idWord = 0;
    menu->entries[6].level = 0;
    menu->entries[7].idWord = 0;
    menu->entries[7].level = 0;
    fillTwoWordsWithByte((u32 *)menu->selection, ~0u);
    menu->changed = 0;
    menu->source = NULL;
    FUN_002c7e3c();
    if (screen->selectedUnit <= 0) {
        const StatusSkillSource *source = gameGetPlayerData();
        s32 count = countUnlockedSlots();
        menu->count = count;
        copyStatusSkillSlots(menu->entries, source, count);
    } else {
        StatusSkillSource *source = slotRecordFindById((u16)screen->selectedUnit);
        menu->source = source;
        s32 count = getUnlockedSlotCount();
        menu->count = count;
        copyStatusSkillSlots(menu->entries, source, count);
    }
    s32 items = menu->count + 1;
    FUN_00203b40(menu->controller, items, items, 1, 1, 1);
    menu->activatedSession = 0;
    if (FUN_002857b8() == 0) {
        FUN_003343f0(1);
        menu->activatedSession = 1;
    }
    menu->state = 0;
    menu->phase = 0;
}
}
