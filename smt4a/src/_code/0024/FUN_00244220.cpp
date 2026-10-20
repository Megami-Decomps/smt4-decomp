/* NON_MATCHING: register choice only: retail holds the zero in r0 and the work pointer in r1; the build swaps them. */
#include "common.h"

extern "C" {

typedef struct MapDepartWork {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u16 unk18;
    /* 0x1A */ u8 unk1A[0x0A];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
} MapDepartWork;

extern MapDepartWork *g_mapDepartWork; /* 0x58069c */

/* Clears the map departure work's request fields. */
void FUN_00244220(void)
{
    MapDepartWork *work = g_mapDepartWork;

    work->unk18 = 0;
    work->unk24 = 0;
    work->unk28 = 0;
    work->unk2C = 0;
    work->unk30 = 0;
    work->unk0C = 0;
    work->unk10 = 0;
    work->unk14 = 0;
}

} /* extern "C" */
