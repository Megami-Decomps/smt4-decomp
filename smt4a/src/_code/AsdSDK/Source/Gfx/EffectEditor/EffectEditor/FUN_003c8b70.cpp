/* NON_MATCHING: register allocation and constant scheduling only (retail keeps the zero vector components in a separate s-register copy and holds the work/camera pointers in r7/r8) */
#include "gfx/EffectEditorStorage.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <math.h>

/* A position or direction in the editor's orbit camera. */
struct EditorVector {
    f32 x;
    f32 y;
    f32 z;
};

/* The shared math scratch area: a 4-float working vector and the 3x4 rotation the rotate helper
   leaves behind. */
struct EditorMathWork {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vector4 axis;
    /* 0x110 */ u8 unk110[0x30];
    /* 0x140 */ f32 rotation[3][4];
};

/* The editor camera's published view direction (x, y, z, w). */
struct EditorView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 direction[4];
};

extern "C" {

extern EditorMathWork DAT_006471dc;
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
        EditorMathWork *work = &DAT_006471dc;
        work->axis.x = x;
        work->axis.y = 0.0f;
        work->axis.z = z;
        work->axis.w = 0.0f;
        f32 length = sqrtf(work->axis.x * work->axis.x + work->axis.y * work->axis.y +
                           work->axis.z * work->axis.z);
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
            work->axis.x = x;
            work->axis.y = 0.0f;
            work->axis.z = z;
            work->axis.w = 0.0f;
            f32 ax = work->axis.x;
            f32 ay = work->axis.y;
            f32 az = work->axis.z;
            f32 aw = work->axis.w;
            work->axis.x = ax * work->rotation[0][0] + ay * work->rotation[1][0] + az * work->rotation[2][0];
            work->axis.w = ax * work->rotation[0][3] + ay * work->rotation[1][3] + az * work->rotation[2][3];
            work->axis.y = ax * work->rotation[0][1] + ay * work->rotation[1][1] + az * work->rotation[2][1];
            work->axis.z = ax * work->rotation[0][2] + ay * work->rotation[1][2] + az * work->rotation[2][2];
            x = work->axis.x;
            z = work->axis.z;
            (void)aw;
        } else {
            work->axis.x = x;
            work->axis.y = 0.0f;
            work->axis.z = z;
            work->axis.w = 0.0f;
        }
        f32 magnitude = sqrtf(work->axis.x * work->axis.x + work->axis.y * work->axis.y +
                              work->axis.z * work->axis.z);
        if (magnitude > 0.0f) {
            work->axis.x = work->axis.x / magnitude;
            work->axis.y = work->axis.y / magnitude;
            work->axis.z = work->axis.z / magnitude;
        }
        DAT_0059efe0.direction[0] = work->axis.x;
        DAT_0059efe0.direction[1] = work->axis.y;
        DAT_0059efe0.direction[2] = work->axis.z;
        DAT_0059efe0.direction[3] = work->axis.w;
    }
    g_effectEditorVector.value.x = x + DAT_0059f020[0] * step;
    g_effectEditorVector.value.z = z + DAT_0059f020[2] * step;

    if (padButtonIsPressed(1) || padButtonIsPressed(FUN_00202178(1))) {
        return changed & ~1u;
    }
    return changed | 0x200000;
}
}
