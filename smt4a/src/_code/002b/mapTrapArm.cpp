#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

typedef struct Armed002ba400 {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MapVector pos;
    /* 0x10 */ f32 angle;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19[3];
} Armed002ba400;

typedef struct Trap002ba400 {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ u8 unk0c;
    /* 0x0d */ u8 unk0d[3];
    /* 0x10 */ Armed002ba400 armed;
    /* 0x2c */ u8 unk2c[0x35];
    /* 0x61 */ u8 hidden;
    /* 0x62 */ u8 unk62[0xa];
    /* 0x6c */ u8 unk6c;
} Trap002ba400;

extern Trap002ba400 *g_mapTrap;    /* 0x587f0c */

/* Arms the map trap (state 1 -> 2) at the scene's position and angle; `hide` sets the hidden flag. */
void mapTrapArm(s32 hide)
{
    Trap002ba400 *trap = g_mapTrap;
    LmapSceneA *scene;
    Armed002ba400 *armed;

    if (trap->state == 1) {
        trap->unk04 = 0;
        trap->state = 2;
        trap->unk0c = 0;
        trap->unk6c = 0;
        if (hide != 0) {
            trap->hidden = 1;
        } else {
            trap->hidden = 0;
        }
        armed = &trap->armed;
        armed->active = 1;
        scene = g_lmapScene;
        armed->pos = scene->pose.position;
        armed->angle = scene->pose.heading;
        armed->unk14 = 0;
        armed->unk18 = 1;
    }
}

} /* extern "C" */
