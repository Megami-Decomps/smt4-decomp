#include "common.h"

extern "C" {

/* The job's work area (from jobGetWork): the current and previous entry ids and a fade value. */
typedef struct EntryWork {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 mode;           /* 1 while the entry is held */
    /* 0x10 */ u8 unk10[0x1c];
    /* 0x2c */ f32 blend;          /* reset to 1.0 when a new entry is loaded */
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ s32 pending;
    /* 0x3c */ u8 unk3c[4];
    /* 0x40 */ u32 kind;
    /* 0x44 */ u32 current;
    /* 0x48 */ s32 previous;       /* -1 when none */
    /* 0x4c */ s32 locked;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ void *table;        /* the entry table */
} EntryWork;

extern u32 g_aocSystem;

void FUN_0014afd0(u32 kind, u32 id);
s32 FUN_00162ea4(void);
void FUN_00191e00(u32 aoc, u32 kind, u32 id, s32 flags);
u16 *FUN_0019e378(void *table, u32 index);
s32 FUN_001a6508(u32 aoc, u32 kind, u32 id, u32 flag);
EntryWork *jobGetWork(void);

/* Switches the job to entry `index` of its table (unless locked or already pending), remembering the previous one and loading the new one. */
void entryWorkSwitchTo(void *unused, u32 index, s32 setPending)
{
    EntryWork *work = jobGetWork();
    u16 *entry;

    if (work->table == NULL || work->locked != 0) {
        return;
    }
    if (setPending == 0) {
        work->pending = 0;
    } else if (work->pending == 1) {
        return;
    }
    entry = FUN_0019e378(work->table, index);
    if (work->current == *entry) {
        return;
    }
    if (setPending != 0) {
        work->pending = 1;
    }
    work->previous = work->current;
    work->current = *entry;
    if (work->mode == 1) {
        work->previous = -1;
        return;
    }
    if (FUN_00162ea4() != 0) {
        work->mode = 1;
        work->previous = -1;
        return;
    }
    work->mode = 0;
    work->blend = 1.0f;
    if (FUN_001a6508(g_aocSystem, work->kind, work->current, 1) != 0) {
        FUN_00191e00(g_aocSystem, work->kind, work->current, 0x10000);
        return;
    }
    FUN_0014afd0(work->kind, work->current);
}

} /* extern "C" */
