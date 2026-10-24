#include "shard/Shard0031.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);
extern u32 event3dEventEffectCreate(u32 a, u32 b, u32 c, u32 d);
extern u32 DAT_0057f4ac[];

/* Script command: calls event3dEventEffectCreate on table entry (argument 0) with argument 1 and returns its result. */
u32 scrCommCallTableEntry(void)
{
    s32 index = scrGetArg(0);
    u32 value = scrGetArg(1);

    scrSetResult(event3dEventEffectCreate(DAT_0057f4ac[index], 0, 0, value));
    return 1;
}

} /* extern "C" */
