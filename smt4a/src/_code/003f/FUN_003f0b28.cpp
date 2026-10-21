/* NON_MATCHING: typed vector copies retain the camera pointer; retail reloads it after each copied vector. */
#include "shard/W5_W5Match8_CameraTransition.h"

struct BattleCameraSnapshot {
    W5Match8Vec3 position;
    W5Match8Vec3 target;
    u32 parameter;
};
struct BattleCameraSource {
    u8 unk00[0x1c];
    BattleCameraSnapshot snapshot; // 0x1c
};
struct BattleCameraOwner {
    u8 unk0000[0x1ee0];
    BattleCameraSnapshot snapshot; // 0x1ee0
};

extern "C" {
extern BattleCameraSource *g_btlCamera;

void FUN_003f0b28(BattleCameraOwner *owner)
{
    if (g_btlCamera != NULL) {
        owner->snapshot.position = g_btlCamera->snapshot.position;
        owner->snapshot.target = g_btlCamera->snapshot.target;
        owner->snapshot.parameter = g_btlCamera->snapshot.parameter;
    }
}
}
