#include "common.h"

extern "C" u32 scrGetArg(s32 index);
extern "C" f32 FUN_00275b10(s32 index);
extern "C" s32 eventTexHasMissingValue(void);
extern "C" u32 FUN_003affe8(u32 id, f32 parameter, f32 offset);
extern "C" void eventTexSetJobParam(u32 job);
extern "C" void eventTexStoreHandle(u32 job);
extern "C" void scrSetResult(u32 value);

extern "C" u32 scrCommCreateBattleTextureJob(void)
{
    u32 id = scrGetArg(0);
    f32 parameter = FUN_00275b10(1);
    if (eventTexHasMissingValue()) {
        id = FUN_003affe8(id, parameter, 0.0f);
        eventTexSetJobParam(id);
        eventTexStoreHandle(id);
        scrSetResult(id);
    } else {
        scrSetResult(0);
    }
    return 1;
}
