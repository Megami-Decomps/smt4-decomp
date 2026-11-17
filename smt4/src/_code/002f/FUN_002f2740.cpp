#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* Object whose int at +4 is a handle (negative = none). */
typedef struct {
    u8 unk00[4];
    s32 handle;     /* 0x04 */
} HandleHolder;


int itemSortCompareByCategoryAndId(HandleHolder *first, HandleHolder *second);

/* Calls itemSortCompareByCategoryAndId when both holders resolve to the same group (a holder without a handle counts as group 0). */
void FUN_002f2740(HandleHolder *first, HandleHolder *second)
{
    u16 firstGroup;
    u16 secondGroup;

    if (first->handle < 0) {
        firstGroup = 0;
    } else {
        firstGroup = gameGetUnitRecord(first->handle)->id;
    }
    if (second->handle < 0) {
        secondGroup = 0;
    } else {
        secondGroup = gameGetUnitRecord(second->handle)->id;
    }
    s32 difference = secondGroup - firstGroup;
    if (difference != 0) {
        return;
    }
    itemSortCompareByCategoryAndId(first, second);
}

} /* extern "C" */
