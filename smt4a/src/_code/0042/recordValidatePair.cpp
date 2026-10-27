#include "classes/WindowStatus.h"
extern "C" {
s32 resourceResultMatchesKnownRanges(WindowStatusResult *pair);
s32 resourceResultMatchesRemappedCodes(WindowStatusResult *pair);
void FUN_0016ccb4(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner, WindowStatusResult pair) { if (resourceResultMatchesKnownRanges(&pair)!=0 || resourceResultMatchesRemappedCodes(&pair)!=0) FUN_0016ccb4(owner); }
}
