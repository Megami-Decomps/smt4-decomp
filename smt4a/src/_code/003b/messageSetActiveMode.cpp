#include "common.h"
#include "shard/messageSetActiveMode.h"

extern "C" {

struct MessageState { u8 unk00[0x84]; s32 value; u8 unk88[4]; u8 active; u8 unk8d[5]; u8 dirty; };
struct MessageMain { u32 unk00[2]; MessageState *state; };
extern MessageMain g_messageMain;

s32 messageSetActiveMode(s32 enabled)
{
    MessageState *state = g_messageMain.state;
    state->dirty = 1;
    state->active = 1;
    if (enabled != 0) {
        state->value = -1;
    } else {
        state->value = 1;
    }
    return 1;
}

} /* extern "C" */
