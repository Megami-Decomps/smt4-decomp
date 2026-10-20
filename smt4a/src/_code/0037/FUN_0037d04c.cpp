#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
int scrSetResult(u32 value);
int FUN_00100388(char *buffer, const char *format, ...);
s32 FUN_00162ea4(void);
u32 FUN_0034813c(const char *path);

/* Script command: result is FUN_0034813c for the effect file EV_<n>.eft (n = first script argument), or 0 when FUN_00162ea4 is non-zero. */
u32 FUN_0037d04c(void)
{
    char path[68];
    u32 id = scrGetArg(0);
    u32 result = 0;

    if (FUN_00162ea4() == 0) {
        FUN_00100388(path, "battle/effect/EV_%03d.eft", id);
        result = FUN_0034813c(path);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
