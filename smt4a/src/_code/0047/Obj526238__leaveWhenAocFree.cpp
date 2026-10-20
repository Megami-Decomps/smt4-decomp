/* NON_MATCHING: retail tests bits 2 and 3 with separate tst/tsteq instructions; armcc merges the two masks into one tst #12 */
#include "classes/Obj526238.h"
#include "addon/aocMain.h"

extern "C" AocMain *g_aocMain;

static __inline u32 aocFlagBit2(u32 flags)
{
    return (flags & 4) >> 2;
}

static __inline u32 aocFlagBit3(u32 flags)
{
    return (flags & 8) >> 3;
}

/* Unless a content flag (bit 2 or 3) is set, returns to state 3 and deletes the child. */
void Obj526238::leaveWhenAocFree()
{
    u32 flags = g_aocMain->flags;

    if (aocFlagBit2(flags) == 0 && aocFlagBit3(flags) == 0) {
        state = 3;
        substate = 0;
        if (child != NULL) {
            delete child;
            child = NULL;
        }
    }
}
