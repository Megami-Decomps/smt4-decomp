/* Apocalypse: the free camera ("FreeCamera PROC"): freeCameraCreate allocates its work area and starts its process,
 * freeCameraDestroy stops and frees it; a scene points it at the position it should look at. */
#ifndef GFX_FREECAMERA_H
#define GFX_FREECAMERA_H

#include "common.h"
#include <stddef.h>

struct FreeCameraWork {
    /* 0x00 */ u32 process;         /* the "FreeCamera PROC" process handle */
    /* 0x04 */ u32 mode;
    /* 0x08 */ u8 active;           /* set once a scene has given the camera its target */
    /* 0x09 */ u8 flag9;
    /* 0x0A */ u8 unk0a[2];
    /* 0x0C */ f32 value;
    /* 0x10 */ f32 *target;         /* the scene's four camera floats */
};

typedef char FreeCameraWorkCheck[offsetof(FreeCameraWork, target) == 0x10 && sizeof(FreeCameraWork) == 0x14 ? 1 : -1];

extern "C" {
extern FreeCameraWork *g_freeCamera;
/* Allocates the free camera and starts its process in `mode`. */
void freeCameraCreate(u32 mode);
/* Stops the free camera's process and frees its work area. */
void freeCameraDestroy(void);
} /* extern "C" */

#endif
