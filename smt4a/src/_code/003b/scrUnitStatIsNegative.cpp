#include "common.h"

extern "C" {

/* Index of the first of the four ratings the script command tests in the unit's parameter words. */
#define PARAM_FIRST 29

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 *params;
} Unit;

extern u32 g_btlScriptUnit;

extern s32 scrGetArg(void);
extern void scrSetResult(s32 value);
extern Unit *btlUnitGet(u32 unit);

/* Script command: result is 1 when the script unit's stat selected by the argument (0-3) is negative. */
s32 scrUnitStatIsNegative(void)
{
    s32 kind = scrGetArg();
    s32 index = 0;

    if (kind == 0) {
        index = 7;
    } else if (kind == 1) {
        index = 8;
    } else if (kind == 2) {
        index = 10;
    } else if (kind == 3) {
        index = 11;
    }
    s32 *params = btlUnitGet(g_btlScriptUnit)->params;

    scrSetResult(params[PARAM_FIRST + index] <= -1);
    return 1;
}

} /* extern "C" */
