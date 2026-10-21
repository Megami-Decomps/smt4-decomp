/* NON_MATCHING: compiler forwards kind to r3 earlier and reuses r5 rather than ip for the outgoing-stack cursor. */
#include "shard/W4_W4Match5b_MessageMain.h"

extern "C" {
void FUN_0028dcf4(MessageObject *, u32);
void FUN_0028e6d0(MessageObject *, u32, u32, u32, u32, u32, u32);

// Select the message layout and open the requested message.
void FUN_001ed64c(u32 kind, u32 message, u32 argument)
{
    MessageObject *state = g_messageMain.state;
    state->message.empty = 0;
    FUN_0028dcf4(state, kind);
    FUN_0028e6d0(state, message, argument, kind, 0, 2, 0);
}
}
