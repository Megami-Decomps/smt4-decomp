/* NON_MATCHING: scheduling only: retail moves r3 after the float argument copies and stores the
 * two -1 fields last; this build hoists both. */
#include "shard/S1Mover.h"

/* The work area of the task FUN_00244e1c starts (0x168 bytes). */
struct ModelEffectTask {
    /* 0x000 */ u32 *doneFlag; /* set to 1 at start, cleared by the task */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 resource;
    /* 0x00c */ u8 unk00c[0x14];
    /* 0x020 */ Vec3f position;
    /* 0x02c */ f32 scale;
    /* 0x030 */ u8 id;
    /* 0x031 */ u8 unk031[0x14];
    /* 0x045 */ u8 option;
    /* 0x046 */ u8 unk046[2];
    /* 0x048 */ f32 baseScale;
    /* 0x04c */ u8 unk04c[0x104];
    /* 0x150 */ u8 mode;
    /* 0x151 */ u8 unk151[0xb];
    /* 0x15c */ s32 unk15c;
    /* 0x160 */ u8 unk160[4];
    /* 0x164 */ s32 unk164;
};

extern "C" {
ModelEffectTask *taskCreate(void (*update)(ModelEffectTask *), u32 a, u32 b, u32 c, u32 d,
                            u32 size, u32 list, u32 e, u32 f);
void memClear(void *block, s32 size);
u32 FUN_002fdd9c(u32 id);
void FUN_00200c9c(ModelEffectTask *task);

/* Starts the task that plays effect `id` at a position and scale; `doneFlag` (optional) reads 1
 * while it runs. */
ModelEffectTask *FUN_00244e1c(u32 id, u32 *doneFlag, u8 mode, u8 option, Vec3f position,
                              f32 scale)
{
    ModelEffectTask *task = taskCreate(FUN_00200c9c, 0, 0, 0, 0, sizeof(ModelEffectTask), 3, 0, 0);
    if (task != NULL) {
        memClear(task, sizeof(ModelEffectTask));
        task->resource = FUN_002fdd9c(id);
        task->doneFlag = doneFlag;
        if (doneFlag != NULL) {
            *doneFlag = 1;
        }
        task->position = position;
        task->id = id;
        task->mode = mode;
        task->option = option;
        task->scale = scale;
        task->baseScale = scale;
        task->unk15c = -1;
        task->unk164 = -1;
    }
    return task;
}
}
