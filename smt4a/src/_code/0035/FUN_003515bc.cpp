#include "common.h"

struct State {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ s32 limit;
    /* 0x50 */ u8 unk50[4];
    /* 0x54 */ u8 locked;
};

struct Object {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ State *state;
};

extern "C" s32 FUN_003515bc(Object *object)
{
    State *state = object->state;
    s32 count = state->count;
    s32 limit = state->limit;

    if (state->locked != 0) {
        return 0;
    }
    if (count == 0) {
        return limit;
    }
    if (limit == 0) {
        return 1;
    }
    if (count <= limit) {
        return count;
    }
    return limit;
}
