#include "common.h"

extern "C" {

u32 dataTable04FindById(u16 id);
s32 FUN_003df57c(u16 id, u32 flag);

/* Compares two entries by their looked-up values; empty or unknown ids compare equal. */
s32 FUN_002fe144(const u16 *idA, const u16 *idB)
{
    if (*idA == 0) {
        return 0;
    }
    if (*idB == 0) {
        return 0;
    }
    u32 entryA = dataTable04FindById(*idA);
    u32 entryB = dataTable04FindById(*idB);
    if (entryA == 0) {
        return 0;
    }
    if (entryB == 0) {
        return 0;
    }
    s16 rankA = FUN_003df57c(*idA, 1);
    s16 rankB = FUN_003df57c(*idB, 1);
    return rankA - rankB;
}

} /* extern "C" */
