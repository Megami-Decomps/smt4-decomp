/* NON_MATCHING: bounded copy, reset stores, and counted scan match; the initial unrolled-loop predicate uses GT/LE instead of retail's NE/EQ. */
#include <string.h>
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
extern StatusDownListIV *g_statusDown;
void rt_memcpy(void *destination, const void *source, u32 size);
void FUN_0029f848(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
}

// Populate the bounded status-down list and select its nonzero prefix.
extern "C" void FUN_00215b5c(const u16 *ids, u32 count)
{
    if (count > 16)
        return;
    StatusDownListIV *work = g_statusDown;
    memset(work->scratch, 0, sizeof(work->scratch));
    memset(work->ids, 0, 16);
    rt_memcpy(work->ids, ids, count * sizeof(u16));
    s32 used = 0;
    for (; used < (s32)count; ++used) {
        if (work->ids[used] == 0)
            break;
    }
    FUN_0029f848(&work->selection, used, 8, 1, 0, 1);
    work->active = 1;
    work->dirty = 0;
}
