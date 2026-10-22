#include "common.h"

struct ObjectFlagState {
    /* 0x00 */ u8 unk00[0x8a];
    /* 0x8A */ s8 flag;
};

/* Read the signed flag stored by the owning object. */
extern "C" s32 objectGetSignedFlag(const ObjectFlagState *state)
{
    return state->flag;
}
