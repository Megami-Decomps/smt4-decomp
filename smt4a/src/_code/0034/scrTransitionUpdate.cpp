#include "common.h"

extern "C" {

struct ScriptTransition {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 started;
    /* 0x0c */ u32 previousState;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 groupId;
    /* 0x18 */ void *process;
    /* 0x1c */ u8 unk1c[0x10];
    /* 0x2c */ u32 counter;
    /* 0x30 */ u32 mode;
};
extern ScriptTransition *DAT_0058812c;
extern u8 DAT_00533204[];
void FUN_003e36e4(ScriptTransition *work);
void FUN_003e32b0(ScriptTransition *work);
void FUN_003e37f8(ScriptTransition *work);
void FUN_003e3bcc(ScriptTransition *work);
s32 tableGroupFindEntryIndex(u32 id, void *group);
void scrScriptProcessStartEntry(void *process, s32 index);
s32 scrRunOpcodesStub(void *process);

s32 scrTransitionUpdate(void)
{
    ScriptTransition *work = DAT_0058812c;
    if (work == NULL) {
        return 0;
    }
    switch (work->state) {
    case 1: FUN_003e36e4(work); break;
    case 3: FUN_003e32b0(work); break;
    case 4: FUN_003e37f8(work); break;
    case 5: FUN_003e3bcc(work); break;
    case 6:
        switch (work->started) {
        case 0: {
            s32 index = tableGroupFindEntryIndex(work->groupId, DAT_00533204);
            if (index >= 0) {
                scrScriptProcessStartEntry(work->process, index);
            }
            work->started = 1;
            break;
        }
        case 1:
            if (scrRunOpcodesStub(work->process) == 2) {
                work->previousState = work->state;
                work->started = 0;
                work->state = 7;
            }
            break;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
