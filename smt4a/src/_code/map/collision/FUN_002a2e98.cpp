/* NON_MATCHING: prologue scheduling only (240 rows each, every other instruction agrees): retail loads the collision block address and the zero first and copies the map/second/area arguments to r4/r5/r7 after the field stores; ours copies them before. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

/* The map collision data in use (observed fields), at g_mapCollision. */
struct MapCollisionState {
    /* 0x00 */ u8 loaded;
    /* 0x01 */ u8 secondLoaded;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *bufferA;
    /* 0x1C */ void *bufferB;
    /* 0x20 */ void *bufferC;
    /* 0x24 */ void *bufferD;
    /* 0x28 */ u8 *file;
    /* 0x2C */ u8 *fileCopy;
    /* 0x30 */ u32 *table;
};

#define COLLISION_PATH "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\collision.cpp"

extern "C" {

extern MapCollisionState g_mapCollision;

void textFormatBuffer(char *destination, const char *format, ...);
u8 *FUN_0013c174(char *path, u32 *size, u32 flags);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 enabled);
void asdMemFree(void *block);
void FUN_0025f954(s32 which);
void FUN_0025fbe8(s32 which);
void FUN_0025f358(s32 which);
void FUN_0025f670(s32 which);

/* Loads the collision data of map `map`/`area` (and, when `second` is non-zero, a second map/area pair
 * as an overlay): allocates the work buffers and builds both data sets. */
void FUN_002a2e98(s32 map, u32 area, s32 second, u32 secondArea)
{
    g_mapCollision.unk04 = 0;
    g_mapCollision.unk08 = 0;
    g_mapCollision.unk0C = 0;
    g_mapCollision.unk10 = 0;
    g_mapCollision.unk14 = 0;
    g_mapCollision.loaded = 0;
    g_mapCollision.secondLoaded = 0;
    char path[0x40];
    char secondPath[0x40];
    u32 size;
    u8 *file;
    s32 hasSecond = 0;
    if (map == 100) {
        textFormatBuffer(path, "map/L000/a000.col");
    } else {
        if ((u32)(map - 101) < 99) {
            textFormatBuffer(path, "map/L%03d/a%03d_%02d.col", map - 100, map - 100, area);
        } else {
            textFormatBuffer(path, "map/m%03d/a%03d_%02d.col", map, map, area);
        }
        if (map == 44 || map == 47) {
            textFormatBuffer(path, "map/m%03d/a%03d_%02d.col", 43, 43, 2);
        }
        if (map == 45 || map == 46) {
            textFormatBuffer(path, "map/m%03d/a%03d_%02d.col", 43, 43, 1);
        }
    }
    if (second != 0) {
        hasSecond = 1;
        if ((u32)(second - 101) < 99) {
            textFormatBuffer(secondPath, "map/L%03d/a%03d_%02d.col", second - 100, second - 100, secondArea);
        } else {
            textFormatBuffer(secondPath, "map/m%03d/a%03d_%02d.col", second, second, secondArea);
        }
    }
    file = FUN_0013c174(path, &size, 0);
    g_mapCollision.file = file;
    g_mapCollision.fileCopy = file;
    g_mapCollision.table = (u32 *)(file + *(u32 *)(file + 12));
    g_mapCollision.table[0] = (u32)(file + g_mapCollision.table[0]);
    g_mapCollision.table[2] = (u32)(file + g_mapCollision.table[2]);
    g_mapCollision.table[4] = (u32)(file + g_mapCollision.table[4]);
    g_mapCollision.table[6] = (u32)(file + g_mapCollision.table[6]);
    g_mapCollision.table[8] = (u32)(file + g_mapCollision.table[8]);
    g_mapCollision.table[10] = (u32)(file + g_mapCollision.table[10]);
    asdDebugTrace(COLLISION_PATH, 782);
    g_mapCollision.bufferA = asdMemoryAlloc(0x100, 0x100, 0, 0x15000, 1);
    asdDebugTrace(COLLISION_PATH, 788);
    g_mapCollision.bufferB = asdMemoryAlloc(0x100, 0x100, 0, 0xFC00, 1);
    asdDebugTrace(COLLISION_PATH, 794);
    g_mapCollision.bufferC = asdMemoryAlloc(0x100, 0x100, 0, 0x6900, 1);
    asdDebugTrace(COLLISION_PATH, 800);
    g_mapCollision.bufferD = asdMemoryAlloc(0x100, 0x100, 0, 0x1F800, 1);
    FUN_0025f954(0);
    FUN_0025fbe8(0);
    FUN_0025f358(0);
    FUN_0025f670(0);
    asdMemFree(g_mapCollision.file);
    g_mapCollision.file = NULL;
    if (hasSecond != 0) {
        file = FUN_0013c174(secondPath, &size, 0);
        g_mapCollision.file = file;
        g_mapCollision.fileCopy = file;
        g_mapCollision.table = (u32 *)(file + *(u32 *)(file + 12));
        g_mapCollision.table[0] = (u32)(file + g_mapCollision.table[0]);
        g_mapCollision.table[2] = (u32)(file + g_mapCollision.table[2]);
        g_mapCollision.table[4] = (u32)(file + g_mapCollision.table[4]);
        g_mapCollision.table[6] = (u32)(file + g_mapCollision.table[6]);
        g_mapCollision.table[8] = (u32)(file + g_mapCollision.table[8]);
        g_mapCollision.table[10] = (u32)(file + g_mapCollision.table[10]);
        FUN_0025f954(1);
        FUN_0025fbe8(1);
        FUN_0025f358(1);
        FUN_0025f670(1);
        asdMemFree(g_mapCollision.file);
        g_mapCollision.file = NULL;
    }
}

} /* extern "C" */
