#include "shard/Shard003B.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);

/* Script command: stores argument 0 as halfword `argument 1` of the battle's table at +0x2344. */
u32 scrCommSetBattleTable2344(void)
{
    u16 value = scrGetArg(0);
    s32 index = scrGetArg(1);

    BtlStateB *state = btlGetMainState();

    *(u16 *)((u32)state + index * 2 + 0x2344) = value;
    return 1;
}

} /* extern "C" */
