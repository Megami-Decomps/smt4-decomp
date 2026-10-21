#include "shard/W5_W5Match2_ValidationPair.h"
extern "C" {
s32 FUN_001d10c0(ValidationPair *pair);
s32 FUN_001d1108(ValidationPair *pair);
void FUN_0016ccb4(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner,ValidationPair pair) { if (FUN_001d10c0(&pair)!=0 || FUN_001d1108(&pair)!=0) FUN_0016ccb4(owner); }
}
