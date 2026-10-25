#include "battle/BtlMainAccess.h"
#include "shard/Shard003B.h"

extern "C" {

extern void *objectRefRelease(void *p);
extern void asdOperatorDelete(void *p);

/* Script command: releases the battle's object at +0x2298 and clears the byte at +0x22B4. */
u32 scrCommReleaseBattleObj2298(void)
{
    BtlStateB *state = reinterpret_cast<BtlStateB *>(btlGetMainState());

    if (state->unk2298 != NULL) {
        asdOperatorDelete(objectRefRelease(state->unk2298));
        state->unk2298 = NULL;
    }
    state->unk22B4 = 0;
    return 1;
}

} /* extern "C" */
