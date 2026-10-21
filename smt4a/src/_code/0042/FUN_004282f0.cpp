/* NON_MATCHING: compiler uses cmp/movge instead of retail sign-bit shift. */
#include "common.h"
struct ResultOwner { u8 unk00[20]; u8 operation; };
extern "C" {
s32 FUN_00439c50(void *operation);
/* Returns only the operation's negative failure result. */
s32 FUN_004282f0(ResultOwner *owner) { s32 result=FUN_00439c50(&owner->operation); return (u32)result >> 31 ? result : 0; }
}
