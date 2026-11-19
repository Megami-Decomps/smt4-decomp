#ifndef SHARD_W6_W6MATCH6_SORT_MENU_H
#define SHARD_W6_W6MATCH6_SORT_MENU_H

#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteApi.h"
#include "ui/GridNavigation.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

/* One 0x72-byte row of data table 0x38, section 0: a sort key, its label and its help line (sorted by id). */
struct SortMenuKeyRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ char name[0x16];     /* the row's label */
    /* 0x18 */ char help[0x5A];
};

struct SortMenuWork {
    u32 calculate, draw;
    UiResourceParameters parameters;
    UiSpriteState sprites[13]; // 0x28: [0..9] the rows, [10] and [11] the frame, [12] the scroll bar
    u32 state; // 0x744: 1 opening, 2 choosing, 3 decided, 4 closing
    s32 frame; // 0x748
    u8 decided; // 0x74c
    u8 ascending; // 0x74d: the order a decision applies; picking the same key again flips it
    u8 option; // 0x74e
    u8 unk74f;
    s32 owner; // 0x750: index of the sort preference the menu edits (< 0: none)
    s32 count; // 0x754
    u8 keys[20]; // 0x758: the sort key of each row
    s16 ids[13]; // 0x76c: touch regions, [0..2] the scroll bar, [3..12] the rows
    s16 touchRegionCount; // 0x786
    GridNavigation list; // 0x788
    s32 terminalMap; // 0x7ec: option 2: the id whose name (terminalGetCharacterDisplayName) heads the list
    u8 unk7f0[4];
    u8 helpSaved; // 0x7f4: the button help to restore on closing was saved
    u8 helpIsDefault; // 0x7f5
    char helpText[0x82]; // 0x7f6
};
struct SortMenuSingleton { s8 useCount; u8 unk01[3]; SortMenuWork *work; };

typedef char SortMenuWorkPacketLayoutCheck[
    offsetof(SortMenuWork, parameters) == 8 && offsetof(SortMenuWork, sprites) == 0x28 &&
    offsetof(SortMenuWork, state) == 0x744 && offsetof(SortMenuWork, keys) == 0x758 &&
    offsetof(SortMenuWork, ids) == 0x76c && offsetof(SortMenuWork, list) == 0x788 &&
    offsetof(SortMenuWork, helpText) == 0x7f6 && sizeof(SortMenuKeyRecord) == 0x72 &&
    sizeof(SortMenuWork) == 0x878 ? 1 : -1];

/* The sort keys from here on have no row in the key table. */
#define SORT_MENU_KEY_COUNT 0x4C

extern "C" {
s32 recordCompareSignedValue(const void *left, const void *right);
}

/* The row of sort key `key` in the key table. */
static __inline SortMenuKeyRecord *sortMenuFindKey(u8 key)
{
    DataTableView<SortMenuKeyRecord> keys(0x38, 0);
    SortMenuKeyRecord wanted;

    wanted.id = key;
    return static_cast<SortMenuKeyRecord *>(libc_bsearch(&wanted, keys.entries, keys.count,
                                                         sizeof(SortMenuKeyRecord), recordCompareSignedValue));
}

#endif
