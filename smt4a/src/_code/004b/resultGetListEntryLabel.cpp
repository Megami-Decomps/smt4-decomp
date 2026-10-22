/* NON_MATCHING: mode-one/three label selection and shared override-tail layout differ from retail, changing switch targets and branch placement. */
#include "common.h"

struct ResultListEntry {
    u8 unk00[0x20];
    u8 flags; // 0x20
    u8 kind; // 0x21
    u8 unk22[0x32];
    u16 firstId; // 0x54
    u16 secondId; // 0x56
};
struct ResultList {
    u8 unk00[0x7e8];
    s32 count; // 0x7e8
    ResultListEntry *entries[64]; // 0x7ec
    s32 labels[64]; // 0x8ec
};
extern "C" s32 dataTableHasMatchingEntry35(u16 id);

static __inline s32 resultEntryLabel(const ResultListEntry *entry, s32 mode)
{
    s32 label = -1;
    switch (entry->kind) {
    case 1:
        if (mode == 1) {
            if (entry->flags == 0xff)
                return 0x1b59;
            label = 0x1b5a;
        } else if (mode == 3) {
            if (entry->flags == 0xff)
                return 0x1b59;
            label = 0x1b5a;
        } else {
            label = 0x1b5a;
        }
        break;
    case 2:
        label = 0x1b5a;
        break;
    case 3:
        label = 0x1b5e;
        break;
    case 4:
        label = 0x1b5f;
        break;
    case 5:
        if (dataTableHasMatchingEntry35(entry->secondId))
            label = 0x1bc6;
        break;
    case 6:
        label = 0x1b5c;
        break;
    case 9:
        if (dataTableHasMatchingEntry35(entry->firstId))
            label = 0x1bc6;
        break;
    case 10:
        label = 0x1bc8;
        break;
    }
    if (mode == 3) {
        if (entry->flags == 5)
            label = 0x1b5c;
        else if (entry->flags == 1)
            label = 0x1bc8;
    }
    return label;
}

// Append the result pointer and cache its label while the fixed label bank has room.
extern "C" void resultGetListEntryLabel(ResultList *list, ResultListEntry *entry, s32 mode)
{
    if (entry == NULL)
        return;
    list->entries[list->count] = entry;
    s32 index = list->count;
    if (index < 64)
        list->labels[index] = resultEntryLabel(entry, mode);
    ++list->count;
}
