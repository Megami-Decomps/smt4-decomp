/* The cached command words of a CachedCommandRecord: built on first use by enemyGrRendererBuildCommands, then copied out by the
 * record emitters (FUN_00349cdc, FUN_00349d88 and FUN_00349e34). */
#ifndef GFX_CACHEDCOMMANDCOUNT_H
#define GFX_CACHEDCOMMANDCOUNT_H

#include "gfx/CachedCommands.h"

extern "C" {
/* Writes the record's command words into `words` and returns the end of what it wrote. */
u32 *enemyGrRendererBuildCommands(CachedCommandWords *commands, u32 *words);
}

/* The number of cached command words, building them on first use. Inlined by all three emitters: each reads the
 * count back from the record after storing it. */
static __inline s32 cachedCommandWordCount(CachedCommandWords *commands)
{
    if (commands->count == 0) {
        u32 *end = enemyGrRendererBuildCommands(commands, commands->words);
        commands->count = end - commands->words;
    }
    return commands->count;
}

#endif
