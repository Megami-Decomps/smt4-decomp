/* NON_MATCHING: retail shares one `str r0,[r4,#8]` tail between the state 1 and state 3 transitions (movne r0,#4 + branch) and schedules the state-0 stores differently; armcc here predicates the store and hoists the constant. */
#include "common.h"
#include "shard/JobWork.h"

/* A 0x8C-byte UI sprite; only the fields this job touches. */
struct JobSprite {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u8 visible;                  /* set through spriteSetVisible */
    /* 0x3d */ u8 unk3d[0x4d];
    /* 0x8a */ s8 finished;
    /* 0x8b */ u8 unk8b;
};

struct JobSpritePacket {
    u8 unk00[0x20];
};

/* Work area of the job that animates three sprites in turn. */
struct SpriteTrioWork {
    /* 0x000 */ u32 flags;           /* 0x20: first animation finished */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s32 state;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ s32 variant;         /* < 5 picks the narrow sprite set */
    /* 0x014 */ u8 unk014[0x404];
    /* 0x418 */ u32 frame;           /* 0..39 */
    /* 0x41c */ u8 unk41c[4];
    /* 0x420 */ JobSpritePacket packet;
    /* 0x440 */ JobSprite sprites[3];
};

extern "C" {
void FUN_002bd954(JobSprite *sprite, u32 group, u32 image, JobSpritePacket *owner, u16 id, f32 scale);
void pairSetSecondResetFirst(JobSprite *sprite, s32 index);
void pairSetFirstResetSecond(JobSprite *sprite, s32 index);
void spriteStartAnimationByIndex(JobSprite *sprite, s32 index);
void FUN_00295eb0(JobSprite *sprite, u32 group, u32 image);
void FUN_002bf818(JobSprite *sprite);
void spriteSetVisible(JobSprite *sprite, u8 visible);
s32 uiSpriteGetCompletionState(JobSprite *sprite);

/* Per-frame update: plays the three sprites in sequence (fade in, hold, fade out). */
s32 FUN_0038a1e0(u32 job)
{
    SpriteTrioWork *work = reinterpret_cast<SpriteTrioWork *>(jobGetWork(job));
    work->frame = (work->frame + 1) % 40;
    switch (work->state) {
    case 0:
        work->flags &= ~0x20;
        work->state = 1;
        FUN_002bd954(&work->sprites[0], 0xe, -1, &work->packet, 0xb, 1.0f);
        FUN_002bd954(&work->sprites[1], 0xe, -1, &work->packet, 0xb, 1.0f);
        FUN_002bd954(&work->sprites[2], 0xe, -1, &work->packet, 0xb, 1.0f);
        if (work->variant <= 4) {
            pairSetSecondResetFirst(&work->sprites[0], 6);
            spriteStartAnimationByIndex(&work->sprites[0], 3);
            FUN_00295eb0(&work->sprites[0], 0xe, 0x36);
            pairSetSecondResetFirst(&work->sprites[2], 7);
            spriteStartAnimationByIndex(&work->sprites[2], 3);
            FUN_00295eb0(&work->sprites[2], 0xe, 0x36);
        } else {
            pairSetSecondResetFirst(&work->sprites[0], 4);
            spriteStartAnimationByIndex(&work->sprites[0], 3);
            FUN_00295eb0(&work->sprites[0], 0xe, 0x22);
            pairSetSecondResetFirst(&work->sprites[2], 5);
            spriteStartAnimationByIndex(&work->sprites[2], 3);
            FUN_00295eb0(&work->sprites[2], 0xe, 0x22);
        }
        spriteSetVisible(&work->sprites[0], 1);
        spriteSetVisible(&work->sprites[2], 1);
        pairSetFirstResetSecond(&work->sprites[1], 7);
        spriteStartAnimationByIndex(&work->sprites[1], 4);
        FUN_00295eb0(&work->sprites[1], 0xe, 0x47);
        FUN_002bf818(&work->sprites[0]);
        break;
    case 1:
        FUN_002bf818(&work->sprites[0]);
        FUN_002bf818(&work->sprites[2]);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0) {
            work->flags |= 0x20;
            work->state = 2;
        }
        break;
    case 2:
        FUN_002bf818(&work->sprites[0]);
        FUN_002bf818(&work->sprites[2]);
        FUN_002bf818(&work->sprites[1]);
        break;
    case 3:
        FUN_002bf818(&work->sprites[0]);
        FUN_002bf818(&work->sprites[2]);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0) {
            work->state = 4;
        }
        break;
    case 4:
        work->flags &= ~0x30;
        break;
    }
    return 0;
}

} /* extern "C" */
