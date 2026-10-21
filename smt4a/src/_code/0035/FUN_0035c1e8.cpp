#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
f32 FUN_00275b10(u32 index);
s32 eventTexHasMissingValue(void);
u32 FUN_0039b0f8(u32 id, f32 value, f32 duration);
void eventTexSetJobParam(u32 job);
void eventTexStoreHandle(u32 job);
void scrSetResult(u32 value);

// Start the texture effect when a handle slot is free and expose its job to the script.
u32 FUN_0035c1e8(void)
{
    u32 id = scrGetArg(0);
    f32 value = FUN_00275b10(1);
    if (eventTexHasMissingValue()) {
        u32 job = FUN_0039b0f8(id, value, 15.0f);
        eventTexSetJobParam(job);
        eventTexStoreHandle(job);
        scrSetResult(job);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
