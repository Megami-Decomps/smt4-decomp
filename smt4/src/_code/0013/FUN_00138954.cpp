/* NON_MATCHING: retail pairs the endValue/target stores into `stm {r0, r5}` at 0x60; armcc here hoists the target store to the top of the block. */
#include "common.h"
#include "shard/JobWork.h"

struct CameraMoveVec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

/* The work area of the camera move job. */
struct CameraMoveWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s32 frame;
    /* 0x28 */ f32 rate;
    /* 0x2C */ u8 unk2c[4];
    /* 0x30 */ u8 finished;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ CameraMoveVec3 position;
    /* 0x40 */ CameraMoveVec3 start;
    /* 0x4C */ CameraMoveVec3 end;
    /* 0x58 */ u32 baseValue;
    /* 0x5C */ u32 startValue;
    /* 0x60 */ u32 endValue;
    /* 0x64 */ s32 target;
    /* 0x68 */ f32 duration;
    /* 0x6C */ f32 elapsed;
    /* 0x70 */ f32 progress;
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ s32 state;
};

extern "C" {

void bustupSpriteStartTransition(CameraMoveWork *work, s32 arg1, s32 arg2);

/* Start a move towards target over frames (or stop it when target is 0), raising the start height by to - from. */
void FUN_00138954(u32 job, s32 target, s32 frames, f32 from, f32 to)
{
    CameraMoveWork *work = (CameraMoveWork *)jobGetWork(job);
    if (target == 0) {
        bustupSpriteStartTransition(work, 1, 0);
        work->state = 2;
    } else {
        work->elapsed = 0.0f;
        work->progress = 0.0f;
        work->duration = (f32)frames;
        work->frame = 0;
        work->rate = 1.0f;
        work->state = 3;
        work->finished = 0;
        work->startValue = work->baseValue;
        work->endValue = work->baseValue;
        work->target = target;
    }
    work->end = work->position;
    work->start = work->position;
    work->start.z += to - from;
}

} /* extern "C" */
