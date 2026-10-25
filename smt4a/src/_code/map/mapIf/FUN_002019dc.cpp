/* NON_MATCHING: only the three corner-quad tables differ: retail walks base, base+1584, base+1584*2 chained from one pointer and orders the stores differently; here each table is addressed from the global with its own offset. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

struct MapIfVec3 {
    f32 x, y, z;
};

/* A quad drawn as a triangle strip. */
struct MapIfQuad {
    MapIfVec3 corner[4];
};

/* The map interface block (0xCD30 bytes): its three tasks and the world-indicator state. */
struct MapIf {
    /* 0x0000 */ u32 calcTask;
    /* 0x0004 */ u32 updateTask;
    /* 0x0008 */ u32 indicatorTask;
    /* 0x000C */ u8 unk0C[8];
    /* 0x0014 */ u8 unk14;
    /* 0x0015 */ u8 mode;
    /* 0x0016 */ u8 unk16;
    /* 0x0017 */ u8 unk17;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C;
    /* 0x001D */ u8 unk1D;
    /* 0x001E */ u8 unk1E[2];
    /* 0x0020 */ u32 unk20;
    /* 0x0024 */ u8 unk24;
    /* 0x0025 */ u8 unk25[0xF];
    /* 0x0034 */ u8 unk34;
    /* 0x0035 */ u8 unk35[3];
    /* 0x0038 */ u32 unk38;
    /* 0x003C */ u32 unk3C;
    /* 0x0040 */ u32 unk40;
    /* 0x0044 */ u32 unk44;
    /* 0x0048 */ u8 unk48[0xCB94];
    /* 0xCBDC */ u8 unkCBDC;
    /* 0xCBDD */ u8 unkCBDD[0x10B];
    /* 0xCCE8 */ u16 unkCCE8;
    /* 0xCCEA */ u16 unkCCEA;
    /* 0xCCEC */ u8 unkCCEC[4];
    /* 0xCCF0 */ u8 unkCCF0;
    /* 0xCCF1 */ u8 unkCCF1[0xB];
    /* 0xCCFC */ f32 unkCCFC;
    /* 0xCD00 */ f32 unkCD00;
    /* 0xCD04 */ f32 unkCD04;
    /* 0xCD08 */ u8 unkCD08;
    /* 0xCD09 */ u8 unkCD09[7];
    /* 0xCD10 */ u8 unkCD10;
    /* 0xCD11 */ u8 unkCD11[3];
    /* 0xCD14 */ u32 unkCD14;
    /* 0xCD18 */ f32 unkCD18;
    /* 0xCD1C */ u8 unkCD1C;
    /* 0xCD1D */ u8 unkCD1D[3];
    /* 0xCD20 */ f32 anchor[2];
    /* 0xCD28 */ u32 unkCD28;
    /* 0xCD2C */ u32 unkCD2C;
};
typedef char MapIfSizeCheck[sizeof(MapIf) == 0xCD30 ? 1 : -1];

extern "C" {
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 parent);
void FUN_002747dc(void);
s32 FUN_00226538(u32 handle);
void mapIfFree(u32 handle);
s32 FUN_0029d760(u32 handle);
s32 FUN_00315d34(u32 handle);
s32 mapIfDrawWorldIndicators(u32 handle);

extern MapIf *g_mapIf;
extern const char DAT_00201a50[];
extern MapIfQuad DAT_006087e4[3][33];

/* Creates the map interface: its work block, the three tasks and the corner quads of the indicators. */
void FUN_002019dc(u32 parent, u8 mode)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 987);
    g_mapIf = (MapIf *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xCD30, 1);
    MapIf *mapIf = g_mapIf;
    mapIf->unk14 = 0;
    mapIf->unk16 = 0;
    mapIf->unk18 = 0;
    mapIf->unk1D = 0;
    mapIf->unk20 = 0;
    mapIf->unk24 = 0;
    mapIf->unk34 = 0;
    mapIf->unk38 = 0;
    mapIf->unk3C = 0;
    mapIf->unk40 = 0;
    mapIf->unk44 = 0;
    mapIf->unkCBDC = 0;
    mapIf->unkCCE8 = 0;
    mapIf->unkCCEA = 0;
    mapIf->unkCCF0 = 0;
    mapIf->unkCCFC = 0.0f;
    mapIf->unkCD00 = 0.0f;
    mapIf->unkCD04 = 0.0f;
    mapIf->unkCD08 = 0;
    mapIf->unkCD10 = 0;
    mapIf->unkCD14 = 0;
    mapIf->unkCD18 = 0.0f;
    mapIf->unkCD1C = 0;
    mapIf->anchor[0] = -40.0f;
    mapIf->anchor[1] = 195.0f;
    mapIf->unkCD28 = 0;
    mapIf->unkCD2C = 0;
    mapIf->calcTask = taskCreateDraw("MAPIF C", 4, 0, 0, FUN_00226538, mapIfFree, NULL, parent);
    mapIf->updateTask = taskCreateDraw("MAPIF U", 117, 0, 0, FUN_0029d760, NULL, NULL, mapIf->calcTask);
    taskCreateDraw("MAP FADE", 138, 0, 0, FUN_00315d34, NULL, NULL, mapIf->calcTask);
    mapIf->indicatorTask = taskCreateDraw("MIF3DL", 113, 0, 0, mapIfDrawWorldIndicators, NULL, NULL, mapIf->calcTask);

    MapIfQuad *quads = DAT_006087e4[0];
    quads[0].corner[0].x = -64.0f;
    quads[0].corner[0].y = 16.0f;
    quads[0].corner[0].z = 0.0f;
    quads[0].corner[1].x = -64.0f;
    quads[0].corner[1].y = -16.0f;
    quads[0].corner[1].z = 0.0f;
    quads[0].corner[2].x = 64.0f;
    quads[0].corner[2].y = 16.0f;
    quads[0].corner[2].z = 0.0f;
    quads[0].corner[3].x = 64.0f;
    quads[0].corner[3].y = -16.0f;
    quads[0].corner[3].z = 0.0f;
    quads[33].corner[0].x = -64.0f;
    quads[33].corner[0].y = 0.0f;
    quads[33].corner[0].z = 16.0f;
    quads[33].corner[1].x = -64.0f;
    quads[33].corner[1].y = 0.0f;
    quads[33].corner[1].z = -16.0f;
    quads[33].corner[2].x = 64.0f;
    quads[33].corner[2].y = 0.0f;
    quads[33].corner[2].z = 16.0f;
    quads[33].corner[3].x = 64.0f;
    quads[33].corner[3].y = 0.0f;
    quads[33].corner[3].z = -16.0f;
    quads[66].corner[0].x = -64.0f;
    quads[66].corner[0].y = 0.0f;
    quads[66].corner[0].z = -16.0f;
    quads[66].corner[1].x = -64.0f;
    quads[66].corner[1].y = 0.0f;
    quads[66].corner[1].z = 16.0f;
    quads[66].corner[2].x = 64.0f;
    quads[66].corner[2].y = 0.0f;
    quads[66].corner[2].z = -16.0f;
    quads[66].corner[3].x = 64.0f;
    quads[66].corner[3].y = 0.0f;
    quads[66].corner[3].z = 16.0f;
    mapIf->mode = mode;
    FUN_002747dc();
}

}
