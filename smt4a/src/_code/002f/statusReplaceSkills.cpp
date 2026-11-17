#include "status/StatusDownA.h"


extern "C" void *rt_memcpy(void *destination, const void *source, u32 size);
extern "C" void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 rows, s32 wrap, s32 first, s32 enabled);

/* Replace the displayed skills and configure the selector for its nonempty prefix. */
extern "C" void statusReplaceSkills(const u16 *skills, u8 count)
{
    if (count > 16)
        return;
    StatusDownStateA *status = g_statusDown;
    for (s32 index = 0; index < 4; ++index)
        status->scratchWords[index] = 0;
    for (s32 index = 0; index < 4; ++index)
        status->history.words[index] = 0;
    rt_memcpy(status->ids, skills, count * sizeof(u16));
    s32 nonempty;
    for (nonempty = 0; nonempty < count; ++nonempty) {
        if (status->ids[nonempty] == 0)
            break;
    }
    gridNavigationConfigure(&status->list, nonempty, 8, 1, 0, 1);
    status->listActive = true;
    status->dirty = 0;
}
