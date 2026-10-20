#include "common.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern u32 btlUnitGet(u32 unit);
extern void FUN_0026beb4(s32 a, u32 unit, s32 kind, s32 b, s32 c);

extern u32 g_btlScriptUnit;

/* Script command: picks a value from its first argument (1..4 and -1..-4 map to two runs of
 * consecutive codes) and applies it to the script's battle unit; always returns 1. */
s32 scrCommBtlUnitSetStateFromArg(void)
{
    s32 arg = scrGetArg(0);
    s32 kind = 0;

    switch (arg) {
    case -4:
        kind = 0x17;
        break;
    case -3:
        kind = 0x16;
        break;
    case -2:
        kind = 0x15;
        break;
    case -1:
        kind = 0x14;
        break;
    case 4:
        kind = 0x13;
        break;
    case 3:
        kind = 0x12;
        break;
    case 2:
        kind = 0x11;
        break;
    case 1:
        kind = 0x10;
        break;
    }
    FUN_0026beb4(0, btlUnitGet(g_btlScriptUnit), kind, 0, 1);
    return 1;
}

} /* extern "C" */
