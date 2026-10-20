/* Returns 1 if the object's sub-state is active and gameFlagIsSet accepts its handle, else 0. */
#include "common.h"

extern "C" {

typedef struct SubState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x23];
    /* 0x24 */ u32 handle;
} SubState;

typedef struct Object {
    /* 0x000 */ u8 unk000[0x9B4];
    /* 0x9B4 */ SubState sub;
} Object;

extern s32 gameFlagIsSet(u32 handle);

u32 FUN_003bf578(Object **object)
{
    SubState *sub = &(*object)->sub;
    if (sub->active == 0) {
        return 0;
    }
    return gameFlagIsSet(sub->handle) != 0;
}

}
