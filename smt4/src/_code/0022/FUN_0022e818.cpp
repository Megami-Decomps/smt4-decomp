/* NON_MATCHING: identical code except armcc keeps the zero in r4 and the tab-list base in ip (retail swaps them) */
#include "common.h"

/* One item category of the menu: its entry count leads a 0x74-byte record. */
struct MenuCategory {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[0x70];
};

/* The menu work area, reduced to the category records and the tab list. */
struct CategoryMenu {
    /* 0x00000 */ u8 unk00000[0x888];
    /* 0x00888 */ MenuCategory categories[8];
    /* 0x00C28 */ u8 unk00C28[0x15d2c - 0xC28];
    /* 0x15D2C */ u32 tabs[4];
    /* 0x15D3C */ s32 tabCount;
};

typedef char CategoryMenuOffsets[sizeof(MenuCategory) == 0x74 ? 1 : -1];

extern "C" {
/* Lists the tabs to show: mode 0 builds the three summary tabs, modes 1 and 2 list the categories of one page. */
void FUN_0022e818(CategoryMenu *menu, s32 mode)
{
    menu->tabCount = 0;
    if (mode == 0) {
        if (menu->categories[0].count > 0 || menu->categories[1].count > 0 || menu->categories[2].count > 0) {
            menu->tabs[0] = 0;
            menu->tabCount = 1;
        }
        if (menu->categories[3].count > 0 || menu->categories[4].count > 0 || menu->categories[5].count > 0 ||
            menu->categories[6].count > 0) {
            menu->tabs[menu->tabCount] = 1;
            menu->tabCount++;
        }
        if (menu->categories[7].count > 0) {
            menu->tabs[menu->tabCount] = 2;
            menu->tabCount++;
        }
        menu->tabs[menu->tabCount] = 3;
        menu->tabCount++;
    } else if (mode == 1) {
        if (menu->categories[0].count > 0) {
            menu->tabs[0] = 0;
            menu->tabCount = 1;
        }
        if (menu->categories[1].count > 0) {
            menu->tabs[menu->tabCount] = 1;
            menu->tabCount++;
        }
        if (menu->categories[2].count > 0) {
            menu->tabs[menu->tabCount] = 2;
            menu->tabCount++;
        }
    } else if (mode == 2) {
        if (menu->categories[3].count > 0) {
            menu->tabs[0] = 3;
            menu->tabCount = 1;
        }
        if (menu->categories[4].count > 0) {
            menu->tabs[menu->tabCount] = 4;
            menu->tabCount++;
        }
        if (menu->categories[5].count > 0) {
            menu->tabs[menu->tabCount] = 5;
            menu->tabCount++;
        }
        if (menu->categories[6].count > 0) {
            menu->tabs[menu->tabCount] = 6;
            menu->tabCount++;
        }
    }
}
}
