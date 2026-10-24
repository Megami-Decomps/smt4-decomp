#include "common.h"

/* The debug option list (accessed field: the list box handle). */
struct OptionPage {
    u8 unk00[0x10];
    u32 list;       // 0x10
};

/* The options block the page edits: one word per list entry from 0x23A4. */
struct OptionTarget {
    u8 unk0000[0x23A4];
    u32 values[27];
};

extern "C" {
u32 *asdListBoxGetIntValuePtr(u32 list, u32 item);
u32 listBoxItemHasOwner(u32 list);
u32 asdListBoxGetSelectedItemId(u32 list);

/* Copy the selected list entry (a checkbox state or a number) into the options block. */
void debugOptionPageApplySelected(OptionPage *page, OptionTarget *target)
{
    u32 item = asdListBoxGetSelectedItemId(page->list);
    switch (item) {
    case 0:
        target->values[0] = listBoxItemHasOwner(page->list);
        return;
    case 1:
        target->values[1] = listBoxItemHasOwner(page->list);
        return;
    case 2:
        target->values[2] = listBoxItemHasOwner(page->list);
        return;
    case 3:
        target->values[3] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 4:
        target->values[4] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 5:
        target->values[5] = listBoxItemHasOwner(page->list);
        return;
    case 6:
        target->values[6] = listBoxItemHasOwner(page->list);
        return;
    case 7:
        target->values[7] = listBoxItemHasOwner(page->list);
        return;
    case 8:
        target->values[8] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 9:
        target->values[9] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 10:
        target->values[10] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 11:
        target->values[11] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 12:
        target->values[12] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 13:
        target->values[13] = listBoxItemHasOwner(page->list);
        return;
    case 14:
        target->values[14] = listBoxItemHasOwner(page->list);
        return;
    case 15:
        target->values[15] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 16:
        target->values[16] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 17:
        target->values[17] = listBoxItemHasOwner(page->list);
        return;
    case 18:
        target->values[18] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 19:
        target->values[19] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 20:
        target->values[20] = listBoxItemHasOwner(page->list);
        return;
    case 21:
        target->values[21] = listBoxItemHasOwner(page->list);
        return;
    case 22:
        target->values[22] = listBoxItemHasOwner(page->list);
        return;
    case 23:
        target->values[23] = listBoxItemHasOwner(page->list);
        return;
    case 24:
        target->values[24] = listBoxItemHasOwner(page->list);
        return;
    case 25:
        target->values[25] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    case 26:
        target->values[26] = *asdListBoxGetIntValuePtr(page->list, item);
        return;
    default:
        return;
    }
}
}
