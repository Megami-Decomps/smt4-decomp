/* NON_MATCHING: register allocation and scheduling differ (menu/loop index swap, mode byte base hoisted into a register in retail, flag materialised as mov #1/moveq #0); logic matches retail. */
#include "common.h"

struct StatRecord {
    u8 unk00[6];
    u16 value;
};

struct SpriteOffset {
    u8 unk00[8];
    s16 x;
    s16 y;
};

extern "C" {
s32 FUN_002a482c(void *list);
s32 rangeGetMinimumLimit(void *list);
StatRecord *FUN_00184310(u32 id);
SpriteOffset *FUN_0018349c(void *sprites, s32 index);
u32 FUN_004a8750(u32 id, u32 kind, bool flag, bool high, u32 extra);
int textFormatBuffer(char *buffer, const char *format, u32 value);
extern s32 g_animatedPageSelection[];
extern u32 DAT_005e1ca8[20];
extern s32 DAT_005e1cf8[10];
extern u32 DAT_005e1e88[10];
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
    u8 mode;
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
            StatRecord *record = FUN_00184310((u16)entry->id);
            if (record != 0)
                value = record->value;
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
    s32 top = FUN_002a482c(menu->list);
    s32 rows = rangeGetMinimumLimit(menu->list);
    if (top == g_animatedPageSelection[1])
        return;
    g_animatedPageSelection[1] = top;
    for (s32 i = 0; i < rows; i++) {
        s16 id = menu->entries[top + i].id;
        u32 color = 0xFFFFFFFF;
        bool compare = menu->mode != 0;
        u32 value = statGetValue(&menu->entries[FUN_002a482c(menu->list) + i], compare, menu->kind);
        if (menu->mode == 1 && menu->kind == 1) {
            const StatEntry *entry = &menu->entries[FUN_002a482c(menu->list) + i];
            u32 base = compare ? entry->current : statGetValue(entry, false, 0);
            if (value > base)
                color = 0x72E027FF;
            if (value < base)
                color = 0xDC0F14FF;
        }
        DAT_005e1ca8[i] = value;
        DAT_005e1ca8[10 + i] = color;
        bool flag = menu->mode != 0;
        SpriteOffset *offset = FUN_0018349c(menu->sprites, i + 0x42F);
        s16 x = offset->x;
        s16 y = offset->y;
        u32 shown = FUN_004a8750((u16)id, menu->kind, flag, menu->level >= 100, 0);
        u32 shownColor = 0xFFFFFFFF;
        if (menu->mode == 1) {
            u32 other = FUN_004a8750((u16)id, 0, flag, menu->level >= 100, 0);
            if (shown < other)
                shownColor = 0xDC0F14FF;
            if (shown > other)
                shownColor = 0x72E027FF;
        }
        offset = FUN_0018349c(menu->sprites, 0x4C6);
        DAT_005e1cf8[i] = offset->x + x;
        DAT_005e1cf8[10 + i] = offset->y + y;
        textFormatBuffer((char *)&DAT_005e1cf8[20] + i * 0x20, "%8u", shown);
        DAT_005e1e88[i] = shownColor;
    }
}
