/* NON_MATCHING: the unit's work pointer is loaded into r0 (retail: r1) and the +0x100 base is added before the return constant. */
#include "shard/W4_W4Match6b_BtlUnitWork.h"

extern "C" {

extern s32 g_btlScriptUnit;
extern u16 scrGetArg(s32 index);
extern BtlUnit *btlUnitGet(s32 id);

/* Script command: queues command 8 with the argument on the scripted unit. */
u32 FUN_00372904(void)
{
    u16 arg = scrGetArg(0);
    BtlUnitWork *work = btlUnitGet(g_btlScriptUnit)->work;

    work->command = 8;
    work->commandArg = arg;
    return 1;
}

}
