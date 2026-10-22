/* NON_MATCHING: only the VFP schedule differs: retail converts the duration and subtracts the Z ends before converting the frame. */
#include "common.h"

/* A linear move from a start to an end point over a frame range. */
struct LinearMove35e6d4 {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ s32 startX;
    /* 0x10 */ s32 startY;
    /* 0x14 */ s32 endX;
    /* 0x18 */ s32 endY;
    /* 0x1C */ f32 startZ;
    /* 0x20 */ f32 endZ;
    /* 0x24 */ u8 unk24[0x8];
    /* 0x2C */ s32 startFrame;
    /* 0x30 */ s32 endFrame;
    /* 0x34 */ s32 frame;
};

extern "C" {

// Advance the move one frame and update the position; returns whether it is still running.
u8 FUN_0035e6d4(LinearMove35e6d4 *move)
{
    s32 frame = ++move->frame;
    s32 duration = move->endFrame - move->startFrame;
    s32 x = (move->endX - move->startX) / duration * frame + move->startX;
    s32 y = (move->endY - move->startY) / duration * frame + move->startY;
    f32 z = move->startZ + (move->endZ - move->startZ) / duration * frame;
    u8 running = 1;
    if (frame >= move->endFrame) {
        x = move->endX;
        y = move->endY;
        z = move->endZ;
        running = 0;
    }
    move->y = y;
    move->x = x;
    move->z = z;
    return running;
}

} /* extern "C" */
