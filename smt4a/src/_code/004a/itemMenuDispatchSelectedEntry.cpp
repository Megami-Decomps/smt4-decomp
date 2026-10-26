#include "common.h"

struct MenuEntry {
    u8 unk00[4];
    u16 id; // 0x04
    u8 unk06[0x1a];
};

struct MenuTask {
    u8 unk00[0x14];
    s32 state;            // 0x14
    s32 stateTimer;       // 0x18
    u8 unk1c[4];
    u8 holder[0x841];     // 0x20
    u8 flag;              // 0x861
    u8 unk862[2];
    MenuEntry entries[1]; // 0x864, 0x20 bytes each
};

extern "C" {

s32 FUN_0035dbb0(void);
s32 flaggedValueHolderGetTotal(void *holder);
s32 partyFindFirstUnusedEntry(void);
void dispatchIfFound(s32 index, u32 id, bool flag);
void FUN_003343f0(s32 value);

u32 shopListItemGetId(const MenuEntry *entry);

void itemMenuDispatchSelectedEntry(MenuTask *task)
{
    if (FUN_0035dbb0() != 0) {
        MenuEntry *entries = task->entries;
        u16 id = shopListItemGetId(&entries[flaggedValueHolderGetTotal(task->holder)]);
        s32 index = partyFindFirstUnusedEntry();
        if (index != -1) {
            bool useAlternate;
            if (task->flag == 0)
                useAlternate = false;
            else
                useAlternate = true;
            dispatchIfFound(index, id, useAlternate);
        }
        FUN_003343f0(0);
        task->state = 2;
        task->stateTimer = 0;
    }
}

} /* extern "C" */
