/* NON_MATCHING: incomplete: retail also selects a float from `value % 10` of the word at slot+0x144 (smull by 0x66666667), compares the angle as integer bits, and passes ~9 float arguments (42.0, 0.328, 0.656, ...) to both FUN_0019af70 calls; none of that is reproduced yet. */
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
    /* 0x141 */ u8 tracked;
    /* 0x142 */ u8 unk142[6];
    /* 0x148 */ u8 marked;
    /* 0x149 */ u8 unk149[3];
    /* 0x14C */ f32 distance;
    /* 0x150 */ u8 unk150[0x10];
    /* 0x160 */ u8 indicatorShown;
    /* 0x161 */ u8 unk161[3];
    /* 0x164 */ f32 indicatorX;
    /* 0x168 */ f32 indicatorY;
    /* 0x16C */ u8 unk16C[0x1C];
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

s32 FUN_0019af70(...);
s32 mapRenderApplyPrimary(void);

extern EnemyList *g_mapEnemy;
extern GameStateFlags g_gameState;

void FUN_002b6cb0(void)
{
    EnemyList *list = g_mapEnemy;
    if (list != NULL && list->mode == 8) {
        if (g_gameState.blocked == 0 && g_gameState.paused == 0) {
            s32 i;
            for (i = 0; i < 0x28; i++) {
                EnemySlot *slot = &list->slots[i];
                if (slot->active != 0) {
                    slot->indicatorShown = 0;
                    if (slot->tracked != 0 && slot->marked != 0) {
                        mapRenderApplyPrimary();
                        if (slot->hidden == 0) {
                            f32 angle = slot->angle;
                            f32 x = 0.0f;
                            f32 y = 198.0f;
                            if (angle > 0.0f) {
                                if (angle > 90.0f) {
                                    x = (angle - 90.0f) * 1.9888889f;
                                } else {
                                    y = angle * 2.2f;
                                }
                            } else {
                                angle = -angle;
                                x = 358.0f;
                                if (angle > 90.0f) {
                                    x = 358.0f - (angle - 90.0f) * 1.9888889f;
                                } else {
                                    y = angle * 2.2f;
                                }
                            }
                            u32 first = 0xef6c3eff;
                            u32 second = 0xfe0b22ff;
                            f32 distance = slot->distance;
                            if (distance >= 400.0f) {
                                if (distance < 800.0f) {
                                    first = 0xfbc30dff;
                                    second = 0xff6c2bff;
                                } else if (distance < 1200.0f) {
                                    first = 0xfff2c0ff;
                                    second = 0xffd52dff;
                                } else {
                                    first = 0xffffffff;
                                    second = 0x2db5ffff;
                                }
                            }
                            slot->indicatorShown = 1;
                            slot->indicatorX = x + 12.0f;
                            slot->indicatorY = y + 12.0f;
                            FUN_0019af70(first, second, first, second);
                            FUN_0019af70(0xff, 0xff, 0xff);
                        }
                    }
                }
            }
        }
    }
}

} /* extern "C" */
