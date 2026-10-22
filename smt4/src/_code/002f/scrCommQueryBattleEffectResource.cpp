#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
int scrSetResult(u32 value);
int textFormatBuffer(char *buffer, const char *format, ...);
s32 FUN_002c1d5c(void);
u32 FUN_002d848c(const char *path);

/* Script command: result is FUN_002d848c for the effect file EV_<n>.eft (n = first script argument), or 0 when FUN_002c1d5c is non-zero. */
u32 scrCommQueryBattleEffectResource(void)
{
    char path[68];
    u32 id = scrGetArg(0);
    u32 result = 0;

    if (FUN_002c1d5c() == 0) {
        textFormatBuffer(path, "battle/effect/EV_%03d.eft", id);
        result = FUN_002d848c(path);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
