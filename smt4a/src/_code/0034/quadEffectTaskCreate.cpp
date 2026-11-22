/* NON_MATCHING: 83 lines: retail leaves the task unset (no NULL default) for unknown kinds, reloads config->kind after the clear (an unused load) and keeps config in r5 and the extra record in r6 (swapped here). */
#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/ParticleCreate.h"

extern "C" {

/* One corner of the effect quad (0x18 bytes). */
typedef struct QuadCorner {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 color;
} QuadCorner;

/* The effect task's work block (0x3F0 bytes). */
typedef struct QuadEffectTask {
    /* 0x000 */ u8 base[0x134];          /* copy of the caller's base record */
    /* 0x134 */ u8 extra[0xB0];          /* copy of the caller's extra record when `hasExtra` is set */
    /* 0x1E4 */ u8 unk1e4[0x84];
    /* 0x268 */ u32 value268;
    /* 0x26C */ QuadCorner corners[4];
    /* 0x2CC */ u8 unk2cc[4];
    /* 0x2D0 */ u16 unk2d0;
    /* 0x2D4 */ f32 offset[3];
    /* 0x2E0 */ u8 unk2e0[0x74];
    /* 0x354 */ const u32 *config;
    /* 0x358 */ u8 unk358[0x24];
    /* 0x37C */ u32 owner;
    /* 0x380 */ u8 hasExtra;
    /* 0x381 */ u8 unk381[3];
    /* 0x384 */ ParticleNode **ownerSlot;
    /* 0x388 */ u8 unk388[0x61];
    /* 0x3E9 */ u8 flag;
    /* 0x3EA */ u16 timeA;
    /* 0x3EC */ u16 timeB;
    /* 0x3EE */ u8 unk3ee[2];
} QuadEffectTask;

/* The config record that picks the update routine: flags at 0, a kind byte at 0x11. */
typedef struct QuadEffectConfig {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xD];
    /* 0x11 */ u8 kind;
} QuadEffectConfig;

void FUN_002129b8(void *task);
void FUN_00238490(void *task);
void FUN_00237dd0(void *task);
void *taskCreate(TaskFunc update, TaskFunc phase0, TaskFunc phase1, TaskFunc phase3,
                 TaskFunc destroy, s32 workSize, s32 listIndex, u32 priority, s32 clearWork);
void sysMemClear(void *block, s32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_00213d1c(QuadEffectTask *effect, const QuadEffectTask *source);

/* Creates the quad effect task: its update routines depend on the config's kind. Sets up the
 * four colored corners, copies the caller's records in and starts it. */
QuadEffectTask *quadEffectTaskCreate(u32 owner, const void *base, const void *extraData, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, TaskFunc destroy, u32 index, u32 flags, u32 time, u32 value268)
{
    const u8 *extra = static_cast<const u8 *>(extraData);
    QuadEffectTask *task = NULL;
    u32 list = 3;
    if ((config->flags & 2) != 0 || config->kind == 3 || config->kind == 1) {
        list = 4;
    }
    switch (config->kind) {
    case 0:
        task = static_cast<QuadEffectTask *>(taskCreate(FUN_002129b8, FUN_00238490, NULL, NULL, destroy, 0x3F0, list, 0, 0));
        break;
    case 1:
        task = static_cast<QuadEffectTask *>(taskCreate(FUN_002129b8, NULL, FUN_00237dd0, NULL, destroy, 0x3F0, list, 0, 0));
        break;
    case 3:
        task = static_cast<QuadEffectTask *>(taskCreate(FUN_002129b8, NULL, NULL, FUN_00237dd0, destroy, 0x3F0, list, 0, 0));
        break;
    }
    if (task != NULL) {
        sysMemClear(task, 0x3F0);
        task->corners[0].position[0] = -0.5f;
        task->corners[0].position[1] = -0.5f;
        task->corners[0].position[2] = 0.0f;
        task->corners[0].color = 0x00FF00FF;
        task->corners[1].position[0] = -0.5f;
        task->corners[1].position[1] = 0.5f;
        task->corners[1].position[2] = 0.0f;
        task->corners[1].color = 0xFF0000FF;
        task->corners[2].position[0] = 0.5f;
        task->corners[2].position[1] = -0.5f;
        task->corners[2].position[2] = 0.0f;
        task->corners[2].color = 0x0000FFFF;
        task->corners[3].position[0] = 0.5f;
        task->corners[3].position[1] = 0.5f;
        task->corners[3].position[2] = 0.0f;
        task->corners[3].color = 0xFFFF00FF;
        task->hasExtra = hasExtra;
        __aeabi_memcpy4(task, base, 0x134);
        task->config = (const u32 *)config;
        task->offset[0] = 0.0f;
        task->offset[1] = 0.0f;
        task->offset[2] = 0.0f;
        if (task->hasExtra != 0) {
            __aeabi_memcpy4(task->extra, extra, 0xB0);
        } else {
            task->extra[0xA6] = extra[0xA6];
            task->extra[0xA7] = extra[0xA7];
            task->extra[0xA8] = extra[0xA8];
            task->extra[0xA9] = extra[0xA9];
        }
        task->value268 = value268;
        task->unk2d0 = 0;
        task->owner = owner;
        FUN_00213d1c(task, task);
        task->ownerSlot = ownerSlot;
        task->flag = index;
        task->timeB = time;
        task->timeA = time;
    }
    return task;
}

}
