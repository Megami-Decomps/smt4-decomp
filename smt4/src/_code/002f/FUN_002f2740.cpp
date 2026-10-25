#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* Object whose int at +4 is a handle (negative = none). */
typedef struct {
    u8 unk00[4];
    s32 handle;     /* 0x04 */
} HandleHolder;

/* Record looked up for a handle; only the group id is used here. */
typedef struct {
    u8 unk00[0x46];
    u16 group;      /* 0x46 */
} HandleRecord;

int FUN_002497f8(HandleHolder *first, HandleHolder *second);

/* Calls FUN_002497f8 when both holders resolve to the same group (a holder without a handle counts as group 0). */
void FUN_002f2740(HandleHolder *first, HandleHolder *second)
{
    u16 firstGroup;
    u16 secondGroup;

    if (first->handle < 0) {
        firstGroup = 0;
    } else {
        firstGroup = static_cast<HandleRecord *>(gameGetUnitRecord(first->handle))->group;
    }
    if (second->handle < 0) {
        secondGroup = 0;
    } else {
        secondGroup = static_cast<HandleRecord *>(gameGetUnitRecord(second->handle))->group;
    }
    s32 difference = secondGroup - firstGroup;
    if (difference != 0) {
        return;
    }
    FUN_002497f8(first, second);
}

} /* extern "C" */
