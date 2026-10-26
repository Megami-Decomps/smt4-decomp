/* NON_MATCHING: retail copies the three forwarded stack words (id, flags) with core ldm/stm; armcc -Otime uses vldm/vstm here. */
#include "common.h"
extern "C" {
u32 FUN_00426a1c(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags);
/* Forwards the complete service request. */
u32 FUN_00426800(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags) { return FUN_00426a1c(reply, descriptorAddress, count, id, flags); }
}
