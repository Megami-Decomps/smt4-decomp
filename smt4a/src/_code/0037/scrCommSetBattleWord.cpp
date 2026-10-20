#include "shard/Shard0037.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);

/* Script command: sets battle word `argument 0` (below 16) to argument 1. */
u32 scrCommSetBattleWord(void)
{
    u32 index = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (index < 0x10) {
        btlGetMainState()->words[index] = value;
    }
    return 1;
}

} /* extern "C" */
