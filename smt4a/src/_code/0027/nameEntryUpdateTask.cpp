#include "name/nameMain.h"
#include "shard/W6_W6Match3_NameFormStateA.h"

struct NameEntryWorkA {
    /* 0x00 */ NameWork state;
    /* 0x10 */ NameFormStateA form;
};

extern "C" {
void sequenceRequestFlushDeferred();
u32 sequenceRequestIsPending();
void screenCloseDestroy(NameFormStateA *form);
extern NameGlobals g_name;

u32 nameEntryUpdateTask()
{
    NameEntryWorkA *work = reinterpret_cast<NameEntryWorkA *>(g_name.work);
    switch (work->state.phase) {
    case 0:
        work->state.phase = 1;
        break;
    case 1:
        nameFormUpdate(&work->form);
        if (work->form.complete) {
            work->state.phase = 2;
        }
        break;
    case 2:
        screenCloseDestroy(&work->form);
        work->state.done = 1;
        work->state.phase = 3;
        break;
    case 3:
        if (sequenceRequestIsPending()) {
            sequenceRequestFlushDeferred();
        }
        return ~0u;
    default:
        break;
    }
    return 0;
}
}
