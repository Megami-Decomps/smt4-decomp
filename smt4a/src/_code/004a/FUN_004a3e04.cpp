/* NON_MATCHING: 183 lines: the mode byte is s8 (retail's split base work+0x800, as here); remaining: retail spills
 * fewer values (a 20-byte frame against ours 52), materialises the compare flag as mov #1/moveq #0 and swaps the
 * menu/loop-index registers; logic matches retail. */
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmBaseRecordA.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 rangeGetMinimumLimit(void *list);
u32 compendiumComputeSummonCost(u32 id, u32 kind, bool flag, bool high, u32 extra);
extern s32 g_animatedPageSelection[];
extern u32 g_entryWindowNumberFirst[20];
extern s32 g_entryWindowCaptionX[10];
extern u32 g_entryWindowColors[10];
}

struct StatEntry {
    s16 id;
    u8 unk02[10];
    u16 current;
    u16 projected;
    u8 unk10[16];
};

struct StatMenu {
    u8 unk00[0x20];
    u8 list[8];
    s32 enabled;
    u8 unk2C[0x68];
    s8 level;
    u8 unk95[0x33];
    u8 sprites[0x798];
    s8 mode;
    u8 kind;
    u8 unk862[6];
    StatEntry entries[1];
};

/* The value an entry shows: the recorded stat for kind 0 of the plain list, otherwise one of the entry's own values. */
static u32 statGetValue(const StatEntry *entry, bool compare, u32 kind)
{
    u32 value = 0;
    if (!compare) {
        if (kind == 0) {
            NkmBaseRecordA *record = nkmBaseGetRecord((u16)entry->id);
            if (record != 0)
                value = record->level;
        } else if (kind == 1) {
            value = entry->current;
        } else if (kind == 2) {
            value = entry->projected;
        }
    } else {
        if (kind == 0)
            value = entry->current;
        else if (kind == 1)
            value = entry->projected;
    }
    return value;
}

/* Refresh the displayed values, colors and positions of the stat rows when the page scrolls. */
extern "C" void FUN_004a3e04(StatMenu *menu)
{
    if (menu->enabled == 0)
        return;
    s32 top = resourceDispatchTaggedOperation(menu->list);
    s32 rows = rangeGetMinimumLimit(menu->list);
    if (top == g_animatedPageSelection[1])
        return;
    g_animatedPageSelection[1] = top;
    for (s32 i = 0; i < rows; i++) {
        s16 id = menu->entries[top + i].id;
        u32 color = 0xFFFFFFFF;
        bool compare = menu->mode != 0;
        u32 value = statGetValue(&menu->entries[resourceDispatchTaggedOperation(menu->list) + i], compare, menu->kind);
        if (menu->mode == 1 && menu->kind == 1) {
            const StatEntry *entry = &menu->entries[resourceDispatchTaggedOperation(menu->list) + i];
            u32 base = compare ? entry->current : statGetValue(entry, false, 0);
            if (value > base)
                color = 0x72E027FF;
            if (value < base)
                color = 0xDC0F14FF;
        }
        g_entryWindowNumberFirst[i] = value;
        g_entryWindowNumberFirst[10 + i] = color;
        bool flag = menu->mode != 0;
        TextureTableEntryIV *offset = layoutFindTableEntry(menu->sprites, i + 0x42F);
        s16 x = offset->x;
        s16 y = offset->y;
        u32 shown = compendiumComputeSummonCost((u16)id, menu->kind, flag, menu->level >= 100, 0);
        u32 shownColor = 0xFFFFFFFF;
        if (menu->mode == 1) {
            u32 other = compendiumComputeSummonCost((u16)id, 0, flag, menu->level >= 100, 0);
            if (shown < other)
                shownColor = 0xDC0F14FF;
            if (shown > other)
                shownColor = 0x72E027FF;
        }
        offset = layoutFindTableEntry(menu->sprites, 0x4C6);
        g_entryWindowCaptionX[i] = offset->x + x;
        g_entryWindowCaptionX[10 + i] = offset->y + y;
        sprintf((char *)&g_entryWindowCaptionX[20] + i * 0x20, "%8u", shown);
        g_entryWindowColors[i] = shownColor;
    }
}
