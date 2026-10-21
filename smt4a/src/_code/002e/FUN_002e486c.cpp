/* NON_MATCHING: retail emits 'ldr r1, [pc, #48]'; compiler emits 'ldr r1, [pc, #40]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct {
    u32 reserved[2];
    struct {
        u8 pad[0x74];
        u32 state;
        u8 gap[8];
        u32 first,second;
        u8 more[5];
        u8 kind;
        u8 gap2[5];
        u8 pending;
    } *work;
}
g_messageMain;
s32 FUN_002e486c(u32 value) {
    g_messageMain.work->kind=3;
    g_messageMain.work->first=value;
    g_messageMain.work->second=value;
    g_messageMain.work->pending=0;
    g_messageMain.work->state=1;
    return 1;
}
}
