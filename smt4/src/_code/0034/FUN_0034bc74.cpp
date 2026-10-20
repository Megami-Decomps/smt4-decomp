#include "common.h"

extern "C" {

typedef struct ResourceState {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 mode;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} ResourceState;

typedef struct Resource {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ ResourceState *state;
} Resource;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ Resource *resource;
} Entry; /* 0x44 */

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Entry *entries;
} Holder;

extern s32 resourceIsReady(Resource *resource);

/* Puts the first two entries' resources into mode 2 once they are ready; 1 when both were. */
u32 FUN_0034bc74(Holder *holder)
{
    u32 allReady = 1;
    s32 i;

    for (i = 0; i < 2; i++) {
        if (resourceIsReady(holder->entries[i].resource) == 0) {
            allReady = 0;
        } else {
            holder->entries[i].resource->state->unk3C = 1;
            holder->entries[i].resource->state->unk40 = 1;
            holder->entries[i].resource->state->mode = 2;
        }
    }
    return allReady;
}

} /* extern "C" */
