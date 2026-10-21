/* NON_MATCHING: retail emits 'ldr r1, [pc, #44]'; compiler emits 'ldr r2, [pc, #44]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x1383]; u8 flag; } *g_videoGlobals;
extern struct { u32 reserved; struct { u8 unk00[0x2018]; u32 kind; } *work; } g_messageState;
void FUN_002c85b0(u32 value) {
    g_videoGlobals->flag = value == 8;
    if (value == 8) value = 3;
    g_messageState.work->kind = value;
}
}
