#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern s32 scrGetArg(void);
extern u32 scrGetArgString(s32 index);
extern void FUN_0047dcd4(AocMainAObjC *obj, s32 id, u32 string);

/* Script command: passes the first argument and the second argument string to FUN_0047dcd4. */
s32 FUN_003c33b0(void)
{
    s16 id = scrGetArg();
    u32 string = scrGetArgString(1);

    FUN_0047dcd4(&g_aocMain->objC, id, string);
    return 1;
}

} /* extern "C" */
