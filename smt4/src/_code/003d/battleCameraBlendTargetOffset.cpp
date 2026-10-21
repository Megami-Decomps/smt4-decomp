/* NON_MATCHING: vector temporaries/registers and history-base materialization differ; -O2 candidate. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleTargetCamera : BattleVectorTransition {
    BattleVector3 offset; // 0x818
    u8 unk824[0x18];
    s32 duration; // 0x83c
    s32 frame;
    s32 mode;
};
struct BattleTargetCameraInputs {
    u8 unk000[0x58c];
    BattleVector3 origin;
    u8 unk598[0x58];
    BattleVector3 base; // 0x5f0
};
struct BattleTargetCameraGlobals {
    u8 unk00[0x28];
    s32 mode;
};
struct BattleCameraHistory {
    BattleVector3 original;
    BattleVector3 current;
    BattleVector3 alternate;
};

static BattleVector3 operator+(const BattleVector3 &a, const BattleVector3 &b)
{
    BattleVector3 result = { a.x + b.x, a.y + b.y, a.z + b.z };
    return result;
}
static BattleVector3 operator-(const BattleVector3 &a, const BattleVector3 &b)
{
    BattleVector3 result = { a.x - b.x, a.y - b.y, a.z - b.z };
    return result;
}
static BattleVector3 operator*(const BattleVector3 &value, f32 factor)
{
    BattleVector3 result = { value.x * factor, value.y * factor, value.z * factor };
    return result;
}

extern "C" {
extern BattleTargetCameraGlobals g_btlMain;
extern BattleCameraHistory DAT_00493530;
f32 FUN_00227280(s32 mode, s32 duration, s32 frame);

void battleCameraBlendTargetOffset(BattleTargetCamera *camera)
{
    BattleTargetCameraInputs *input = reinterpret_cast<BattleTargetCameraInputs *>(camera);
    if (g_btlMain.mode == 2) {
        BattleVector3 delta = camera->alternateDestination - DAT_00493530.alternate;
        f32 factor = FUN_00227280(camera->mode, camera->duration, camera->frame);
        camera->secondaryElapsed = input->base + delta * factor;
        return;
    }
    if (g_btlMain.mode != 1) {
        BattleVector3 delta = camera->alternateDestination - (input->origin - camera->offset);
        f32 factor = FUN_00227280(camera->mode, camera->duration, camera->frame);
        camera->offset = delta * factor;
        return;
    }
    camera->offset = DAT_00493530.current;
    f32 factor = FUN_00227280(camera->mode, camera->duration, camera->frame);
    camera->offset = (camera->alternateDestination - (input->origin - camera->offset)) * factor;
    DAT_00493530.current = camera->offset;
    camera->offset = DAT_00493530.original;
    camera->secondaryElapsed = DAT_00493530.current + input->base;
    camera->elapsed.z = camera->secondaryElapsed.z +
        (camera->alternateDestination.z - DAT_00493530.original.z) * factor;
}
}
