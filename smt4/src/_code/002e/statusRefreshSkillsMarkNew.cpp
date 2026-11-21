/* NON_MATCHING: the list refresh (statusReplaceSkills's body) matches; in the new-id marking loop retail keeps the snapshot base in r2 and the id in r3 and schedules the listActive store after the count test, the build uses r4/r2/r3. */
#include <string.h>
#include "status/StatusDown.h"

extern "C" {
void rt_memcpy(void *destination, const void *source, u32 size);
void gridNavigationConfigure(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
}

/* Fills the list and selects its nonzero prefix: statusReplaceSkills's body, which retail inlines here
 * (as a plain static copy it keeps that function's pair-unrolled prefix search). */
static void replaceSkills(const u16 *ids, u8 count)
{
    if (count > 16)
        return;
    StatusDownState *work = g_statusDown;
    memset(work->scratch, 0, sizeof(work->scratch));
    memset(work->ids, 0, 16);
    rt_memcpy(work->ids, ids, count * sizeof(u16));
    s32 used;
    for (used = 0; used < count; ++used) {
        if (work->ids[used] == 0)
            break;
    }
    gridNavigationConfigure(&work->list, used, 8, 1, 0, 1);
    work->listActive = 1;
    work->dirty = 0;
}

/* Refresh the status-down list and mark entries absent from its previous eight-item snapshot. */
extern "C" void statusRefreshSkillsMarkNew(const u16 *ids, u8 count)
{
    if (count > 16)
        return;
    StatusDownState *work = g_statusDown;
    u16 previous[8];
    memcpy(previous, work->ids, sizeof(previous));
    replaceSkills(ids, count);
    for (s32 index = 0; index < count; ++index) {
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
