/* NON_MATCHING: store scheduling: retail stores the four halfwords in field order 0xcce8..0xccee; here the compiler hoists the arg store */
#include "common.h"

extern "C" {

typedef struct MapIf {
    /* 0x0000 */ u8 unk0000[0xCCE8];
    /* 0xCCE8 */ u16 request;
    /* 0xCCEA */ u16 unkCCEA;
    /* 0xCCEC */ s16 id;
    /* 0xCCEE */ u16 arg;
} MapIf;

extern MapIf *g_mapIf;

extern s32 FUN_00376f94(void);
extern s32 gameFlagsValueGet(s32 id);

/* Queues a map interface request (1) for `id` and `arg`, unless the id is blocked: 0x24, 0x29 while FUN_00376f94 is 1, or an id below 100 (other than 0x18) that gameFlagsValueGet reports as 1. */
void FUN_0033e014(s32 id, u16 arg)
{
    MapIf *mapIf = g_mapIf;

    if (id != 0x24 && (FUN_00376f94() != 1 || gameFlagsValueGet(0x29) != 1) &&
        (id == 0x18 || id >= 100 || gameFlagsValueGet(id) != 1)) {
        mapIf->id = id;
        mapIf->arg = arg;
        mapIf->request = 1;
        mapIf->unkCCEA = 0;
    }
}

} /* extern "C" */
