#include "common.h"
extern "C" {
const char *scrGetArgString(s32 index);
s32 scrGetArg(u32);
s32 FUN_002bf09c(const char *);
void FUN_0021c118(u32,u32);
s32 FUN_0031c40c() {
    s32 index=FUN_002bf09c(scrGetArgString(0));
    if (index < 0)
        return 1;
    s32 value=scrGetArg(1);
    if (value < 0)
        value = 0;
    FUN_0021c118(index,value);
    return 1;
}
}
