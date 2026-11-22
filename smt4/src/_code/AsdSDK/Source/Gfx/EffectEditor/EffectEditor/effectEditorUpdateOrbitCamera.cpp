/* NON_MATCHING: 257 lines (181 by shape). The float registers, the frame and the calls are retail's. Retail reloads
 * the scratch vector for the first length (the build forwards the stored registers), runs the normalise through one
 * pointer in r5 where the build uses r0/r1, keeps the scratch value's address in r0 from both arms of the rotation
 * for the 12 + 4 byte copy, loads both direction components before the two products, and holds the scratch and the
 * editor vector in r7/r8 (r6/r7 here). */
#include "ui/UiSpriteApi.h"
#include "gfx/EffectEditorStorage.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <math.h>
#include "gfx/VectorScratch.h"

/* unit-local: only this function reaches the orbit camera's view block; the rest of its layout is unknown */
struct EditorView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vec3f direction;     /* unit vector from the origin toward the camera, in the ground plane */
    /* 0x2C */ f32 directionW;
};

extern "C" {

extern EditorView DAT_0044fe80;
/* The same direction (DAT_0044fe80 + 0x20): retail reads it back through its own pool word. */
extern f32 DAT_0044fea0[];
void asdDebugLog(s32 column, s32 row, s32 color, const char *text);
s32 padIsButtonRepeat(u32 button);
s32 padIsButtonPressed(u32 button);
u8 padAlternateButtonIndex(s32 index);
void FUN_003f6cd8(f32 angle);

/* Handles one frame of the editor's orbit camera keys: up/down raise or lower the camera,
   left/right turn it around the origin, R1/L1 move it toward or away from it. The result is the
   changed-state mask (bit 0 cleared when the confirm key is down, bit 21 set otherwise). */
u32 effectEditorUpdateOrbitCamera(void)
{
    u32 changed = 1;
    asdDebugLog(8, 8, 0, "UP   & DOWN : HEIGHT");
    asdDebugLog(8, 20, 0, "LEFT & RIGHT: DIR");
    asdDebugLog(8, 32, 0, "R1   & L1   : RADIUS");

    if (padIsButtonRepeat(5) || padIsButtonRepeat(padAlternateButtonIndex(5))) {
        g_effectEditorVector.value.y = g_effectEditorVector.value.y - 10.0f;
        changed = 3;
    } else if (padIsButtonRepeat(6) || padIsButtonRepeat(padAlternateButtonIndex(6))) {
        g_effectEditorVector.value.y = g_effectEditorVector.value.y + 10.0f;
        changed = 3;
    }

    f32 step = 10.0f;
    if (padIsButtonRepeat(7) || padIsButtonRepeat(padAlternateButtonIndex(7))) {
        changed |= 2;
        step = -10.0f;
    } else if (padIsButtonRepeat(8) || padIsButtonRepeat(padAlternateButtonIndex(8))) {
        changed |= 2;
    } else {
        step = 0.0f;
    }

    Vector4 position;
    position.x = g_effectEditorVector.value.x;
    position.y = 0.0f;
    position.z = g_effectEditorVector.value.z;
    position.w = 0.0f;
    if (!(position.x == 0.0f && position.z == 0.0f)) {
        g_vectorScratch.first.vector = position;
        f32 length = sqrtf(g_vectorScratch.first.vector.x * g_vectorScratch.first.vector.x +
                           g_vectorScratch.first.vector.y * g_vectorScratch.first.vector.y +
                           g_vectorScratch.first.vector.z * g_vectorScratch.first.vector.z);
        f32 angle = 0.0f;
        if (padIsButtonRepeat(3) || padIsButtonRepeat(padAlternateButtonIndex(3))) {
            changed |= 2;
            angle = (100.0f / length) * 0.08726646f;
        } else if (padIsButtonRepeat(4) || padIsButtonRepeat(padAlternateButtonIndex(4))) {
            changed |= 2;
            angle = (100.0f / length) * -0.08726646f;
        }
        if (angle != 0.0f) {
            FUN_003f6cd8(angle);
            g_vectorScratch.first.vector = position;
            scratchRotate(&g_vectorScratch.first.vector);
            position = g_vectorScratch.first.vector;
        } else {
            g_vectorScratch.first.vector = position;
        }
        vec3Normalize(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector);
        DAT_0044fe80.direction = g_vectorScratch.first.direction;
        DAT_0044fe80.directionW = g_vectorScratch.first.vector.w;
    }
    g_effectEditorVector.value.x = position.x + DAT_0044fea0[0] * step;
    g_effectEditorVector.value.z = position.z + DAT_0044fea0[2] * step;

    if (padIsButtonPressed(1) || padIsButtonPressed(padAlternateButtonIndex(1))) {
        return changed & ~1u;
    }
    return changed | 0x200000;
}
}
