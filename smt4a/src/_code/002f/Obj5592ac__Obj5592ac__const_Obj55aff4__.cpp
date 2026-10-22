/* NON_MATCHING: registry address grouping and mutex-guard frame allocation differ. */
#include "classes/Obj5592ac.h"
#include "classes/Obj55b28c.h"

struct TrackedStringRegistry {
    /* 0x00 */ Obj5592ac *first;
    /* 0x04 */ Obj5592ac *last;
    /* 0x08 */ Obj5592ac *end;
    /* 0x0C */ u32 count;
    /* 0x10 */ u8 mutex;
};

extern "C" {
extern TrackedStringRegistry g_onlineTrackedStrings;
u32 wordRefsDiffer_002fa114(Obj5592ac *const *first, Obj5592ac *const *second);
}

/* Copies the value and appends this object while holding the registry mutex. */
Obj5592ac::Obj5592ac(const Obj55aff4 &value)
    : next(NULL), previous(NULL), text(value), index(-1), unk18(0), unk1c(0), unk20(0)
{
    Obj55b28c guard(&g_onlineTrackedStrings.mutex);
    if (wordRefsDiffer_002fa114(&g_onlineTrackedStrings.first, &g_onlineTrackedStrings.end)) {
        g_onlineTrackedStrings.last->next = this;
        previous = g_onlineTrackedStrings.last;
    } else {
        g_onlineTrackedStrings.first = this;
    }
    ++g_onlineTrackedStrings.count;
    g_onlineTrackedStrings.last = this;
}
