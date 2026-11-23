#include "runtime/Stdio.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"
#include "map/NkdwWorldData.h"

extern "C" {
extern const char DAT_0052726c[];
void *asdLoadFileSyncDefault(const char *path);
bool aocPackageHasTextureContent(AocSystemA *system, s32 id, u32 kind);
void *aocLoadWorldDataFile(AocSystemA *system, s32 id, const char *path);

/* Loads an NKDW world file from downloadable content or the base game and locates its sections. */
void nkdwLoadWorldData(NkdwWorldData *world, s32 id)
{
    char path[64];
    __2sprintf(path, DAT_0052726c, id);
    world->kind = 6;
    world->index = id - 1;
    if (aocPackageHasTextureContent(g_aocSystem, id, 1)) {
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
