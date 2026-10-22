#include "event/2dEvent/2dEventTex.h"

extern "C" {
u32 scrGetArg(u32);
f32 scriptReadStackValueAsFloat(u32);
s32 eventTexHasMissingValue();
u32 FUN_003affe8(u32, f32, f32);
void eventTexSetJobParam(u32);
void eventTexStoreHandle(u32);
void scrSetResult(u32);

// Start and register the texture job with its fixed fifteen-unit second parameter.
u32 scrCommStartTableBattleTextureJob()
{
    u32 texture = scrGetArg(0);
    f32 parameter = scriptReadStackValueAsFloat(1);
    if (eventTexHasMissingValue() != 0) {
        u32 job = FUN_003affe8(texture, parameter, 15.0f);
        eventTexSetJobParam(job);
        eventTexStoreHandle(job);
        scrSetResult(job);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
