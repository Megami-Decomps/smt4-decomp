#include <string.h>
#include "status/StatusDown.h"

extern "C" {
void __aeabi_memcpy(void *destination, const void *source, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)
void gridNavigationConfigure(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
}

// Populate the bounded status-down list and select its nonzero prefix.
extern "C" void statusReplaceSkills(const u16 *ids, u8 count)
{
    if (count > 16)
        return;
    StatusDownState *work = g_statusDown;
    memset(work->scratch, 0, sizeof(work->scratch));
    memset(work->ids, 0, 16);
    __aeabi_memcpy(work->ids, ids, count * sizeof(u16));
    s32 used;
    for (used = 0; used < count; ++used) {
        if (work->ids[used] == 0)
            break;
    }
    gridNavigationConfigure(&work->list, used, 8, 1, 0, 1);
    work->listActive = 1;
    work->dirty = 0;
}
