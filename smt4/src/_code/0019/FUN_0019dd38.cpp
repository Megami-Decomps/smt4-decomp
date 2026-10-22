/* NON_MATCHING: retail hoists the zero return into r0 first, so the work pointer and constants land one register higher (r1/r2/r4/r5) and each case returns on its own. */
#include "common.h"

extern "C" {

struct Vector3 { f32 x, y, z; };
struct ModelPlacement {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ Vector3 position;
    /* 0x10 */ u32 model;
    /* 0x14 */ u32 counter;
    /* 0x18 */ u8 enabled;
};
struct ModelPlacementWork {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 counter;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ u8 requested;
    /* 0x0d */ u8 unk0D[3];
    /* 0x10 */ ModelPlacement placement;
};

extern ModelPlacementWork *g_mapModelWork;

/* Steps the model placement: after 40 frames (or on request) it advances, and 30 frames later it is removed. */
s32 FUN_0019dd38(void)
{
    ModelPlacement *placement;

    switch (g_mapModelWork->state) {
    case 0:
    case 1:
        break;
    case 3:
        placement = &g_mapModelWork->placement;
        if (++g_mapModelWork->counter > 30) {
            placement->active = 0;
            g_mapModelWork->state = 1;
            g_mapModelWork->counter = 0;
        }
        break;
    case 2:
        placement = &g_mapModelWork->placement;
        if (++g_mapModelWork->counter == 40) {
            placement->counter = 1;
            placement->enabled = 1;
        }
        if (g_mapModelWork->requested) {
            placement->counter = 2;
            placement->enabled = 1;
            g_mapModelWork->state = 3;
            g_mapModelWork->counter = 0;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
