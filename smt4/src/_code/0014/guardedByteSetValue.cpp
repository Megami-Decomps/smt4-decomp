#include "common.h"

struct IndexedByteState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 value;
    /* 0x09 */ u8 unk09[0x27];
    /* 0x30 */ u8 locked;
};

/* A locked object does not accept value updates. */
extern "C" void guardedByteSetValue(IndexedByteState *state, u8 value)
{
    if (state->locked == 0) {
        state->value = value;
    }
}
