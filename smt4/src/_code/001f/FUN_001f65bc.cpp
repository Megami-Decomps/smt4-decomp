/* Shuts the object down: notifies its resource when idle (state 1, value 0), frees the object and updates the global pair. */
#include "common.h"

extern "C" {

typedef struct SubState {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s32 state;
    /* 0x98 */ s32 value;
} SubState;

typedef struct Object {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ SubState sub;
    /* 0xCC */ u8 unkCC[0x40];
    /* 0x10C */ void *resource;
} Object;

extern u32 DAT_00464b7c;
extern u32 g_asdModelTransformBuilder;

extern void sceneTraverserVisit(u32 a, u32 b);
extern void asdMemFree(Object *obj);
extern void FUN_002d5604(void *resource);

void FUN_001f65bc(Object *obj)
{
    SubState *sub = &obj->sub;

    if (sub->state == 1 && sub->value == 0 && obj->resource != NULL) {
        FUN_002d5604(obj->resource);
    }
    asdMemFree(obj);
    sceneTraverserVisit(DAT_00464b7c, g_asdModelTransformBuilder);
}

}
