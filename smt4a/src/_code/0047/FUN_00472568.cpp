/* NON_MATCHING: the build hoists the constant 1 and orders the state stores differently from retail (retail shares one `str r0,[r4,#8]` between states 1 and 3). */
#include "common.h"
#include <stddef.h>
#include "shard/JobWork.h"

/* One sprite object of the job's work block (0x8C bytes). */
struct JobSprite {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u8 visible;
    /* 0x3D */ u8 unk3D[0x4D];
    /* 0x8A */ s8 finished; /* the sprite's animation has ended */
    /* 0x8B */ u8 unk8B;
};

/* The job's work block: a frame counter, a state and three sprites. */
struct SpriteJobWork {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ s32 variant;
    /* 0x014 */ u8 unk014[0x404];
    /* 0x418 */ u32 frame;
    /* 0x41C */ u8 unk41C[4];
    /* 0x420 */ u8 shared[0x20];
    /* 0x440 */ JobSprite first;
    /* 0x4CC */ JobSprite middle;
    /* 0x558 */ JobSprite last;
};
typedef char SpriteJobWorkOffsets[
    offsetof(SpriteJobWork, frame) == 0x418 && offsetof(SpriteJobWork, first) == 0x440 &&
    offsetof(SpriteJobWork, middle) == 0x4CC && offsetof(SpriteJobWork, last) == 0x558 &&
    sizeof(JobSprite) == 0x8C ? 1 : -1];

extern "C" {
void FUN_0014e188(JobSprite *sprite, s32 mode, u32 id, void *shared, s32 priority, f32 scale);
void FUN_00163aa4(JobSprite *sprite, f32 delta);
void pairSetSecondResetFirst(JobSprite *sprite, u32 second);
void pairSetFirstResetSecond(JobSprite *sprite, u32 first);
void uiSpriteSelectAnim(JobSprite *sprite, s32 group);
void FUN_00387240(JobSprite *sprite, s32 mode, s32 id);
s8 uiSpriteGetCompletionState(const JobSprite *sprite);
void spriteSetVisible(JobSprite *sprite, u8 visible);

/* Advances the three-sprite banner: builds the sprites, plays them until the first one finishes, then ends. */
s32 FUN_00472568(u32 job)
{
    SpriteJobWork *work = reinterpret_cast<SpriteJobWork *>(jobGetWork(job));
    work->frame = (work->frame + 1) % 40;
    switch (work->state) {
    case 0:
        work->flags &= ~0x20u;
        work->state = 1;
        FUN_0014e188(&work->first, 8, 0xFFFFFFFF, work->shared, 11, 1.0f);
        FUN_0014e188(&work->middle, 8, 0xFFFFFFFF, work->shared, 11, 1.0f);
        FUN_0014e188(&work->last, 8, 0xFFFFFFFF, work->shared, 11, 1.0f);
        if (work->variant <= 4) {
            pairSetSecondResetFirst(&work->first, 6);
            uiSpriteSelectAnim(&work->first, 3);
            FUN_00387240(&work->first, 8, 54);
            pairSetSecondResetFirst(&work->last, 7);
            uiSpriteSelectAnim(&work->last, 3);
            FUN_00387240(&work->last, 8, 54);
        } else {
            pairSetSecondResetFirst(&work->first, 4);
            uiSpriteSelectAnim(&work->first, 3);
            FUN_00387240(&work->first, 8, 34);
            pairSetSecondResetFirst(&work->last, 5);
            uiSpriteSelectAnim(&work->last, 3);
            FUN_00387240(&work->last, 8, 34);
        }
        spriteSetVisible(&work->first, 1);
        spriteSetVisible(&work->last, 1);
        pairSetFirstResetSecond(&work->middle, 7);
        uiSpriteSelectAnim(&work->middle, 4);
        FUN_00387240(&work->middle, 8, 71);
        FUN_00163aa4(&work->first, 1.0f);
        break;
    case 1:
        FUN_00163aa4(&work->first, 1.0f);
        FUN_00163aa4(&work->last, 1.0f);
        if (uiSpriteGetCompletionState(&work->first) != 0) {
            work->flags |= 0x20;
            work->state = 2;
        }
        break;
    case 2:
        FUN_00163aa4(&work->first, 1.0f);
        FUN_00163aa4(&work->last, 1.0f);
        FUN_00163aa4(&work->middle, 1.0f);
        break;
    case 3:
        FUN_00163aa4(&work->first, 1.0f);
        FUN_00163aa4(&work->last, 1.0f);
        if (uiSpriteGetCompletionState(&work->first) != 0)
            work->state = 4;
        break;
    case 4:
        work->flags &= ~0x30u;
        break;
    }
    return 0;
}

} /* extern "C" */
