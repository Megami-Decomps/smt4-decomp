/* NON_MATCHING: IDENTICAL when compiled with --cpu=MPCore --fpu=softvfp (no VFP: retail copies the forwarded stack words with core registers); the default build uses VFP. Needs that unit cflags. */
#include "common.h"
extern "C" {
u32 FUN_00426a1c(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags);
/* Forwards the complete service request. */
u32 FUN_00426800(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags) { return FUN_00426a1c(reply, descriptorAddress, count, id, flags); }
}
