#include "classes/WindowStatus.h"
extern "C" {
s32 FUN_001d10c0(WindowStatusResult *pair);
s32 FUN_001d1108(WindowStatusResult *pair);
void FUN_0016ccb4(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner, WindowStatusResult pair) { if (FUN_001d10c0(&pair)!=0 || FUN_001d1108(&pair)!=0) FUN_0016ccb4(owner); }
}
