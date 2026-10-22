#include "battle/btlScript.h"
#include "shard/W4_W4Match6b_BtlUnitWork.h"

extern "C" {

extern s32 scrGetArg(void);
extern BtlUnit *btlUnitGet(s32 id);
extern void scrSetResult(s32 value);

/* Script command: whether the kind (top 6 bits) of value `arg` of the scripted unit is 4. */
u32 FUN_0038c414(void)
{
    s32 index = scrGetArg();
    BtlUnitWork *work = btlUnitGet(g_btlScriptUnit)->work;

    scrSetResult(work->values[index] >> 10 == 4);
    return 1;
}

}
