/* NON_MATCHING: case 0 loads g_btlMain before the branch (no nop/beq before the load) and the per-case stores of items 3-7 are tail-merged differently (retail: item 3 branches to the shared `str r0,[r1]`, item 4 stores inline). */
#include "common.h"

extern "C" {

typedef struct BtlMain {
    /* 0x000 */ u32 setting0;
    /* 0x004 */ u32 setting1;
    /* 0x008 */ u32 setting2;
    /* 0x00C */ u8 unk00C[0x628];
    /* 0x634 */ u32 flags;
} BtlMain;

typedef struct OptionScreen {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
} OptionScreen;

extern BtlMain *g_btlMain;   /* 0x4342c8 */
extern u32 DAT_004342cc;     /* 0x4342cc */
extern u32 DAT_004342d0;     /* 0x4342d0 */

extern u32 *asdListBoxGetItemText(u32 listBox, u32 index);
extern int listBoxItemHasOwner(u32 listBox);
extern int FUN_003d88a0(void);

/* Applies the option list item `item` of the battle option screen: items 0-2 toggle flag bits, items 3-7 copy the item's value into a setting. */
void FUN_003c63a8(OptionScreen *screen, u32 unused, u32 item)
{
    u32 value;

    switch (item) {
    case 0:
        if (listBoxItemHasOwner(screen->listBox) == 0) {
            FUN_003d88a0();
            g_btlMain->flags &= ~0x20;
            break;
        }
        if ((g_btlMain->flags & 0x20) != 0) {
            return;
        }
        FUN_003d88a0();
        return;
    case 1:
        if (listBoxItemHasOwner(screen->listBox) != 0) {
            g_btlMain->flags |= 0x40;
        } else {
            g_btlMain->flags &= ~0x40;
        }
        break;
    case 2:
        if (listBoxItemHasOwner(screen->listBox) != 0) {
            g_btlMain->flags |= 0x80;
        } else {
            g_btlMain->flags &= ~0x80;
            return;
        }
        break;
    case 3:
        value = *asdListBoxGetItemText(screen->listBox, item);
        DAT_004342cc = value;
        break;
    case 4:
        value = *asdListBoxGetItemText(screen->listBox, item);
        DAT_004342d0 = value;
        break;
    case 5:
        g_btlMain->setting0 = *asdListBoxGetItemText(screen->listBox, item);
        break;
    case 6:
        g_btlMain->setting1 = *asdListBoxGetItemText(screen->listBox, item);
        break;
    case 7:
        g_btlMain->setting2 = *asdListBoxGetItemText(screen->listBox, item);
        break;
    }
}

} /* extern "C" */
