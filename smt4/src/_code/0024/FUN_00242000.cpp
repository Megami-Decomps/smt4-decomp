#include "common.h"
#include "code/Code0024_Smt4.h"

struct MenuEntry {
    u16 id;          // 0x00
    char text[0x5E]; // 0x02
};

struct SelectorState {
    u8 unk00[8];
};

struct MenuScreen {
    u8 unk00[0x10];            // 0x00
    SelectorState selector;    // 0x10
    u8 unk18[0x5C];            // 0x18
    u32 ids[0x80];             // 0x74
    u8 unk274[0x38];           // 0x274
    MenuEntry *entries;        // 0x2AC
    u32 entryCount;            // 0x2B0
};

extern "C" {

s32 FUN_0029efc0(SelectorState *selector);
s32 FUN_0029efa8(SelectorState *selector);
void FUN_0029ee6c(const char *text, u32 color);

/* Highlights the text of the entry whose id matches the currently selected id. */
void FUN_00242000(MenuScreen *menu)
{
    s32 base = FUN_0029efc0(&menu->selector);
    s32 offset = FUN_0029efa8(&menu->selector);
    u32 id = menu->ids[offset + base];

    for (u32 i = 0; i < menu->entryCount; i++) {
        if (menu->entries[i].id == id) {
            FUN_0029ee6c(menu->entries[i].text, 0x323232FF);
            return;
        }
    }
}

} /* extern "C" */
