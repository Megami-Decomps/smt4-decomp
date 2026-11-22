/* NON_MATCHING: 30 lines. Each case stores its command code into the next entry and the cases share the value
 * store (retail's per-case `strb` and shared tail); the cases are listed in command-code order (0x35-0x4D run
 * consecutively that way), which gives retail's case blocks and jump tables. Left: armcc hoists codes 0x43 and 0x47
 * (types 0x17, 0x1C) into registers where retail hoists 0x46 and 0x48 (types 0x65, 0x1F), which moves three case
 * blocks. */
#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

/* One menu entry: the item value and the code of the command it enables. */
struct CommandEntry {
    s32 value;
    u8 code;
    u8 unk05[3];
};

/* A menu list item (accessed prefix). */
struct MenuItemRecord {
    s16 type;
    u8 unk02[4];
    s8 value;   // 0x06
};

/* The menu object: item pointers from 0x5A8, their count at 0x600. */
struct CommandMenu {
    u8 unk000[0x5A8];
    MenuItemRecord *items[22];  // 0x5A8
    s32 itemCount;              // 0x600
};

extern "C" {
void qsort(void *base, s32 count, s32 size, s32 (*compare)(const s32 *, const s32 *));
void sysMemClear(void *buffer, s32 size);
s32 dataCompareSignedWordKeys(const s32 *left, const s32 *right);

/* Build the sorted list of command codes the menu's items enable and register each one. */
void commandMenuRegisterItemCommands(CommandMenu *menu)
{
    CommandEntry entries[22];
    s32 count = 0;
    sysMemClear(entries, sizeof(entries));
    for (s32 i = 0; i < menu->itemCount; i++) {
        if (menu->items[i]->type > 200) {
            entries[count].code = 0x3E;
            entries[count].value = menu->items[i]->value;
            count++;
        } else {
            switch (menu->items[i]->type) {
            case 1:
                entries[count].code = 0x35;
                break;
            case 2:
                entries[count].code = 0x36;
                break;
            case 3:
                entries[count].code = 0x37;
                break;
            case 4:
                entries[count].code = 0x38;
                break;
            case 5:
                entries[count].code = 0x39;
                break;
            case 6:
                entries[count].code = 0x3A;
                break;
            case 7:
                entries[count].code = 0x3B;
                break;
            case 8:
                entries[count].code = 0x3C;
                break;
            case 10:
                entries[count].code = 0x41;
                break;
            case 0x16:
                entries[count].code = 0x42;
                break;
            case 0x17:
                entries[count].code = 0x43;
                break;
            case 0x1A:
                entries[count].code = 0x44;
                break;
            case 0x1B:
                entries[count].code = 0x45;
                break;
            case 0x65:
                entries[count].code = 0x46;
                break;
            case 0x1C:
                entries[count].code = 0x47;
                break;
            case 0x1F:
                entries[count].code = 0x48;
                break;
            case 0x20:
                entries[count].code = 0x49;
                break;
            case 0x21:
                entries[count].code = 0x4A;
                break;
            case 0x22:
                entries[count].code = 0x4B;
                break;
            case 0x25:
                entries[count].code = 0x4C;
                break;
            case 12:
                entries[count].code = 0x4D;
                break;
            default:
                continue;
            }
            entries[count].value = menu->items[i]->value;
            count++;
        }
    }
    qsort(entries, count, sizeof(CommandEntry), dataCompareSignedWordKeys);
    for (s32 i = 0; i < count; i++)
        useCounterAppendValue(entries[i].code);
}
}
