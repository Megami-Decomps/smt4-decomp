#include "common.h"

extern "C" {

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct MapMain {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u8 status;
} MapMain;

typedef struct LmapScene {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Vec3 position;
    /* 0x34 */ u8 unk34[0x1C];
    /* 0x50 */ f32 unk50;
} LmapScene;

extern MapMain *g_mapMain;
extern LmapScene *g_lmapScene;

void mapEplUpdateEntries(void);
void FUN_002d5374(void);
void FUN_002f3c28(void);
void FUN_00208cbc(void);
void FUN_003079b4(void);
void FUN_002712dc(void);
u8 FUN_0027052c(void);
void FUN_001a8cf8(void);
void FUN_0019dd38(void);
void FUN_0019dc04(void);
void FUN_001d350c(Vec3 position, f32 value);
void FUN_00274798(void);
void FUN_0027522c(void);
void FUN_00274fac(void);
void FUN_00276a3c(void);
void FUN_00273fc0(void);
void FUN_00275364(void);
void FUN_002755a8(void);
void FUN_001b4b54(void);
void FUN_0020d91c(void);
void FUN_00273f90(void);
void FUN_002c8858(void);
void FUN_002df788(void);
void FUN_001d36cc(void);

/* Per-frame map update: runs each map subsystem in order. */
void FUN_00276540(void)
{
    MapMain *mapMain = g_mapMain;

    mapEplUpdateEntries();
    FUN_002d5374();
    FUN_002f3c28();
    FUN_00208cbc();
    FUN_003079b4();
    FUN_002712dc();
    mapMain->status = FUN_0027052c();
    FUN_001a8cf8();
    FUN_0019dd38();
    FUN_0019dc04();
    FUN_001d350c(g_lmapScene->position, g_lmapScene->unk50);
    FUN_00274798();
    FUN_0027522c();
    FUN_00274fac();
    FUN_00276a3c();
    FUN_00273fc0();
    FUN_00275364();
    FUN_002755a8();
    FUN_001b4b54();
    FUN_0020d91c();
    FUN_00273f90();
    FUN_002c8858();
    FUN_002df788();
    FUN_001d36cc();
}

} /* extern "C" */
