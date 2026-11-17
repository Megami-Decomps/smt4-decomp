#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Entry;


extern int itemSortCompareRankThenKey(Entry *a, Entry *b);

/* If both entries have the same slot (0 for a negative handle), forwards them to itemSortCompareRankThenKey. */
void FUN_00219208(Entry *a, Entry *b)
{
    u16 slotA;
    u16 slotB;
    s32 diff;

    if (a->handle < 0) {
        slotA = 0;
    } else {
        slotA = gameGetUnitRecord(a->handle)->id;
    }
    if (b->handle < 0) {
        slotB = 0;
    } else {
        slotB = gameGetUnitRecord(b->handle)->id;
    }
    diff = slotA - slotB;
    if (diff == 0) {
        itemSortCompareRankThenKey(a, b);
    }
}

}
