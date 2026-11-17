/* If both entries have the same slot id (u16 at +0x62 of their gameGetSlotRecord record, 0 for negative handles), forwards them to itemSortCompareByCategoryAndId. */
#include "common.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Entry;

extern void itemSortCompareByCategoryAndId(Entry *a, Entry *b);

void FUN_00375998(Entry *a, Entry *b)
{
    u16 slotA;
    u16 slotB;
    s32 diff;

    if (a->handle < 0) {
        slotA = 0;
    } else {
        slotA = gameGetSlotRecord(a->handle)->id;
    }
    if (b->handle < 0) {
        slotB = 0;
    } else {
        slotB = gameGetSlotRecord(b->handle)->id;
    }
    diff = slotB - slotA;
    if (diff == 0) {
        itemSortCompareByCategoryAndId(a, b);
    }
}

}
