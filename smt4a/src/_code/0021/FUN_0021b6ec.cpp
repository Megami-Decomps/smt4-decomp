/* NON_MATCHING: retail splits the type test into a binary if/switch tree with each code constant hoisted into a register and writes entry+value per branch; the single type-to-code switch compiles to a different tree and register use. */
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
void FUN_0021b6ec(CommandMenu *menu)
{
    CommandEntry entries[22];
    s32 count = 0;
    sysMemClear(entries, sizeof(entries));
    for (s32 i = 0; i < menu->itemCount; i++) {
        MenuItemRecord *item = menu->items[i];
        s32 code;
        if (item->type > 200) {
            code = 0x3E;
        } else {
            switch (item->type) {
            case 1: code = 0x35; break;
            case 2: code = 0x36; break;
            case 3: code = 0x37; break;
            case 4: code = 0x38; break;
            case 5: code = 0x39; break;
            case 6: code = 0x3A; break;
            case 7: code = 0x3B; break;
            case 8: code = 0x3C; break;
            case 10: code = 0x41; break;
            case 12: code = 0x4D; break;
            case 0x16: code = 0x42; break;
            case 0x17: code = 0x43; break;
            case 0x1A: code = 0x44; break;
            case 0x1B: code = 0x45; break;
            case 0x1C: code = 0x47; break;
            case 0x1F: code = 0x48; break;
            case 0x20: code = 0x49; break;
            case 0x21: code = 0x4A; break;
            case 0x22: code = 0x4B; break;
            case 0x25: code = 0x4C; break;
            case 0x65: code = 0x46; break;
            default:
                continue;
            }
        }
        entries[count].code = code;
        entries[count].value = item->value;
        count++;
    }
    qsort(entries, count, sizeof(CommandEntry), dataCompareSignedWordKeys);
    for (s32 i = 0; i < count; i++)
        FUN_0031f208(entries[i].code);
}
}
