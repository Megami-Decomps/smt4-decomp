/* NON_MATCHING: addressed vector parameters are spilled with VPUSH and reloaded for the additions instead of retail's separate local snapshots. */
#include "shard/W5_W5Match8_CameraTransition.h"

struct FixedCamera;
struct FixedCameraModel {
    u8 unk00[0x1c];
    W5Match8Vec3 up; // 0x1c
    u8 unk028[0x26c];
    W5Match8Vec3 translation; // 0x294
};
struct FixedCameraModelHolder {
    u32 unk00;
    FixedCameraModel *model; // 0x04
};

extern "C" {
extern FixedCameraModelHolder DAT_004474f0;
extern FixedCamera g_fixedCamera;
void FUN_002c1edc(FixedCamera *, const W5Match8Vec3 *, const W5Match8Vec3 *,
                  const W5Match8Vec3 *);

void FUN_0025c238(W5Match8Vec3 eye, W5Match8Vec3 target)
{
    FixedCameraModel *model = DAT_004474f0.model;
    target.x += model->translation.x;
    target.y += model->translation.y;
    target.z += model->translation.z;
    FUN_002c1edc(&g_fixedCamera, &eye, &target, &model->up);
}
}
