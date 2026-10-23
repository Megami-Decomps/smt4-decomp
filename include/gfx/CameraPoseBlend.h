#ifndef GFX_CAMERAPOSEBLEND_H
#define GFX_CAMERAPOSEBLEND_H
#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct CameraBlendPose {
    BattleVector3 position;
    u8 unk0C[0xc];
    BattleVector3 target; // 0x18
    u8 unk24[0xc];
    BattleVector3 up; // 0x30
    u8 unk3C[4];
    f32 scalar; // 0x40
};
struct CameraPoseBlendView {
    u8 unk000[0x568];
    CameraBlendPose current, end, start;
    u32 flags; // 0x634
    u32 duration; // 0x638
};
typedef char CameraPoseBlendOffsets[
    sizeof(CameraBlendPose) == 0x44 &&
    offsetof(CameraPoseBlendView, current) == 0x568 &&
    offsetof(CameraPoseBlendView, end) == 0x5ac &&
    offsetof(CameraPoseBlendView, start) == 0x5f0 &&
    offsetof(CameraPoseBlendView, duration) == 0x638 ? 1 : -1];
#endif
