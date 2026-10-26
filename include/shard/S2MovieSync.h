/* Movie stream synchronisation state: two streams, each with a ring of timestamps and a run of
 * entries that say how many ring slots they consume. */
#ifndef S2_MOVIE_SYNC_H
#define S2_MOVIE_SYNC_H

#include "common.h"

#define MOVIE_SYNC_STREAMS 2
#define MOVIE_SYNC_RING_SIZE 16
#define MOVIE_SYNC_ENTRIES 8

typedef struct MovieSyncEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 type;     /* types 0 and 1 take two ring slots, everything else one */
    /* 0x0c */ u8 unk0c[0x1c];
} MovieSyncEntry;

class MovieSyncSource;

typedef struct MovieSync {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ volatile s32 state;        /* 1 = stopped; polled while the playback thread changes it */
    /* 0x010 */ u8 unk010[8];
    /* 0x018 */ u32 *backend;
    /* 0x01c */ s32 counter;
    /* 0x020 */ u8 unk020[0x10];
    /* 0x030 */ u64 ring[MOVIE_SYNC_STREAMS][MOVIE_SYNC_RING_SIZE]; /* timestamps */
    /* 0x130 */ u8 unk130[8];
    /* 0x138 */ u64 baseTime;
    /* 0x140 */ u64 nextTime;
    /* 0x148 */ u64 firstTime;             /* first stream's timestamp this pass (0 = unset) */
    /* 0x150 */ u8 unk150[8];
    union {
        /* 0x158 */ u8 queue[0x1b4];       /* pending-message queue */
        struct {
            union {
                u8 unk158[0x194];
                struct {
                    u8 unk158[0x190];
                    s32 count; /* 0x2e8 */
                } entries;
            };
            /* 0x2ec */ MovieSyncSource *sources[MOVIE_SYNC_ENTRIES];
        } io;
    };
    /* 0x30c */ MovieSyncEntry entries[MOVIE_SYNC_ENTRIES];
    union {
        /* 0x44c */ u8 unk44c[0x20];
        /* 0x44c */ u32 streamHandles[MOVIE_SYNC_ENTRIES];
    };
    /* 0x46c */ s32 entryIndex[MOVIE_SYNC_STREAMS]; /* current entry per stream, or -1 */
    /* 0x474 */ s32 limit[MOVIE_SYNC_STREAMS];      /* ring slots written so far */
    /* 0x47c */ s32 readPos[MOVIE_SYNC_STREAMS];    /* ring slots consumed so far */
} MovieSync;

/* Ring slots the current entry of `index` consumes (0 when there is none to look at). */
static __inline s32 movieSyncEntrySlots(MovieSync *sync, s32 entryIndex)
{
    MovieSyncEntry *entry = &sync->entries[entryIndex];

    if (entry == NULL) {
        return 0;
    }
    return entry->type == 0 || entry->type == 1 ? 2 : 1;
}

#endif
