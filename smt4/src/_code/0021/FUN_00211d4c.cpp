/* Handles the pending request: returns 1 when it is consumed (or no handle), 0 when it must wait; sets a small backwards nudge on the handle's slot in the idle cases. */
#include "common.h"

extern "C" {

typedef struct Handle {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 mode;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ f32 nudge;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u8 nudged;
    /* 0x31 */ u8 unk31[0x33];
    /* 0x64 */ u8 waiting;
} Handle;

extern s32 FUN_002893d8(void);
extern s32 jobIsValid(void);
extern Handle *jobGetWork(u32 id);
extern void jobStop(u32 id, s32 arg);
extern u32 eventTexGetCurrent(void);

u32 FUN_00211d4c(void)
{
    u32 id = eventTexGetCurrent();
    Handle *handle;

    if (jobIsValid() != 0) {
        handle = jobGetWork(id);
        if (handle->mode == 1) {
            jobStop(id, 0);
            return 1;
        }
        if (handle->waiting != 0) {
            if (FUN_002893d8() == 0) {
                handle->nudged = 1;
                handle->nudge = -0.1f;
            }
            return 0;
        }
        handle->nudged = 1;
        handle->nudge = -0.25f;
    }
    return 1;
}

}
