/* NON_MATCHING: list initialization and newly-added-ID marking are recovered; saved registers and the initial nonzero-prefix loop's GT/LE versus NE/EQ predicates differ. */
#include <string.h>
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
extern StatusDownListIV *g_statusDown;
void rt_memcpy(void *destination, const void *source, u32 size);
void FUN_0029f848(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
}

// Refresh the status-down list and mark entries absent from its previous eight-item snapshot.
extern "C" void FUN_002e2fb0(const u16 *ids, u32 count)
{
    if (count > 16)
        return;
    StatusDownListIV *work = g_statusDown;
    u16 previous[8];
    memcpy(previous, work->ids, sizeof(previous));
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
    for (s32 index = 0; index < (s32)count; ++index) {
        u16 id = work->ids[index];
        if (id != 0) {
            s32 old = 0;
            for (; old < 8; ++old) {
                if (previous[old] != 0 && previous[old] == id)
                    break;
            }
            if (old >= 8)
                work->scratch[index] = 1;
        }
    }
}
