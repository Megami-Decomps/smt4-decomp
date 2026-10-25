#include "common.h"
#include "shard/randomGetLowerTenBits.h"
extern "C" {
void affinityResolveUnitSlot(u16 *output,u32 first,u32 second);
/* Extract the low ten-bit identifier from the generated value. */
u32 randomGetLowerTenBits(u32 first,u32 second) { u16 value; affinityResolveUnitSlot(&value,first,second); return value & 0x3FF; }
}
