#include "common.h"

extern "C" {

/* A scene work block with a two-step script start; only the fields this state function uses are named. */
typedef struct ScriptStartWork {
    /* 0x000 */ u8 unk000[0x360];
    /* 0x360 */ u32 script;
    /* 0x364 */ u8 unk364[0x4C];
    /* 0x3B0 */ u32 result;
    /* 0x3B4 */ u8 unk3B4[8];
    /* 0x3BC */ s32 step;
    /* 0x3C0 */ u8 unk3C0[0x1C];
    /* 0x3DC */ u32 flags;
} ScriptStartWork;

void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
u32 maskToCode(void);

/* State function: starts script entry 0x22, then waits for it to finish (result 3 once done). */
u32 FUN_0035a7c4(ScriptStartWork *work)
{
    u32 status = 0;

    switch (work->step) {
    case 0:
        scrScriptProcessStartEntry(work->script, 0x22);
        work->step++;
        break;
    case 1:
        if (scrRunOpcodesStub(work->script) == 2) {
            work->flags &= ~0x10u;
            work->step = 0;
            work->result = maskToCode();
            status = 3;
        }
        break;
    }
    return status;
}

} /* extern "C" */
