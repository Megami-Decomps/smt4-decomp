#include "common.h"

extern "C" {

struct MessageState { u8 unk0000[0x1a11]; u8 flags[4]; };
struct MessageMain { u32 unk00[2]; MessageState *state; };
extern MessageMain g_messageMain;

void messageSetIndexedFlag(u32 index, u8 value)
{
    MessageState *state = g_messageMain.state;
    if (index < 4) {
        state->flags[index] = value;
    }
}

} /* extern "C" */
