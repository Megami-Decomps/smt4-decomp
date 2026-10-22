#include "name/nameMain.h"
#include "shard/W6_W6Match3_NameFormState.h"

struct NameEntryWork {
    /* 0x00 */ NameWork state;
    /* 0x10 */ NameFormState form;
};

extern "C" {
void sequenceRequestFlushDeferred();
u32 sequenceRequestIsDeferred();
void FUN_00397aa4(NameFormState *form);
extern NameGlobals g_name;

u32 nameEntryUpdateTask()
{
    NameEntryWork *work = reinterpret_cast<NameEntryWork *>(g_name.work);
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
        FUN_00397aa4(&work->form);
        work->state.done = 1;
        work->state.phase = 3;
        break;
    case 3:
        if (sequenceRequestIsDeferred()) {
            sequenceRequestFlushDeferred();
        }
        return ~0u;
    default:
        break;
    }
    return 0;
}
}
