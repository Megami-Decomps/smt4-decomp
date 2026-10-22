#include "common.h"

struct EntryWork {
    /* 0x00 */ u8 reserved00[0x0c];
    /* 0x0c */ s32 mode;
    /* 0x10 */ u8 reserved10[0x1c];
    /* 0x2c */ f32 blend;
    /* 0x30 */ u8 reserved30[8];
    /* 0x38 */ s32 pending;
    /* 0x3c */ u8 reserved3c[4];
    /* 0x40 */ u32 kind;
    /* 0x44 */ u32 current;
    /* 0x48 */ s32 previous;
    /* 0x4c */ s32 locked;
    /* 0x50 */ u8 reserved50[8];
    /* 0x58 */ void *table;
};

extern "C" {
extern u32 g_aocSystem;

EntryWork *jobGetWork(void *job);
u16 *dataTable19FindAddonWord(void *table, u32 index);
s32 FUN_00162ea4(void);
s32 aocRunByName(u32 system, u32 kind, u32 entryId, u32 flags);
void aocLoadTextureNode(u32 system, u32 kind, u32 entryId, s32 flags);
void FUN_0014afd0(u32 kind, u32 entryId);

void entryWorkSwitchTo(void *job, u32 index, s32 setPending)
{
    EntryWork *work = jobGetWork(job);
    if (work->table == 0 || work->locked != 0) {
        return;
    }

    if (setPending == 0) {
        work->pending = 0;
    } else if (work->pending == 1) {
        return;
    }

    u16 *entry = dataTable19FindAddonWord(work->table, index);
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
    if (aocRunByName(g_aocSystem, work->kind, work->current, 1) != 0) {
        aocLoadTextureNode(g_aocSystem, work->kind, work->current, 0x10000);
    } else {
        FUN_0014afd0(work->kind, work->current);
    }
}
}
