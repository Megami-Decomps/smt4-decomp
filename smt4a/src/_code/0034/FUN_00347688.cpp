/* NON_MATCHING: taskCreate takes the priority float on the stack in retail (vstr s0,[sp] before the integer arguments); a plain f32 parameter goes in s0, which shifts every following stack argument; the rest of the setup matches in shape. */
#include "common.h"

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
    /* 0x268 */ f32 scale;
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
    /* 0x384 */ f32 fade;
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

/* The by-value tail of the argument list (it travels on the stack next to the integer arguments). */
typedef struct QuadEffectParams {
    f32 fade;
    f32 priority;
    u8 flag;
    u32 unused;
    u16 time;
    f32 scale;
} QuadEffectParams;

void FUN_002129b8(QuadEffectTask *task);
void FUN_00238490(QuadEffectTask *task);
void FUN_00237dd0(QuadEffectTask *task);
QuadEffectTask *taskCreate(void (*update)(QuadEffectTask *), void (*a)(QuadEffectTask *), void (*b)(QuadEffectTask *),
                           void (*c)(QuadEffectTask *), f32 priority, u32 size, u32 list, u32 e, u32 f);
void sysMemClear(void *block, s32 size);
void *rt_memcpy_w(void *destination, const void *source, u32 size);
void FUN_00213d1c(QuadEffectTask *task);

/* Creates the quad effect task: its update routines depend on the config's kind. Sets up the
 * four colored corners, copies the caller's records in and starts it. */
QuadEffectTask *FUN_00347688(u32 owner, const void *base, const u8 *extra, u8 hasExtra, QuadEffectConfig *config,
                             QuadEffectParams params)
{
    QuadEffectTask *task = NULL;
    u8 kind = config->kind;
    u32 list = 3;

    if ((config->flags & 2) != 0 || kind == 3 || kind == 1) {
        list = 4;
    }
    if (kind == 0) {
        task = taskCreate(FUN_002129b8, FUN_00238490, NULL, NULL, params.priority, 0x3F0, list, 0, 0);
    } else if (kind == 1) {
        task = taskCreate(FUN_002129b8, NULL, FUN_00237dd0, NULL, params.priority, 0x3F0, list, 0, 0);
    } else if (kind == 3) {
        task = taskCreate(FUN_002129b8, NULL, NULL, FUN_00237dd0, params.priority, 0x3F0, list, 0, 0);
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
        rt_memcpy_w(task, base, 0x134);
        task->config = (const u32 *)config;
        task->offset[0] = 0.0f;
        task->offset[1] = 0.0f;
        task->offset[2] = 0.0f;
        if (task->hasExtra != 0) {
            rt_memcpy_w(task->extra, extra, 0xB0);
        } else {
            task->extra[0xA6] = extra[0xA6];
            task->extra[0xA7] = extra[0xA7];
            task->extra[0xA8] = extra[0xA8];
            task->extra[0xA9] = extra[0xA9];
        }
        task->scale = params.scale;
        task->unk2d0 = 0;
        task->owner = owner;
        FUN_00213d1c(task);
        task->fade = params.fade;
        task->flag = params.flag;
        task->timeB = params.time;
        task->timeA = params.time;
    }
    return task;
}

}
