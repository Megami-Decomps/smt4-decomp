#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422594.h"

extern "C" AocMain* g_aocMain;

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

struct AocWindowStep {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 substate;
    /* 0x00C */ u8 unk00c[0x1fc];
    /* 0x208 */ Obj422594* window;
};

// Advance after the AOC operation finishes and release its temporary window.
void AocMenu::leaveWhenAocFree()
{
    AocWindowStep* work = reinterpret_cast<AocWindowStep*>(this);
    if (!aocOperationBusy(g_aocMain->flags) && !aocOperationPending(g_aocMain->flags)) {
        work->state = 3;
        work->substate = 0;
        if (work->window != NULL) {
            delete work->window;
            work->window = NULL;
        }
    }
}
