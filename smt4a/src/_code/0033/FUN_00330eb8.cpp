/* NON_MATCHING: retail addresses every field from one pool anchor DAT_005f19fc (struct base + 0x400, with `sub ip, r0, #1024` for the far fields); the struct's real start has no symbol, so built anchors on DAT_005f18c4 */
#include "common.h"

extern "C" {

struct Vec3 {
    f32 x, y, z;
};

struct EventCameraState {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x2cf];
    /* 0x2d0 */ u32 mode;
    /* 0x2d4 */ u32 type;
    /* 0x2d8 */ Vec3 position;
    /* 0x2e4 */ f32 yaw;
    /* 0x2e8 */ f32 pitch;
};

extern EventCameraState DAT_005f18c4;

s32 scrGetArg(void);
void FUN_0035846c(void);

/* Script command 0x164f: resets the event camera to its fixed preset and activates it. */
u32 FUN_00330eb8(void)
{
    if (scrGetArg() == 0x164f) {
        FUN_0035846c();
        DAT_005f18c4.mode = 0x65;
        DAT_005f18c4.type = 5;
        DAT_005f18c4.yaw = 180.0f;
        DAT_005f18c4.pitch = 180.0f;
        DAT_005f18c4.position.x = -11500.0f;
        DAT_005f18c4.position.y = 107.0f;
        DAT_005f18c4.position.z = 3000.0f;
        DAT_005f18c4.active = 1;
    }
    return 1;
}

} /* extern "C" */
