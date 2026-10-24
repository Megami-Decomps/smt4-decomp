/* NON_MATCHING: retail has separate wide-area and normal-area branches that each hold their own step/distance constants in saved VFP registers and copies vectors with ldm/stm pairs; ours selects the step first (151 rows against 157). */
#include "common.h"

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

struct MapEnemyState {
    /* 0x0000 */ u8 unk0000[0x3D84];
    /* 0x3D84 */ s32 attempts;       /* spawn attempts made so far; later ones are tried further out and wider */
};

struct LmapViewState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
};

struct LmapSceneState {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Vector3 position;
};

/* The enemy being placed (observed fields). */
struct EnemyPlacement {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vector3 position;
    /* 0x2C */ f32 heading;
};

struct GameStateWide {
    /* 0x00 */ u8 unk00[0x82];
    /* 0x82 */ s16 wideArea;
};

extern "C" {

extern MapEnemyState *g_mapEnemy;
extern LmapViewState *g_lmapView;
extern LmapSceneState *g_lmapScene;
extern GameStateWide DAT_005f17fc;

u32 randRange(u32 limit);
f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
s32 FUN_0036d984(Vector3 *start, Vector3 *end, s32 flags);
s32 FUN_0025ef68(Vector3 *position, Vector3 *ground, s32 flags);
f32 mathPositionHeadingDegrees(Vector3 from, Vector3 to);

/* Tries up to four spots around the player (alternating left/right of the view heading, further out and
 * with a tighter spread after twelve attempts) and places the enemy on the first one the probe reaches
 * and that has ground. */
u32 FUN_00353200(EnemyPlacement *enemy)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        Vector3 origin = g_lmapScene->position;
        Vector3 end;
        Vector3 ground;
        Vector3 start;
        f32 angle = g_lmapView->heading;
        s32 attempt = g_mapEnemy->attempts;
        f32 distance;
        f32 step;
        f32 radians;

        if (DAT_005f17fc.wideArea != 0) {
            step = 25.0f;
        } else {
            step = 35.0f;
        }
        if (attempt > 0) {
            f32 offset = (f32)((attempt + 1) / 2);

            if ((attempt & 1) != 0) {
                angle = angle - offset * step;
            } else {
                angle = angle + offset * step;
            }
        }
        if (DAT_005f17fc.wideArea != 0) {
            if (attempt > 12) {
                distance = (f32)randRange(50) + 500.0f;
            } else {
                distance = (f32)randRange(50) + 900.0f;
            }
        } else if (attempt > 12) {
            distance = (f32)randRange(50) + 250.0f;
        } else {
            distance = (f32)randRange(50) + 560.0f;
        }
        radians = angle * 0.017453292f;
        origin.x = origin.x + FUN_001bc124(radians) * distance;
        origin.z = origin.z + FUN_001bbf0c(radians) * distance;
        g_mapEnemy->attempts++;
        end = origin;
        ground = origin;
        start = g_lmapScene->position;
        end.y = end.y + 35.0f;
        start.y = start.y + 35.0f;
        if (FUN_0036d984(&start, &end, 0) == -1) {
            origin.y = origin.y - 5.0f;
            if (FUN_0025ef68(&origin, &ground, 0) != 0) {
                enemy->position = ground;
                enemy->heading = mathPositionHeadingDegrees(end, start);
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
