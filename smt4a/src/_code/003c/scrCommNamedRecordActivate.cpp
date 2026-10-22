#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern s32 scrGetArg(void);
extern u32 scrGetArgString(s32 index);
extern void namedRecordActivate(AocMainAObjC *obj, s32 id, u32 string);

/* Script command: passes the first argument and the second argument string to namedRecordActivate. */
s32 scrCommNamedRecordActivate(void)
{
    s16 id = scrGetArg();
    u32 string = scrGetArgString(1);

    namedRecordActivate(&g_aocMain->objC, id, string);
    return 1;
}

} /* extern "C" */
