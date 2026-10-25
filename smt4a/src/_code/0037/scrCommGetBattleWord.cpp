#include "battle/BtlMainAccess.h"
#include "shard/Shard0037.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is battle word `argument 0` (below 16). */
u32 scrCommGetBattleWord(void)
{
    u32 index = scrGetArg(0);

    if (index < 0x10) {
        scrSetResult(reinterpret_cast<BtlStateB *>(btlGetMainState())->words[index]);
    }
    return 1;
}

} /* extern "C" */
