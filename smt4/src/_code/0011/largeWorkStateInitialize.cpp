/* NON_MATCHING: constructor pointer chaining and packed flag initialization are not recovered; the readable value-array clear lowers to memclr instead of retail's 57 scalar stores. */
#include "common.h"

struct WorkResult {
    u32 code, detail;
};

struct LargeWorkState {
    /* 0x000 */ u32 size;
    /* 0x004 */ u16 flags;
    /* 0x006 */ u16 unk006;
    /* 0x008 */ u8 base[0x310];
    /* 0x318 */ u32 baseFlag;
    /* 0x31c */ u8 enabled;
    /* 0x31d */ u8 unk31d[3];
    /* 0x320 */ WorkResult result;
    /* 0x328 */ u32 mode;
    /* 0x32c */ u32 count;
    /* 0x330 */ u8 active;
    /* 0x331 */ u8 parameters[16];
    /* 0x341 */ u8 unk341[7];
    /* 0x348 */ WorkResult secondaryResult;
    /* 0x350 */ u8 unk350[0xc];
    /* 0x35c */ u32 values[57];
    /* 0x440 */ u32 valueCount;
    /* 0x444 */ s32 selected;
};

extern "C" {
void *clearU64(void *base);
WorkResult *_ZN18WindowStatusResultC1Ev(WorkResult *);
WorkResult *_ZN18WindowStatusResultC1Ej(WorkResult *, u32 code);

// Initialize the large work block's base, result state, parameters and value slots.
void largeWorkStateInitialize(LargeWorkState *state)
{
    clearU64(state->base);
    state->enabled = 1;
    _ZN18WindowStatusResultC1Ev(&state->result);
    state->mode = 0;
    state->count = 0;
    WorkResult result;
    state->result = *_ZN18WindowStatusResultC1Ej(&result, 0);
    _ZN18WindowStatusResultC1Ev(&state->secondaryResult);
    state->baseFlag = 0;
    state->active = 0;
    state->flags = 0;
    state->size = 0xe5c;
    for (u32 index = 0; index < sizeof(state->parameters); ++index) {
        state->parameters[index] = 0;
    }
    for (u32 index = 0; index < sizeof(state->values) / sizeof(state->values[0]); ++index) {
        state->values[index] = 0;
    }
    state->selected = -1;
    state->valueCount = 0;
}
}
