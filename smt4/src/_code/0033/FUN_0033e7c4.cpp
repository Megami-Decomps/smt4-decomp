/* NON_MATCHING: register choice only: retail holds the "loaded" 1 in r2, this build in r1. */
#include "addon/aocMain.h"

#define WORLD_DATA_MAGIC 0x57444b4e /* "NKDW" */

/* Header of a world data file; five record arrays follow it. */
struct WorldDataHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u16 nodeCount;
    /* 0x06 */ u16 indexCount;
    /* 0x08 */ u32 linkCount;
    /* 0x0c */ u16 areaCount;
    /* 0x0e */ u8 unk0e[0x1a];
};

struct WorldNode { u8 unk00[0x20]; };
struct WorldLink { u8 unk00[0x28]; };
struct WorldArea { u8 unk00[0x18]; };

struct WorldData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 id;
    /* 0x08 */ s32 kind;
    /* 0x0c */ s32 index;
    /* 0x10 */ WorldDataHeader *header;
    /* 0x14 */ WorldNode *nodes;
    /* 0x18 */ WorldLink *links;
    /* 0x1c */ u32 *indices;
    /* 0x20 */ WorldArea *areas;
    /* 0x24 */ u8 *extra;
    /* 0x28 */ void *file;
    /* 0x2c */ u8 unk2c[0x10];
    /* 0x3c */ u8 loaded;
};

extern "C" {
extern const char DAT_003ff7e4[];
extern AocSystem *g_aocSystem;
s32 textFormatBuffer(char *output, const char *format, ...);
s32 FUN_0023e3a4(void *aoc, s32 id, s32 kind);
void *aocLoadWorldDataFile(AocSystem *aoc, s32 id, const char *path);
void *asdLoadFileSyncDefault(const char *path);

/* Loads world data file `id` (from downloadable content when it provides one) and locates its
 * record arrays; the header is NULL when the file is not world data. */
void FUN_0033e7c4(WorldData *world, s32 id)
{
    char path[64];
    textFormatBuffer(path, DAT_003ff7e4, id);
    world->kind = 12;
    world->index = id - 1;
    void *file;
    if (FUN_0023e3a4(g_aocSystem, id, 1) != 0) {
        file = aocLoadWorldDataFile(g_aocSystem, id, path);
    } else {
        file = asdLoadFileSyncDefault(path);
    }
    world->file = file;
    world->id = id;
    world->loaded = 1;
    WorldDataHeader *header = (WorldDataHeader *)file;
    world->header = header;
    if (header->magic != WORLD_DATA_MAGIC) {
        world->header = NULL;
        return;
    }
    world->nodes = (WorldNode *)(header + 1);
    world->links = (WorldLink *)(world->nodes + header->nodeCount);
    world->indices = (u32 *)(world->links + header->linkCount);
    world->areas = (WorldArea *)(world->indices + header->indexCount);
    world->extra = (u8 *)(world->areas + header->areaCount);
}
}
