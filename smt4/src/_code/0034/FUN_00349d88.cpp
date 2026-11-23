/* NON_MATCHING: retail moves the output pointer into r0 and the matrix into r1 at entry and writes the two header
 * words with one `strd r2, r3, [r0], #8`; the build keeps the output in r1 and stores the words separately. The
 * rest matches. */
/* Emits a selected cached graphics-command record, generating its words on first use. */
#include <string.h>
#include "gfx/CachedCommandCount.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
extern u8 DAT_00490e3e;
void FUN_0023bb00(CachedCommandWords *commands, u32 *destination, const void *trailer);

void FUN_00349d88(CachedCommandTable *table, u32 *destination, u32 index, const f32 *matrix)
{
    CachedCommandRecord *record = table->recordLists[0][index];
    if (record != NULL) {
        const void *trailer = record->trailer;
        destination[0] = 0x80000000u | DAT_00490e3e;
        destination[1] = 0xF02C0;
        destination += 2;
        FUN_0023ae1c(destination, matrix, 0xBF02C1);
        CachedCommandWords *commands = &record->commands;
        destination += 14;
        memcpy(destination, commands->words, cachedCommandWordCount(commands) * sizeof(u32));
        FUN_0023bb00(commands, destination + commands->count, trailer);
    }
}
}
