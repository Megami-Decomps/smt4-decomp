#include "common.h"

extern "C" {

typedef struct TrackId {
    /* 0x0 */ u32 group;
    /* 0x4 */ u32 track;
} TrackId;

typedef struct AocJob {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 muted;
    /* 0x10 */ u8 unk10[0x1C];
    /* 0x2C */ f32 volume;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ s32 pending;
    /* 0x38 */ u8 unk38[4];
    /* 0x3C */ TrackId current;
    /* 0x44 */ s32 previous;
    /* 0x48 */ s32 locked;
    /* 0x4C */ u8 unk4C[8];
    /* 0x54 */ void *table;
} AocJob;

extern u32 g_aocSystem;

AocJob *jobGetWork(void);
u16 *FUN_002aecd8(void *table, u32 index);
s32 FUN_002c1d5c(void);
s32 aocRunByName(u32 system, TrackId track, s32 arg);
int FUN_002ae8e4(u32 system, TrackId track, s32 arg);
int FUN_002c58c8(TrackId track);

/* Switches the job to the track the table lists for `index`; `queue` marks the change as pending. */
void FUN_0012630c(void *unused, u32 index, s32 queue)
{
    AocJob *job = jobGetWork();
    u16 *entry;

    if (job->table == NULL || job->locked != 0) {
        return;
    }
    if (queue == 0) {
        job->pending = 0;
    } else if (job->pending == 1) {
        return;
    }
    entry = FUN_002aecd8(job->table, index);
    if (job->current.track == *entry) {
        return;
    }
    if (queue != 0) {
        job->pending = 1;
    }
    job->previous = job->current.track;
    job->current.track = *entry;
    if (job->muted == 1) {
        job->previous = -1;
        return;
    }
    if (FUN_002c1d5c() != 0) {
        job->muted = 1;
        job->previous = -1;
        return;
    }
    job->muted = 0;
    job->volume = 1.0f;
    if (aocRunByName(g_aocSystem, job->current, 1) != 0) {
        FUN_002ae8e4(g_aocSystem, job->current, 0x10000);
        return;
    }
    FUN_002c58c8(job->current);
}

} /* extern "C" */
