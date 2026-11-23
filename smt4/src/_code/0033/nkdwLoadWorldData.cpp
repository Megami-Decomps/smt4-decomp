#include "runtime/Stdio.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
#include "map/NkdwWorldData.h"

extern "C" {
extern const char DAT_003ff7e4[];
s32 aocPackageHasTextureContent(void *aoc, s32 id, s32 kind);
void *aocLoadWorldDataFile(AocSystem *aoc, s32 id, const char *path);
void *asdLoadFileSyncDefault(const char *path);

/* Loads an NKDW world file from downloadable content or the base game and locates its sections. */
void nkdwLoadWorldData(NkdwWorldData *world, s32 id)
{
    char path[64];
    __2sprintf(path, DAT_003ff7e4, id);
    world->kind = 12;
    world->index = id - 1;
    if (aocPackageHasTextureContent(g_aocSystem, id, 1) != 0) {
        world->allocation = aocLoadWorldDataFile(g_aocSystem, id, path);
    } else {
        world->allocation = asdLoadFileSyncDefault(path);
    }
    NkdwWorldHeader *file = (NkdwWorldHeader *)world->allocation;
    world->id = id;
    world->loaded = 1;
    world->header = file;
    if (file->magic != NKDW_MAGIC) {
        world->header = NULL;
    } else {
        /* The node, link, index and area arrays follow the header in that order. */
        world->nodes = (NkdwNode *)(world->header + 1);
        world->links = (NkdwLink *)(world->nodes + world->header->nodeCount);
        world->indices = (u32 *)(world->links + world->header->linkCount);
        world->areas = (NkdwArea *)(world->indices + world->header->indexCount);
        world->extra = (u8 *)(world->areas + world->header->areaCount);
    }
}

} /* extern "C" */
