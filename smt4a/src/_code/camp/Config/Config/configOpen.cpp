/* NON_MATCHING: zero-constant lifetimes, saved global/size registers and final state-store merging differ. */
#include "camp/Config/Config.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern ConfigWorkA *g_config;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void sysMemClear(void *memory, u32 size);
void *textureGetIndexedResource(u32 id);
void asdTMTexTableLoadSprites(u32 id);
void asdTMTexLoadMainHeap(u32 id, u32 node);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
void loadSlotEnsureLoaded(u32 id);
void sysPlaySe(u32 id);
void FUN_0019de98(u32 index, u32 color);
void FUN_003d05a4(ConfigWorkA *config, u32 parent);

// Open the options screen, acquiring only texture resources it must own.
void configOpen(u32 parent, u8 mode)
{
    if (g_config == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Config\\Config.cpp", 1224);
        g_config = static_cast<ConfigWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(ConfigWorkA), 1));
    }
    ConfigWorkA *config = g_config;
    sysMemClear(config, sizeof(*config));
    config->param = mode;
    config->hasType24A = 0;
    config->hasType24B = 0;
    if (textureGetIndexedResource(0x24) == NULL) {
        config->hasType24A = 1;
        asdTMTexTableLoadSprites(0x24);
    }
    if (!asdTMTexTableNodeIsLoaded(0x24, 0)) {
        config->hasType24B = 1;
        asdTMTexLoadMainHeap(0x24, 0);
    }
    asdLoadFileAsyncSimple("camp/config.bf", &config->heapA, 0);
    asdLoadFileAsyncSimple("camp/config.mbm", &config->heapB, 0);
    loadSlotEnsureLoaded(0x36);
    sysPlaySe(5);
    FUN_0019de98(0, 0xF4F4F4FF);
    FUN_003d05a4(config, parent);
    config = g_config;
    config->state = 0;
    config->unk68 = 0;
}
}
