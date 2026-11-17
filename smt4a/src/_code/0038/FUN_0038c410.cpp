#include "battle/btlScript.h"
#include "battle/BtlGlobals.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: whether the kind (top 6 bits) of value `arg` of the scripted unit is 4. */
u32 FUN_0038c410(void)
{
    s32 index = scrGetArg(0);
    BtlUnitDataA *work = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    scrSetResult(work->values[index] >> 10 == 4);
    return 1;
}

}
