#include "addon/aocMain.h"

extern "C" {


extern AocSystem *g_aocSystem;

AocMusicJob *jobGetWork(void);
u16 *aocContentGetIndexedRecord(void *table, u32 index);
s32 FUN_002c1d5c(void);
s32 aocRunByName(AocSystem *system, AocTrackId track, s32 arg);
int FUN_002ae8e4(AocSystem *system, AocTrackId track, s32 arg);
int FUN_002c58c8(AocTrackId track);

/* Switches the job to the track the table lists for `index`; `queue` marks the change as pending. */
void aocSelectMusicTrack(void *unused, u32 index, s32 queue)
{
    AocMusicJob *job = jobGetWork();
    u16 *entry;

    if (job->table == NULL || job->locked != 0) {
        return;
    }
    if (queue == 0) {
        job->pending = 0;
    } else if (job->pending == 1) {
        return;
    }
    entry = aocContentGetIndexedRecord(job->table, index);
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
