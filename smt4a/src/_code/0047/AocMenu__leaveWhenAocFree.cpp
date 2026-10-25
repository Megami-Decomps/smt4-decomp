#include "classes/AocMenu.h"
#include "addon/aocMain.h"

extern "C" AocMain *g_aocMain;

static __inline bool aocOperationBusy(u32 flags)
{
    if (flags & 4)
        return true;
    return false;
}

static __inline bool aocOperationPending(u32 flags)
{
    if (flags & 8)
        return true;
    return false;
}

/* Unless a content flag (bit 2 or 3) is set, returns to state 3 and deletes the child. */
void AocMenu::leaveWhenAocFree()
{
    u32 flags = g_aocMain->flags;

    if (!aocOperationBusy(flags) && !aocOperationPending(flags)) {
        step = 3;
        substep = 0;
        if (window != NULL) {
            delete window;
            window = NULL;
        }
    }
}
