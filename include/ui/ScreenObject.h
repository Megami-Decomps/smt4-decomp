#ifndef UI_SCREENOBJECT_H
#define UI_SCREENOBJECT_H

#include "common.h"

struct ScreenVec2 {
    f32 x, y;
};

/* An object with a 2D size at 0x50. */
struct ScreenObject {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ ScreenVec2 size;
};

#ifdef __cplusplus
extern "C" {
#endif

/* Clamps a scroll offset into [0, size - (400, 240)]. */
void uiClampScrollOffset(ScreenObject *object, f32 *offset);

#ifdef __cplusplus
}
#endif

#endif
