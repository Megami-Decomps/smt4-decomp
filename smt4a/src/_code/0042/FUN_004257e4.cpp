/* NON_MATCHING: retail never predicates the volatile state tests (separate cmp/beq per state read) and keeps two pointer copies (sl, r4/r5) for the inlined loops where the build coalesces them; loop scheduling differs. */
#include "shard/W6_W6Match7_MoviePacketPump.h"
#include "shard/W6_W6Match7_MovieSource.h"

/* The parts of the movie player that the update step reaches beyond MovieSync's own prefix. */
struct MovieUpdateView {
    union {
        MovieSync sync;
        struct {
            /* 0x000 */ u8 unk000[0xc];
            /* 0x00c */ volatile s32 state;
            /* 0x010 */ u8 unk010;
            /* 0x011 */ u8 mode;
            /* 0x012 */ u8 unk012[6];
            /* 0x018 */ u32 *backend;
            /* 0x01c */ u8 unk01c[4];
            /* 0x020 */ u8 wakeEvent[0x110];
            /* 0x130 */ u64 limitTime;
            /* 0x138 */ u8 unk138[0x8];
            /* 0x140 */ u64 clearedTime;
            /* 0x148 */ u8 unk148[8];
            /* 0x150 */ u64 pendingTime;
            /* 0x158 */ u8 unk158[0x1c4 - 0x158];
            /* 0x1c4 */ s32 itemCount;
            /* 0x1c8 */ u8 unk1c8[0x2c8 - 0x1c8];
            /* 0x2c8 */ u32 items[MOVIE_SYNC_ENTRIES];
            /* 0x2e8 */ s32 sourceCount;
            /* 0x2ec */ MovieSyncSource *sources[MOVIE_SYNC_ENTRIES];
            /* 0x30c */ u8 unk30c[0x44c - 0x30c];
            /* 0x44c */ u32 streamHandles[MOVIE_SYNC_ENTRIES];
            /* 0x46c */ s32 entryIndex[MOVIE_SYNC_STREAMS];
            /* 0x474 */ s32 limit[MOVIE_SYNC_STREAMS];
            /* 0x47c */ s32 readPos[MOVIE_SYNC_STREAMS];
            /* 0x484 */ s32 streamCount;
            /* 0x488 */ u8 unk488[0x528 - 0x488];
            /* 0x528 */ u32 handles[MOVIE_SYNC_ENTRIES];
            /* 0x548 */ s32 current;
            /* 0x54c */ u8 prepared;
        } view;
    };
};

extern "C" {
void nn_os_CriticalSection_Enter(MovieUpdateView *sync);
void nn_os_CriticalSection_Leave(MovieUpdateView *sync);
int nn_os_LightEvent_ClearSignal(u8 *event);
void moviePumpCurrentStreamPackets(MoviePacketPump *pump);
int FUN_004245b4(MovieUpdateView *sync);
int movieSyncPollBackend(MovieUpdateView *sync);
int FUN_00424c4c(MovieUpdateView *sync);
int FUN_00424ecc(MovieUpdateView *sync);
int runItemsOfInner(u32 backend, u32 handle);
int readInnerWord6(u32 backend, s32 *value);

/* Drops the entries of each active stream whose timestamp lies before the limit time. */
static __inline void movieUpdateDropStaleEntries(MovieUpdateView *p)
{
    for (s32 i = 0; i < MOVIE_SYNC_STREAMS; i++) {
        if (p->view.entryIndex[i] >= 0) {
            s32 remaining = p->view.limit[i] - p->view.readPos[i];
            while (remaining > 0) {
                if ((s64)p->sync.ring[i][p->view.readPos[i] % MOVIE_SYNC_RING_SIZE] - (s64)p->view.limitTime >= 0) {
                    break;
                }
                p->view.sources[p->view.entryIndex[i]]->unk1c();
                remaining--;
                p->view.readPos[i]++;
            }
        }
    }
}

/* When the backend reports pending work, runs the streams' handles, the sources' handles that no stream is using, and the items. */
static __inline void movieUpdateRunPendingItems(MovieUpdateView *p)
{
    s32 pending;
    s32 i;

    readInnerWord6(*p->view.backend, &pending);
    if (pending != 0) {
        for (i = 0; i < p->view.streamCount; i++) {
            if (p->view.current != i) {
                runItemsOfInner(*p->view.backend, p->view.handles[i]);
            }
        }
        for (i = 0; i < p->view.sourceCount; i++) {
            if (p->view.entryIndex[0] != i && p->view.entryIndex[1] != i) {
                runItemsOfInner(*p->view.backend, p->view.streamHandles[i]);
            }
        }
        for (i = 0; i < p->view.itemCount; i++) {
            runItemsOfInner(*p->view.backend, p->view.items[i]);
        }
    }
}

/* One update step of the movie player: advances the state machine and hands the pending streams, sources and items to the backend. */
void FUN_004257e4(MovieUpdateView *player)
{
    nn_os_CriticalSection_Enter(player);
    if (player->view.state != 7) {
        if (player->view.state != 6) {
        if (player->view.state == 0) {
            if (player->view.mode == 0) {
                FUN_00424c4c(player);
            }
            if (player->view.mode == 1) {
                FUN_00424ecc(player);
            }
            if (player->view.state == 7) {
                nn_os_CriticalSection_Leave(player);
                return;
            }
        }
        if (player->view.state == 8) {
            player->view.state = 2;
        }
        if (player->view.state == 2) {
            player->view.prepared = 0;
            player->view.limitTime = 0;
            player->view.clearedTime = 0;
            player->view.pendingTime = 0;
            player->view.state = 1;
        }
        if (player->view.state != 1) {
            if (player->view.state == 5 && player->view.pendingTime == 0 && player->view.limitTime != 0) {
                movieUpdateDropStaleEntries(player);
            }
            movieUpdateRunPendingItems(player);
            if (player->view.state != 4) {
                moviePumpCurrentStreamPackets(reinterpret_cast<MoviePacketPump *>(player));
            }
            FUN_004245b4(player);
            movieSyncPollBackend(player);
            nn_os_CriticalSection_Leave(player);
            return;
        }
    }
        }
    nn_os_LightEvent_ClearSignal(player->view.wakeEvent);
    nn_os_CriticalSection_Leave(player);
}

} /* extern "C" */
