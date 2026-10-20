/* Releases the object's pending handle (if any) and passes the result (1 when there was none) to scrSetResult. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0000[0x15cc]; /* 0x0000 */
    s32 handle;         /* 0x15cc */
} HandleOwner;

HandleOwner *gameFlagsGetBlock(void);
void scrSetResult(s32 result);
s32 FUN_003857c8(s32 handle);

u32 FUN_003bb26c(void)
{
    HandleOwner *owner = gameFlagsGetBlock();
    scrSetResult(owner->handle != 0 ? FUN_003857c8(owner->handle) : 1);
    return 1;
}

} /* extern "C" */
