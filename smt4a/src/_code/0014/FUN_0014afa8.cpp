/* Tail call into the function that follows. */
#include "common.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

void loadSlotRequestAsync(u32 a, u32 b);
void asdTMTexTableLoadSprites(u32 a);

void FUN_0014afa8(void)
{
    loadSlotRequestAsync(31, 1);
    asdTMTexTableLoadSprites(26);
    FUN_0014afd0(26, 0);
}

}
