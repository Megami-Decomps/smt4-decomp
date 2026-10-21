/* NON_MATCHING: compiler places the shared return after the direct-delta path instead of before it; in-memory O2 also differs. */
#include "shard/W4_W4Match5b_MessageMain.h"

struct MessageCounterTransition {
    u8 unk000[0x170];
    u32 duration; // 0x170
    u32 remaining; // 0x174
    s32 currentValue; // 0x178
    u8 state; // 0x17c
    u8 unk17d[0x0b];
    s32 delta; // 0x188
};

extern "C" {
s32 FUN_00480c28(void);

// Animate the banner counter toward the current total or by a supplied delta.
u32 messageCounterBeginTransition(u32 value, s32 useTotal)
{
    MessageCounterTransition *transition = (MessageCounterTransition *)g_messageMain.banner;
    if (useTotal != 0) {
        s32 total = FUN_00480c28();
        transition->duration = value;
        transition->state = 3;
        transition->remaining = value;
        transition->delta = total - transition->currentValue;
        return 1;
    }
    transition->duration = 20;
    transition->state = 3;
    transition->remaining = 20;
    transition->delta = value;
    return 1;
}
}
