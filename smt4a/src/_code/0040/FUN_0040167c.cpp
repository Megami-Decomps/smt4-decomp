/* NON_MATCHING: compiler emits an explicit reverse loop rather than rt_vec_dtor. */
#include "common.h"
struct SoundHandle { u32 handle; };
struct SoundOwner { u8 unk00[32]; SoundHandle handles[16]; };
extern "C" {
void soundHandleDetachReturn(SoundHandle *handle);
SoundOwner *FUN_004670a4(SoundOwner *owner);
/* Detaches the sixteen handles before releasing the base sound object. */
SoundOwner *FUN_0040167c(SoundOwner *owner) { for (int i=15;i>=0;--i) soundHandleDetachReturn(&owner->handles[i]); return FUN_004670a4(owner); }
}
