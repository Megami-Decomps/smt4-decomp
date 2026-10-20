#include "common.h"

extern "C" {

typedef struct MessageState002e6134 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 box;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ u32 flags;
    /* 0x10 */ u8 unk10[0x85];
    /* 0x95 */ u8 mode;
} MessageState002e6134;

typedef struct MessageMain002e6134 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageState002e6134 *state;
} MessageMain002e6134;

void msgBoxFlagsClearBit7(u32 box);

extern MessageMain002e6134 g_messageMain; /* 0x57f588 */

/* Ends the message window's mode 2; clears the box's bit 7 unless the state's flag 0x20 is set. */
void messageStateEndMode2(void)
{
    MessageState002e6134 *state = g_messageMain.state;

    if (state != NULL && state->mode == 2) {
        state->mode = 0;
        if ((state->flags & 0x20) == 0) {
            msgBoxFlagsClearBit7(state->box);
        }
    }
}

} /* extern "C" */
