/* NON_MATCHING: retail moves the output pointer into r0 and the matrix into r1 at entry and writes the two header
 * words with one `strd r2, r3, [r0], #8`; the build keeps the output in r1 and stores the words separately. The
 * rest matches. */
/* Emits a selected cached graphics-command record, generating its words on first use. */
#include <string.h>
#include "gfx/CachedCommandCount.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
extern u8 DAT_005dee3e;
void FUN_00500fe4(CachedCommandWords *commands, u32 *destination, const void *trailer);

void FUN_00419c34(CachedCommandTable *table, u32 *destination, u32 index, const f32 *matrix)
{
    CachedCommandRecord *record = table->recordLists[1][index];
    if (record != NULL) {
        const void *trailer = record->trailer;
        destination[0] = 0x80000000u | DAT_005dee3e;
        destination[1] = 0xF02C0;
        destination += 2;
        FUN_0019a270(destination, matrix, 0xBF02C1);
        CachedCommandWords *commands = &record->commands;
        destination += 14;
        memcpy(destination, commands->words, cachedCommandWordCount(commands) * sizeof(u32));
        FUN_00500fe4(commands, destination + commands->count, trailer);
    }
}
}
