/* NON_MATCHING: compiler emits paired LDRD/STRD for the nine-byte copy instead of separate word accesses. */
#include "common.h"
extern "C" {
struct NineBytes { u32 first,second; u8 last; };
/* Copy the two words and trailing byte of the record. */
void ARM_common_memcpy4_9(NineBytes *__restrict destination,const NineBytes *__restrict source) { destination->first=source->first; destination->second=source->second; destination->last=source->last; }
}
