#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void FUN_003de188(s32 a, s32 b);
void stateSetterSetState1(u8 *member);
void FUN_0048a378(u8 *member);
void FUN_004cf978(u8 *member, s32 value);


/* Begins closing the scene: runs FUN_003de188(1, 0), shuts down the scene's members (if it exists) and sets `active`. */
void naviMainBeginClose(void)
{
    NaviMainA *navi;

    FUN_003de188(1, 0);
    navi = g_naviMain;
    if (g_naviMain != NULL) {
        FUN_004cf978(g_naviMain->slider, 8);
        stateSetterSetState1(navi->panel);
        FUN_0048a378(navi->panel);
    }
    navi = g_naviMain;
    navi->active = 1;
}

} /* extern "C" */
