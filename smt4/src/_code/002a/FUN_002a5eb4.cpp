/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void asdTMTexTableLoadSprites(u32 table);
void asdTMTexTableLoadEntryAsync(u32 table, u32 a);

void FUN_002a5eb4(void)
{
    asdTMTexTableLoadSprites(47);
    asdTMTexTableLoadEntryAsync(47, 0);
}

}
