/* NON_MATCHING: complete rewrite; only VFP/GPR allocation and scheduling differ (retail keeps x/y in s16/s17 and the hoisted constants in s18-s24, loads the zero for indicatorShown with a fresh mov, and tests `hidden` before loading the distance). */
#include "common.h"

extern "C" {

/* One 0x188-byte slot of the map's enemy list; only the fields the indicator uses are named. */
typedef struct EnemySlot {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x7D];
    /* 0x07E */ u8 hidden;
    /* 0x07F */ u8 unk07F;
    /* 0x080 */ f32 angle;
    /* 0x084 */ u8 unk084[0xBD];
    /* 0x141 */ s8 tracked;
    /* 0x142 */ u8 unk142[2];
    /* 0x144 */ s32 pulse;
    /* 0x148 */ s8 marked;
    /* 0x149 */ u8 unk149[3];
    /* 0x14C */ f32 distance;
    /* 0x150 */ u8 unk150[0x10];
    /* 0x160 */ u8 indicatorShown;
    /* 0x161 */ u8 unk161[3];
    /* 0x164 */ f32 indicatorX;
    /* 0x168 */ f32 indicatorY;
    /* 0x16C */ u8 unk16C[0x18];
    /* 0x184 */ s8 visible;
    /* 0x185 */ u8 unk185[3];
} EnemySlot;

typedef struct EnemyList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 mode;
    /* 0x08 */ u8 unk08[0x2C];
    /* 0x34 */ EnemySlot slots[0x28];
} EnemyList;

/* The two flags at +0x20 / +0x21 of the global game state. */
typedef struct GameStateFlags {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s8 blocked;
    /* 0x21 */ u8 paused;
} GameStateFlags;

void FUN_0019af70(u32 firstA, u32 firstB, u32 secondA, u32 secondB, f32 x, f32 y, f32 width, f32 height,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 depth);
s32 mapRenderApplyPrimary(void);

extern EnemyList *g_mapEnemy;
extern GameStateFlags g_gameState;

static __inline s32 floatBits(f32 value)
{
    union {
        f32 f;
        s32 i;
    } bits;

    bits.f = value;
    return bits.i;
}

/* Draws the edge indicators of the tracked, marked enemies of the map's enemy list. */
void FUN_002b6cb0(void)
{
    EnemyList *list = g_mapEnemy;
    if (list != NULL && list->mode == 8) {
        if (g_gameState.blocked == 0 && g_gameState.paused == 0) {
            const f32 u1 = 0.328125f;
            const f32 v1 = 0.65625f;
            s32 i;
            for (i = 0; i < 0x28; i++) {
                EnemySlot *slot = &list->slots[i];
                if (slot->active != 0) {
                    slot->indicatorShown = 0;
                    if (slot->tracked != 0 && slot->visible != 0 && slot->marked != 0) {
                        mapRenderApplyPrimary();
                        s32 distance = floatBits(slot->distance);
                        if (slot->hidden == 0) {
                            f32 angle = slot->angle;
                            f32 x;
                            f32 y;
                            if (angle > 0.0f) {
                                if (floatBits(angle) > 0x42b40000) {
                                    y = 198.0f;
                                    x = (angle - 90.0f) * 1.9888889f;
                                } else {
                                    x = 0.0f;
                                    y = angle * 2.2f;
                                }
                            } else {
                                angle = -angle;
                                if (floatBits(angle) > 0x42b40000) {
                                    y = 198.0f;
                                    x = 358.0f - (angle - 90.0f) * 1.9888889f;
                                } else {
                                    x = 358.0f;
                                    y = angle * 2.2f;
                                }
                            }
                            f32 blink = slot->pulse % 20 < 10 ? 0.0f : u1;
                            u32 first;
                            u32 second;
                            if (distance < 0x43c80000) {
                                first = 0xef6c3eff;
                                second = 0xfe0b22ff;
                            } else if (distance < 0x44480000) {
                                first = 0xfbc30dff;
                                second = 0xff6c2bff;
                            } else if (distance < 0x44960000) {
                                first = 0xfff2c0ff;
                                second = 0xffd52dff;
                            } else {
                                first = 0xffffffff;
                                second = 0x2db5ffff;
                            }
                            slot->indicatorShown = 1;
                            slot->indicatorX = x + 12.0f;
                            slot->indicatorY = y + 12.0f;
                            FUN_0019af70(first, second, first, second, x, y, 42.0f, 42.0f, blink, 0.0f, u1, v1, 0.0f);
                            FUN_0019af70(0xff, 0xff, 0xff, 0xff, x, y, 42.0f, 42.0f, v1, 0.0f, u1, v1, 0.0f);
                        }
                    }
                }
            }
        }
    }
}

} /* extern "C" */
