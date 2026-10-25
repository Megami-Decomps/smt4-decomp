#include "shard/W5_W5Match8_CameraTransition.h"

struct LocalCamera;
struct LocalCameraModel {
    u8 unk00[0x20];
    W5Match8Vec3 up; // 0x20
    u8 unk02c[0x270];
    W5Match8Vec3 translation; // 0x29c
};
struct LocalCameraModelHolder {
    u32 unk00;
    LocalCameraModel *model; // 0x04
};

extern "C" {
extern LocalCameraModelHolder DAT_005806a0;
extern LocalCamera g_localCamera;
void FUN_0014f0dc(LocalCamera *, const W5Match8Vec3 *, const W5Match8Vec3 *,
                  const W5Match8Vec3 *);

void FUN_00324b68(W5Match8Vec3 eye, W5Match8Vec3 target)
{
    W5Match8Vec3 destination = target;
    W5Match8Vec3 position = eye;
    LocalCameraModel *model = DAT_005806a0.model;
    destination.x += model->translation.x;
    destination.y += model->translation.y;
    destination.z += model->translation.z;
    FUN_0014f0dc(&g_localCamera, &position, &destination, &model->up);
}
}
