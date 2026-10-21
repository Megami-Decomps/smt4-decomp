/* NON_MATCHING: retail array destruction or constructor lifetime code generation differs. */
#include "common.h"

struct SoundHandle { u32 value; };
struct SoundOwner {
    /* 0x00 */ u8 unk00[32];
    /* 0x20 */ SoundHandle handles[4];
};
extern "C" {
void soundHandleDetachReturn(SoundHandle *handle);
void FUN_004670a4(SoundOwner *owner);
/* Destroys the owner's handles before releasing the base resources. */
void FUN_00413094(SoundOwner *owner)
{
    for (u32 index = 4; index != 0; --index)
        soundHandleDetachReturn(&owner->handles[index - 1]);
    FUN_004670a4(owner);
}
}
