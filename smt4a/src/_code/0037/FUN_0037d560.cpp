#include "shard/Shard0037.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);
extern s32 FUN_003857c8(s32 value);
extern void scrSetResult(s32 value);

/* Script command: result is FUN_003857c8 of the game block's float at +0x15C4. */
u32 FUN_0037d560(void)
{
    Flags0C0C *obj = FUN_00162e8c();

    scrSetResult(FUN_003857c8((s32)obj->unk15C4));
    return 1;
}

} /* extern "C" */
