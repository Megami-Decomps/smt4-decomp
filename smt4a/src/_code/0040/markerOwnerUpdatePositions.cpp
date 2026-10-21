#include "common.h"

extern "C" {

typedef struct Vec3 {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3;

typedef struct Marker {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} Marker;

typedef struct MarkerOwner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Marker *markers[3];
    /* 0x28 */ u8 unk28[0x24];
    /* 0x4C */ Vec3 position;
} MarkerOwner;

extern void controllerSetPosition(u32 handle, Vec3 position);

/* Moves each of the owner's three markers to its position. */
void markerOwnerUpdatePositions(MarkerOwner *owner)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        if (owner->markers[i] != NULL) {
            controllerSetPosition(owner->markers[i]->handle, owner->position);
        }
    }
}

} /* extern "C" */
