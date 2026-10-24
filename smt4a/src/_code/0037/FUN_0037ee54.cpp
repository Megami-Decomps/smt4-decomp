/* NON_MATCHING: retail loads the matrix rows as 4-float vldmia groups and the vector components singly, then multiplies in a different register order; ours loads the elements separately. */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {

/* The camera scratch block, extended to the transform matrix at 0x140. */
struct CameraScratchTransform {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vector4 direction;
    /* 0x110 */ u8 unk110[0x30];
    /* 0x140 */ Matrix44 transform;
};

extern CameraScratchTransform DAT_006471dc;

// Transforms the scratch direction by the scratch matrix (row vector times matrix, w ignored).
void FUN_0037ee54(void)
{
    const f32 (*m)[4] = (const f32 (*)[4])DAT_006471dc.transform.values;
    Vector4 *v = &DAT_006471dc.direction;
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;

    Vector4 result;

    result.x = x * m[0][0] + y * m[1][0] + z * m[2][0];
    result.y = x * m[0][1] + y * m[1][1] + z * m[2][1];
    result.z = x * m[0][2] + y * m[1][2] + z * m[2][2];
    result.w = x * m[0][3] + y * m[1][3] + z * m[2][3];
    *v = result;
}

}
