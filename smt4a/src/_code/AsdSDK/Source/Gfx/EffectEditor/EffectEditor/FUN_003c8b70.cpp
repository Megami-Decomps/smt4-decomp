/* NON_MATCHING: register allocation and constant scheduling only (retail keeps the zero vector components in a separate s-register copy and holds the work/camera pointers in r7/r8) */
#include "gfx/EffectEditorStorage.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <math.h>
#include "gfx/VectorScratch.h"

/* A position or direction in the editor's orbit camera. */
struct EditorVector {
    f32 x;
    f32 y;
    f32 z;
};

/* The shared math scratch area: a 4-float working vector and the 3x4 rotation the rotate helper
   leaves behind. */

/* The editor camera's published view direction (x, y, z, w). */
struct EditorView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 direction[4];
};

extern "C" {

extern EditorView DAT_0059efe0;
extern f32 DAT_0059f020[];
void asdDebugLog(s32 column, s32 row, s32 color, const char *text);
s32 padButtonRepeat(u32 button);
s32 padButtonIsPressed(u32 button);
u8 FUN_00202178(s32 index);
void FUN_00514878(f32 angle);

/* Handles one frame of the editor's orbit camera keys: up/down raise or lower the camera,
   left/right turn it around the origin, R1/L1 move it toward or away from it. The result is the
   changed-state mask (bit 0 cleared when the confirm key is down, bit 21 set otherwise). */
u32 FUN_003c8b70(void)
{
    u32 changed = 1;
    asdDebugLog(8, 8, 0, "UP  & DOWN : HEIGHT");
    asdDebugLog(8, 20, 0, "LEFT & RIGHT : DIR");
    asdDebugLog(8, 32, 0, "R1  & L1   : RADIUS");

    f32 step = 10.0f;
    if (padButtonRepeat(5) || padButtonRepeat(FUN_00202178(5))) {
        g_effectEditorVector.value.y = g_effectEditorVector.value.y - step;
        changed = 3;
    } else if (padButtonRepeat(6) || padButtonRepeat(FUN_00202178(6))) {
        g_effectEditorVector.value.y = g_effectEditorVector.value.y + step;
        changed = 3;
    }

    if (padButtonRepeat(7) || padButtonRepeat(FUN_00202178(7))) {
        changed |= 2;
        step = -10.0f;
    } else if (padButtonRepeat(8) || padButtonRepeat(FUN_00202178(8))) {
        changed |= 2;
    } else {
        step = 0.0f;
    }

    f32 x = g_effectEditorVector.value.x;
    f32 z = g_effectEditorVector.value.z;
    if (!(x == 0.0f && z == 0.0f)) {
        VectorScratch *work = &g_vectorScratch;
        work->first.vector.x = x;
        work->first.vector.y = 0.0f;
        work->first.vector.z = z;
        work->first.vector.w = 0.0f;
        f32 length = sqrtf(work->first.vector.x * work->first.vector.x + work->first.vector.y * work->first.vector.y +
                           work->first.vector.z * work->first.vector.z);
        f32 angle = 0.0f;
        if (padButtonRepeat(3) || padButtonRepeat(FUN_00202178(3))) {
            changed |= 2;
            angle = (100.0f / length) * 0.08726646f;
        } else if (padButtonRepeat(4) || padButtonRepeat(FUN_00202178(4))) {
            changed |= 2;
            angle = (100.0f / length) * -0.08726646f;
        }
        if (angle != 0.0f) {
            FUN_00514878(angle);
            work->first.vector.x = x;
            work->first.vector.y = 0.0f;
            work->first.vector.z = z;
            work->first.vector.w = 0.0f;
            f32 ax = work->first.vector.x;
            f32 ay = work->first.vector.y;
            f32 az = work->first.vector.z;
            f32 aw = work->first.vector.w;
            work->first.vector.x = ax * work->matrix.rows[0][0] + ay * work->matrix.rows[1][0] + az * work->matrix.rows[2][0];
            work->first.vector.w = ax * work->matrix.rows[0][3] + ay * work->matrix.rows[1][3] + az * work->matrix.rows[2][3];
            work->first.vector.y = ax * work->matrix.rows[0][1] + ay * work->matrix.rows[1][1] + az * work->matrix.rows[2][1];
            work->first.vector.z = ax * work->matrix.rows[0][2] + ay * work->matrix.rows[1][2] + az * work->matrix.rows[2][2];
            x = work->first.vector.x;
            z = work->first.vector.z;
            (void)aw;
        } else {
            work->first.vector.x = x;
            work->first.vector.y = 0.0f;
            work->first.vector.z = z;
            work->first.vector.w = 0.0f;
        }
        f32 magnitude = sqrtf(work->first.vector.x * work->first.vector.x + work->first.vector.y * work->first.vector.y +
                              work->first.vector.z * work->first.vector.z);
        if (magnitude > 0.0f) {
            work->first.vector.x = work->first.vector.x / magnitude;
            work->first.vector.y = work->first.vector.y / magnitude;
            work->first.vector.z = work->first.vector.z / magnitude;
        }
        DAT_0059efe0.direction[0] = work->first.vector.x;
        DAT_0059efe0.direction[1] = work->first.vector.y;
        DAT_0059efe0.direction[2] = work->first.vector.z;
        DAT_0059efe0.direction[3] = work->first.vector.w;
    }
    g_effectEditorVector.value.x = x + DAT_0059f020[0] * step;
    g_effectEditorVector.value.z = z + DAT_0059f020[2] * step;

    if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1))) {
        return changed & ~1u;
    }
    return changed | 0x200000;
}
}
