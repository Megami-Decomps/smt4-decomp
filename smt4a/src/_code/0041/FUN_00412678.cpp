/* NON_MATCHING: the slot loops now match retail (element pointer stops strength reduction); the cached-command emit matches through its inline helper; only begin and texture swap their callee-saved registers (r6/r7). */
#include "gfx/TextureCommands.h"
#include "classes/Obj42072c.h"

extern "C" {
u32 asdGxGetCommandCursor(void);
u32 *enemyGrRendererBuildCommands(Obj42072cState *cache, u32 *commands); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 *FUN_00500fe4(u32 unused, u32 *commands, const TextureCommandSource *texture);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void asdModelCommitCommandRange(u32 begin, u32 end);
}

static __inline u32 *vertexResetCommandSlots(u32 *commands, const Obj42072cState *cache)
{
    for (s32 index = 0; index < 12; ++index) {
        const EffGeomVertexSlot *array = &cache->arrays[index];
        if (array->first != 0) {
            *commands++ = 0;
            *commands++ = (index * 3 + 0x203) | 0x802F0000;
            *commands++ = 0;
            *commands++ = 0;
        } else {
            *commands++ = 0;
            *commands++ = (index * 3 + 0x205) | 0xF0000;
        }
        if (cache->entries[index].enabled != 0) {
            *commands++ = index;
            *commands++ = 0x803F0232;
            *commands++ = 0;
            *commands++ = 0;
            *commands++ = 0;
            *commands++ = 0;
        }
    }
    return commands;
}

// Generate the cached command words on first use, copy them out and append the texture commands
// (FUN_00419c34, FUN_00419ce0 and FUN_00419d8c do the same with their own caches).
static __inline u32 *cacheEmitCommands(Obj42072cState *cache, u32 *commands, const TextureCommandSource *texture)
{
    if (cache->commandWordCount == 0) {
        u32 *end = enemyGrRendererBuildCommands(cache, cache->commands);
        cache->commandWordCount = end - cache->commands;
    }
    __aeabi_memcpy4(commands, cache->commands, cache->commandWordCount * sizeof(u32));
    return FUN_00500fe4((u32)cache, commands + cache->commandWordCount, texture);
}

extern "C" void FUN_00412678(u32 unused, Obj42072cState *cache, const TextureCommandSource *texture)
{
    u32 *begin = (u32 *)asdGxGetCommandCursor();
    u32 *commands = begin;
    *commands++ = 0x100;
    *commands++ = 0x20229;
    *commands++ = 0x300;
    *commands++ = 0x2025E;
    *commands++ = 1;
    *commands++ = 0xF025F;
    *commands++ = 0x100;
    *commands++ = 0x30253;
    commands = vertexResetCommandSlots(commands, cache);
    commands = cacheEmitCommands(cache, commands, texture);
    commands = vertexResetCommandSlots(commands, cache);
    asdModelCommitCommandRange((u32)begin, (u32)commands);
}
