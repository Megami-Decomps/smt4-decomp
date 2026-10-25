/* NON_MATCHING: same dataflow, but retail copies the 4-float vectors with vldmia/vstmia (and a vstmia+str pair for the 3-float copy) where built uses ldm/stm and per-word copies; the vector class that causes this is not recovered */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

struct Vec3 {
    f32 x, y, z;
};

struct Vec4 {
    f32 x, y, z, w;
};

struct CameraState {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vec4 target;
};

extern CameraState DAT_006471dc;
extern Vec4 DAT_005c1120;

void FUN_002a1850(Vec4 *out, s32 mode, f32 amount, const Vec3 *in);

/* Saves the camera target, advances it by the current step and returns the resulting z. */
f32 FUN_002cf548(void)
{
    Vec4 result;
    Vec3 current;
    f32 amount = FUN_00152f54();

    DAT_005c1120 = DAT_006471dc.target;
    current.x = DAT_006471dc.target.x;
    current.y = DAT_006471dc.target.y;
    current.z = DAT_006471dc.target.z;
    FUN_002a1850(&result, 0, amount, &current);
    result.w = 0.0f;
    DAT_006471dc.target = result;
    return result.z;
}

} /* extern "C" */
