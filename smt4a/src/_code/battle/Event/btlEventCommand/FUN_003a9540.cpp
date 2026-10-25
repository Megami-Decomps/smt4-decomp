/* NON_MATCHING: uniform-scale helper restores XYZ argument allocation; success-result materialization and shared return branches remain different. */
#include "battle/btlMain.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
s32 scrGetCommandFrame(void);
const char *scrGetArgString(u32 index);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *owner);
void FUN_004d854c(u32 *owner);
void callOnHandleField4D(u32 *owner, f32 x, f32 y, f32 z);
void modelOwnerLoadNamed(u32 *owner, const char *name);

static __inline void battleModelSetUniformScale(u32 *owner, f32 scale)
{
    callOnHandleField4D(owner, scale, scale, scale);
}

// Load the scripted battle model, then finish once its asynchronous load completes.
u32 FUN_003a9540(void)
{
    BtlMainStateA *state = btlGetMainState();
    if (scrGetCommandFrame() != 0) {
        u32 ready = FUN_004d87e4(reinterpret_cast<void **>(state->eventModel.owner));
        if (ready != 0) {
            FUN_004d854c(state->eventModel.owner);
            battleModelSetUniformScale(state->eventModel.owner, 0.01f);
            state->eventModel.loaded = 1;
            ready = 1;
        }
        return ready;
    } else {
        const char *name = scrGetArgString(0);
        char path[64] = {};
        textFormatBuffer(path, "battle/model/%s.bam", name);
        if (state->eventModel.owner == NULL) {
            u32 *owner = (u32 *)FUN_00178b04(0x24,
                "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Event\\btlEventCommand.cpp", 0x54b);
            if (owner != NULL)
                owner = battleModelOwnerInitialize(owner);
            state->eventModel.owner = owner;
            modelOwnerLoadNamed(owner, path);
            return 0;
        }
    }
    return 1;
}
}
