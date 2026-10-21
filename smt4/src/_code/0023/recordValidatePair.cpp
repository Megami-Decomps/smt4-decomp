#include "shard/W5_W5Match2_ValidationPair.h"
extern "C" {
s32 FUN_002a1200(ValidationPair *pair);
s32 FUN_002a116c(ValidationPair *pair);
void FUN_00126fb8(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner,ValidationPair pair) { if (FUN_002a1200(&pair)!=0 || FUN_002a116c(&pair)!=0) FUN_00126fb8(owner); }
}
