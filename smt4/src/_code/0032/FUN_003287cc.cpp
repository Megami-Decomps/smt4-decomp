#include "camp/Unite/UniteGlobals.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: returns the unite work's word at 0x6C78. */
u32 FUN_003287cc(void)
{
    scrSetResult(g_unite->firstListIV.unk6C78);
    return 1;
}

} /* extern "C" */
