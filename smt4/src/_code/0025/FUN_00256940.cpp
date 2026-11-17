#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlScript.h"
#include "battle/BtlGlobals.h"

extern "C" {

// True when no battle, editor or main-loop flag blocks the guarded step.
bool FUN_00256940(BtlCamera *context, const BtlMainState *script, s32 checkMain)
{
    if (((script->editorMask & 0x40000000) == 0 || (script->battleMask & 0x04000000) == 0) &&
        (script->battleMask & 4) == 0 && (script->encounter.flagsE4 & 0x10) == 0 &&
        (script->battleMask & 0x200) == 0 &&
        (checkMain == 0 || g_btlMain == NULL || (g_btlMain->flags & 0x02000000) == 0)) {
        return true;
    }
    return false;
}
}
