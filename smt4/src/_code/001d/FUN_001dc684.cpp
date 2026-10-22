/* NON_MATCHING: Retail ldr r6, [pc, #136] differs from recovered ldr r6, [pc, #140]. */
#include "common.h"

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
    u8 unk420;                         // 0x420: start of critical section storage
};

extern "C" {
s32 cecInboxReadMessages(u32 inboxHandle, void* destination,
                         s32 messageIndex, u32 count);
void nn_os_CriticalSection_Enter(void* criticalSection);
void nn_os_CriticalSection_Leave(void* criticalSection);
}

// Read messages into the locked ring, waiting for space until the final index is reached.
extern "C" void FUN_001dc684(InboxReadStateView* state)
{
    void* criticalSection = &state->unk420;

    for (;;) {
        nn_os_CriticalSection_Enter(criticalSection);
        if (state->writeCount - state->readCount < 12u) {
            cecInboxReadMessages(state->inboxHandle,
                                &state->messages[state->writeCount % 12u],
                                state->nextMessageIndex, 1);
            ++state->writeCount;
            if (++state->nextMessageIndex >= state->messageCount) {
                nn_os_CriticalSection_Leave(criticalSection);
                return;
            }
        }
        nn_os_CriticalSection_Leave(criticalSection);
    }
}
