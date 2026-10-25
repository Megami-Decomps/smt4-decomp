#include "common.h"
#include "script/ScriptArgs.h"
#include "shard/scrGetArg.h"
extern "C" {
const char *scrGetArgString(u32);
s32 FUN_002a1738(u32,const char *);
s32 FUN_002a3f0c() {
    s32 result = 0;
    u32 value = scrGetArg(0);
    if (FUN_002a1738(value, scrGetArgString(1)) != 0) {
        result = 1;
    }
    return result;
}
}
