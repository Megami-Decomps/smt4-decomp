#include "classes/WindowStatus.h"
extern "C" {
u32 resourceResultMatchesKnownRanges(const u32 *result);
u32 resourceResultMatchesRemappedCodes(const u32 *result);
void FUN_00126fb8(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner, WindowStatusResult pair) { if (resourceResultMatchesKnownRanges(&pair.code)!=0 || resourceResultMatchesRemappedCodes(&pair.code)!=0) FUN_00126fb8(owner); }
}
