/* NON_MATCHING: retail emits 'ldr r1, [pc, #48]'; compiler emits 'ldr r1, [pc, #40]' at the first differing instruction. */
#include "ui/MessageMainA.h"
extern "C" {
s32 messageBannerStartCounter(u32 value) {
    g_messageMain.banner->counterState = 3;
    g_messageMain.banner->counterDelta = value;
    g_messageMain.banner->counterElapsed = value;
    g_messageMain.banner->unk0093 = 0;
    g_messageMain.banner->counterDuration = 1;
    return 1;
}
}
