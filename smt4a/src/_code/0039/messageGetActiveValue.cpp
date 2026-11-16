/* NON_MATCHING: retail places the 0.0f literal before g_messageMain in the pool. */
#include "common.h"

extern "C" {

struct MessageState { u8 unk0000[0x1a10]; u8 active; u8 unk1a11[0xb]; f32 values[3]; };
struct MessageMain { u32 unk00[2]; MessageState *state; };
extern MessageMain g_messageMain;

f32 messageGetActiveValue(u32 index)
{
    f32 value = 0.0f;
    MessageState *state = g_messageMain.state;
    if (state->active && index < 3) {
        value = state->values[index];
    }
    return value;
}

} /* extern "C" */
