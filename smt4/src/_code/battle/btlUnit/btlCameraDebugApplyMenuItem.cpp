#include "common.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {

typedef struct BtlMain {
    /* 0x000 */ f32 vector[3];
    /* 0x00C */ u8 unk00C[0x628];
    /* 0x634 */ u32 flags;
} BtlMain;

typedef struct OptionScreen {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
} OptionScreen;

extern BtlMain *g_btlMain;   /* 0x4342c8 */
extern f32 DAT_004342cc;     /* 0x4342cc */
extern f32 DAT_004342d0;     /* 0x4342d0 */

extern void transitionResetPosition(BtlMain *state);

/* The option list's value slot for `item`, holding a float setting. */
static __inline f32 *optionFloatValue(u32 listBox, u32 item)
{
    return reinterpret_cast<f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(listBox), item));
}

/* Applies the option list item `item` of the battle option screen: items 0-2 toggle flag bits, items 3-7 copy the item's value into a setting. */
void btlCameraDebugApplyMenuItem(OptionScreen *screen, u32 unused, u32 item)
{
    switch (item) {
    case 0:
        if (listBoxItemHasOwner(screen->listBox, item)) {
            if (!(g_btlMain->flags & 0x20))
                transitionResetPosition(g_btlMain);
        } else {
            transitionResetPosition(g_btlMain);
            g_btlMain->flags &= ~0x20;
        }
        return;
    case 1:
        if (listBoxItemHasOwner(screen->listBox, item))
            g_btlMain->flags |= 0x40;
        else
            g_btlMain->flags &= ~0x40;
        return;
    case 2:
        if (listBoxItemHasOwner(screen->listBox, item))
            g_btlMain->flags |= 0x80;
        else {
            g_btlMain->flags &= ~0x80;
            return;
        }
        return;
    case 3:
        DAT_004342cc = *optionFloatValue(screen->listBox, item);
        break;
    case 4:
        DAT_004342d0 = *optionFloatValue(screen->listBox, item);
        break;
    case 5:
        g_btlMain->vector[0] = *optionFloatValue(screen->listBox, item);
        return;
    case 6:
        g_btlMain->vector[1] = *optionFloatValue(screen->listBox, item);
        return;
    case 7:
        g_btlMain->vector[2] = *optionFloatValue(screen->listBox, item);
        return;
    default:
        return;
    }
}

} /* extern "C" */
