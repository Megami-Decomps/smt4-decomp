/* NON_MATCHING: transition resets reuse the cached zero instead of retail's fresh zero registers; common-return layout also differs. */
#include "common.h"

struct CleanupProcessState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 stage;
    /* 0x10 */ s32 timer;
    /* 0x14 */ u8 unk14[0x14];
    /* 0x28 */ void *script;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 entry;
    /* 0x34 */ u8 unk34[0xc];
    /* 0x40 */ u8 alternateSound;
};

extern "C" {
s32 FUN_00416e60(CleanupProcessState *state);
s32 FUN_0041704c(CleanupProcessState *state);
s32 FUN_00417234(CleanupProcessState *state);
s32 FUN_0041774c(CleanupProcessState *state);
void scrScriptProcessStartEntry(void *script, u32 entry);
void scrRunOpcodesStub(void *script);
void FUN_00371ef4(void);
void FUN_003d2150(u32 value);
s32 stateHolderStateIsNot4(void);
s32 FUN_0023b3d0(void);
void FUN_0034a968(void);
void sysPlaySe(u32 sound);
void FUN_0022e774(void);
void FUN_002a7288(void);
s32 FUN_0026c3a0(void);
s32 FUN_002effbc(void);
s32 aocDataBlockHasEntries(void);
void FUN_0019de98(u32 first, u32 color);
}

/* Drive the script and asynchronous cleanup phases until the process can finish. */
extern "C" s32 cleanupProcessUpdate(CleanupProcessState *process)
{
    switch (process->state) {
    case 1:
        return FUN_00416e60(process);
    case 2:
        return FUN_0041704c(process);
    case 3:
        switch (process->stage) {
        case 0:
            scrScriptProcessStartEntry(process->script, process->entry);
            FUN_00371ef4();
            FUN_003d2150(0x01000219);
            process->stage = 1;
        case 1:
            scrRunOpcodesStub(process->script);
            if (!stateHolderStateIsNot4() || !FUN_0023b3d0())
                break;
            FUN_0034a968();
            process->stage = 2;
        case 2:
            process->state = 5;
            process->stage = 0;
            process->timer = 0;
            sysPlaySe(process->alternateSound ? 0x11d : 0x67);
            break;
        }
        return 0;
    case 4:
        return FUN_00417234(process);
    case 5:
        return FUN_0041774c(process);
    case 6:
        switch (process->stage) {
        case 0:
            FUN_0022e774();
            FUN_002a7288();
            process->stage = 1;
        case 1:
            if (!FUN_0026c3a0() || !FUN_002effbc())
                break;
            process->stage = 2;
        case 2:
            if (!aocDataBlockHasEntries())
                break;
            process->stage = 3;
        case 3:
            FUN_0019de98(0, 0xf4f4f4ff);
            process->timer = 0;
            process->state = 7;
            process->stage = 0;
            break;
        }
        return 0;
    case 7:
        return -1;
    default:
        return 0;
    }
}
