/* NON_MATCHING: retail array destruction or constructor lifetime code generation differs. */
#include "common.h"

struct SoundHandle { u32 value; };
struct SoundOwner {
    /* 0x00 */ u8 unk00[32];
    /* 0x20 */ SoundHandle handles[8];
};
extern "C" {
void FUN_00376974(SoundHandle *handle);
void FUN_003809a0(SoundOwner *owner);
/* Destroys the owner's handles before releasing the base resources. */
void FUN_003406b4(SoundOwner *owner)
{
    for (u32 index = 8; index != 0; --index)
        FUN_00376974(&owner->handles[index - 1]);
    FUN_003809a0(owner);
}
}
