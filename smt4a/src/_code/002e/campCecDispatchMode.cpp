#include "common.h"
extern "C" {
extern struct { u32 reserved; struct { u8 unk00[0x174]; s32 mode; } *work; } g_campCec;
void FUN_0037b5e0(s32 mode, u32 value);
void campCecDispatchMode(u32 value) {
    if (g_campCec.work && g_campCec.work->mode && value)
        FUN_0037b5e0(g_campCec.work->mode, value);
}
}
