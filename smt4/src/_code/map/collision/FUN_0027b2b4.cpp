/* NON_MATCHING: loads the map collision files (primary and optional secondary), allocates the work buffers and builds the collision tables for them; written from the decompilation and the retail disassembly, string pool order and the duplicated relocation code not compared with retail */
#include "AsdSDK/AsdDebug.h"

struct MapCollisionTables {
    /* 0x00 */ u32 offsetA;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 offsetB;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 offsetC;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 offsetD;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 offsetE;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 offsetF;
};

struct MapCollisionFile {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 tablesOffset;
};

struct MapCollision {
    /* 0x00 */ u8 loaded;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 counts[5];
    /* 0x18 */ void *bufferA;
    /* 0x1C */ void *bufferB;
    /* 0x20 */ void *bufferC;
    /* 0x24 */ void *bufferD;
    /* 0x28 */ MapCollisionFile *file;       /* the file being processed */
    /* 0x2C */ MapCollisionFile *fileBase;
    /* 0x30 */ MapCollisionTables *tables;
};

#define MAP_COLLISION_SOURCE "c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\collision.cpp"
#define MAP_ID_SPECIAL_A 0x29
#define MAP_ID_SPECIAL_B 0x2A
#define MAP_ID_SPECIAL_C 0x2B
#define MAP_ID_SPECIAL_MAP 0x24
#define MAP_ID_FIELD_BASE 100

extern "C" {
extern MapCollision g_mapCollision;

void textFormatBuffer(char *out, const char *format, ...);
MapCollisionFile *fileLoadSync(const char *path, u32 *size, u32 flags);
void *asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void asdMemFree(void *block);
void FUN_001c24e4(s32 set);
void FUN_001c2778(s32 set);
void FUN_001c1ee8(s32 set);
void FUN_001c2200(s32 set);

/* Builds the collision file name for map `id` and sub-area `sub`. */
static __inline void mapCollisionPath(char *path, s32 id, u32 sub)
{
    if (id - 0x65U < 99)
        textFormatBuffer(path, "map/L%03d/a%03d_%02d.col", id - MAP_ID_FIELD_BASE, id - MAP_ID_FIELD_BASE, sub);
    else
        textFormatBuffer(path, "map/m%03d/a%03d_%02d.col", id, id, sub);
}

/* Loads `path`, relocates the table offsets of the file and keeps its pointers in the state. */
static __inline void mapCollisionAttach(const char *path)
{
    u32 size[1];
    MapCollisionFile *file = fileLoadSync(path, size, 0);
    MapCollisionTables *tables = reinterpret_cast<MapCollisionTables *>(reinterpret_cast<u8 *>(file) + file->tablesOffset);
    g_mapCollision.file = file;
    g_mapCollision.fileBase = file;
    g_mapCollision.tables = tables;
    u32 base = reinterpret_cast<u32>(file);
    tables->offsetA += base;
    tables->offsetB += base;
    tables->offsetC += base;
    tables->offsetD += base;
    tables->offsetE += base;
    tables->offsetF += base;
}

void FUN_0027b2b4(s32 id, u32 sub, s32 secondId, u32 secondSub)
{
    g_mapCollision.counts[0] = 0;
    g_mapCollision.counts[1] = 0;
    g_mapCollision.counts[2] = 0;
    g_mapCollision.counts[3] = 0;
    g_mapCollision.counts[4] = 0;
    bool hasSecond = false;
    g_mapCollision.loaded = 0;

    char path[64];
    char secondPath[68];
    if (id == MAP_ID_SPECIAL_A || id == MAP_ID_SPECIAL_B || id == MAP_ID_SPECIAL_C)
        textFormatBuffer(path, "map/m%03d/a%03d_%02d.col", MAP_ID_SPECIAL_MAP, MAP_ID_SPECIAL_MAP, 1);
    else if (id == MAP_ID_FIELD_BASE)
        textFormatBuffer(path, "map/L000/a000.col");
    else
        mapCollisionPath(path, id, sub);
    if (secondId != 0) {
        hasSecond = true;
        mapCollisionPath(secondPath, secondId, secondSub);
    }

    mapCollisionAttach(path);
    asdDebugTrace(MAP_COLLISION_SOURCE, 743);
    g_mapCollision.bufferA = asdMemoryAlloc(0x100, 0x100, 0, 0x15000, 1);
    asdDebugTrace(MAP_COLLISION_SOURCE, 749);
    g_mapCollision.bufferB = asdMemoryAlloc(0x100, 0x100, 0, 0xFC00, 1);
    asdDebugTrace(MAP_COLLISION_SOURCE, 755);
    g_mapCollision.bufferC = asdMemoryAlloc(0x100, 0x100, 0, 0x6900, 1);
    asdDebugTrace(MAP_COLLISION_SOURCE, 761);
    g_mapCollision.bufferD = asdMemoryAlloc(0x100, 0x100, 0, 0x1F800, 1);
    FUN_001c24e4(0);
    FUN_001c2778(0);
    FUN_001c1ee8(0);
    FUN_001c2200(0);
    asdMemFree(g_mapCollision.file);
    g_mapCollision.file = NULL;

    if (hasSecond) {
        mapCollisionAttach(secondPath);
        FUN_001c24e4(1);
        FUN_001c2778(1);
        FUN_001c1ee8(1);
        FUN_001c2200(1);
        asdMemFree(g_mapCollision.file);
    }
    g_mapCollision.file = NULL;
}

} /* extern "C" */
