/* NON_MATCHING: retail stores writeCount before loading nextMessageIndex/messageCount as one ldrd; this build loads the pair (ldm) first and stores both counters after. */
#include "shard/W6_W6Match1_CriticalSection.h"

struct InboxMessageSlotView {
    u8 unk00[0x4c]; // 0x00
};

struct InboxReadStateView {
    u32 unk00;                         // 0x00
    u32 inboxHandle;                   // 0x04
    u8 unk08[0x64];                    // 0x08
    s32 nextMessageIndex;              // 0x6c
    s32 messageCount;                  // 0x70
    u32 unk74;                         // 0x74
    u32 writeCount;                    // 0x78
    u32 readCount;                     // 0x7c
    InboxMessageSlotView messages[12]; // 0x80
    u8 unk410[0x10];                   // 0x410
    u8 lock[4];                        // 0x420: nn::os::CriticalSection storage (opaque here)
};

extern "C" {
s32 cecInboxReadMessages(u32 inboxHandle, void* destination,
                         s32 messageIndex, u32 count);
}

// Read messages into the locked ring, waiting for space until the final index is reached.
extern "C" void FUN_001dc684(InboxReadStateView* state)
{
    for (;;) {
        ScopedCriticalLock lock(static_cast<void *>(state->lock));
        if (state->writeCount - state->readCount < 12u) {
            cecInboxReadMessages(state->inboxHandle,
                                &state->messages[state->writeCount % 12u],
                                state->nextMessageIndex, 1);
            ++state->writeCount;
            if (++state->nextMessageIndex >= state->messageCount) {
                return;
            }
        }
    }
}
