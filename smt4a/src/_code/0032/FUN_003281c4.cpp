#include "common.h"

struct NaviMain {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 markers;  /* the map-marker owner */
};

extern "C" {
extern NaviMain *g_naviMain;
void FUN_00486328(void *owner, s32 slot, s32 enable, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged);

static __inline void naviMarkerEnable(NaviMain *navi, s32 slot, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged)
{
    FUN_00486328(&navi->markers, slot, 1, id, x, y, z, sub, flagged);
}

/* Enables map marker `slot` of the navigation screen at (x, y, z), if the navigation screen exists. */
void FUN_003281c4(s32 slot, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged)
{
    if (NaviMain *navi = g_naviMain) {
        naviMarkerEnable(navi, slot, id, x, y, z, sub, flagged);
    }
}
}
