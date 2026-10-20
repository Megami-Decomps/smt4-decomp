#include "addon/aocMain.h"

extern "C" {

extern s32 scrGetArg(void);
extern u32 scrGetArgString(s32 index);
extern void FUN_00394490(AocObjC *obj, s32 id, u32 string);

extern AocMain *g_aocMain;

/* Script command: passes the first argument and the second argument string to FUN_00394490. */
s32 FUN_003235d4(void)
{
    s16 id = scrGetArg();
    u32 string = scrGetArgString(1);

    FUN_00394490(&g_aocMain->objC, id, string);
    return 1;
}

} /* extern "C" */
