/* NON_MATCHING: the compiler hoists the active-list sentinel and saves six registers; retail recomputes it and saves four. */
#include "shard/Shard0046.h"
#include <stddef.h>

struct CallerActivityList {
    u32 count;
    CallerListLink end;
};

struct CallerActivityOwner {
    u8 unk00[0x14];
    CallerActivityList idle;   // 0x14
    CallerActivityList active; // 0x20
};

struct ActiveCallerView {
    CallerA caller;
    u8 unk7c[4];
    CallerListLink link; // 0x80
};

static __inline CallerA *activityCaller(CallerListLink *link)
{
    return reinterpret_cast<CallerA *>(
        reinterpret_cast<u8 *>(link) - offsetof(ActiveCallerView, link));
}

extern "C" {
u32 FUN_0046588c(CallerA *caller);
void callerARelease78(CallerA *caller);
void FUN_001b6668(CallerActivityList *list, CallerListLink *link);
void nw_ut_internal_LinkListImpl_insert(CallerActivityList *list,
                                       CallerListLink *position, CallerListLink *link);

// Move inactive callers to the idle list, advancing before unlinking each entry.
void FUN_0051d5f4(CallerActivityOwner *owner)
{
    CallerListLink *cursor = owner->active.end.next;
    while (cursor != &owner->active.end) {
        CallerListLink *current = cursor;
        cursor = cursor->next;
        if (FUN_0046588c(activityCaller(current)) == 0) {
            callerARelease78(activityCaller(current));
            FUN_001b6668(&owner->active, current);
            nw_ut_internal_LinkListImpl_insert(&owner->idle, &owner->idle.end, current);
        }
    }
}
}
