/* NON_MATCHING: retail uses `ldr r1, [pc, #48]` where armcc emits `ldr r1, [pc, #44]`. */
#include "common.h"

extern "C" {

struct MessageState { u8 unk0000[0x1a10]; u8 active; u8 unk1a11[0xb]; f32 values[3]; };
struct MessageMain { u32 unk00[2]; MessageState *state; };
extern MessageMain g_messageMain;

f32 messageGetActiveValue(u32 index)
{
    MessageState *state = g_messageMain.state;
    f32 value = 0.0f;
    if (state->active && index < 3) {
        value = state->values[index];
    }
    return value;
}

} /* extern "C" */
