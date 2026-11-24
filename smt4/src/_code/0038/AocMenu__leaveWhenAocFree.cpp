#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422594.h"

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
    if (!aocMainIsBusy(g_aocMain)) {
        work->state = 3;
        work->substate = 0;
        if (work->window != NULL) {
            delete work->window;
            work->window = NULL;
        }
    }
}
