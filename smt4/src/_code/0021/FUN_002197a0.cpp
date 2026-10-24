#include "common.h"

extern "C" {

u32 dataTable40FindById(u16 id);
s32 FUN_0029a9d4(u16 id, u32 flag);

/* Compares two entries by their looked-up values; empty or unknown ids compare equal. */
s32 FUN_002197a0(const u16 *idA, const u16 *idB)
{
    if (*idA == 0) {
        return 0;
    }
    if (*idB == 0) {
        return 0;
    }
    u32 entryA = dataTable40FindById(*idA);
    u32 entryB = dataTable40FindById(*idB);
    if (entryA == 0) {
        return 0;
    }
    if (entryB == 0) {
        return 0;
    }
    s16 rankA = FUN_0029a9d4(*idA, 1);
    s16 rankB = FUN_0029a9d4(*idB, 1);
    return rankA - rankB;
}

} /* extern "C" */
