#include "common.h"

extern "C" {

typedef struct VoiceState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 unk20;
    /* 0x22 */ u8 unk22[0x36];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
} VoiceState;

/* Constructor: clears the fields. */
void nw_snd_internal_driver_Voice_Voice_sub_object(VoiceState *state)
{
    state->unk0C = 0;
    state->unk14 = 0;
    state->unk15 = 0;
    state->unk16 = 0;
    state->unk17 = 0;
    state->unk20 = 0;
    state->unk58 = 0;
    state->unk5C = 0;
    state->unk00 = 0;
    state->unk04 = 0;
}

} /* extern "C" */
