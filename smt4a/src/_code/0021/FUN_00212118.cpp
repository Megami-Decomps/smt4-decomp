#include "common.h"

extern "C" {

void FUN_003de188(s32 a, s32 b);
void stateSetterSetState1(u8 *member);
void FUN_0048a378(u8 *member);
void FUN_004cf978(u8 *member, s32 value);

typedef struct Scene {
    /* 0x00000 */ u8 unk00000[0x0A];
    /* 0x0000A */ u8 closing;
    /* 0x0000B */ u8 unk0000B[0x5D];
    /* 0x00068 */ u8 member68[0x20654];
    /* 0x206BC */ u8 member206BC[1];
} Scene;
extern Scene *g_naviMain;

/* Begins closing the scene: runs FUN_003de188(1, 0), shuts down the scene's members (if it exists) and sets `closing`. */
void FUN_00212118(void)
{
    Scene *scene;

    FUN_003de188(1, 0);
    scene = g_naviMain;
    if (g_naviMain != NULL) {
        FUN_004cf978(g_naviMain->member206BC, 8);
        stateSetterSetState1(scene->member68);
        FUN_0048a378(scene->member68);
    }
    scene = g_naviMain;
    scene->closing = 1;
}

} /* extern "C" */
