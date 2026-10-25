#include "classes/WindowStatus.h"
extern "C" {
u32 FUN_002a1200(const u32 *result);
u32 FUN_002a116c(const u32 *result);
void FUN_00126fb8(void *owner);
/* Notify the owner if either validation of the supplied pair fails. */
void recordValidatePair(void *owner, WindowStatusResult pair) { if (FUN_002a1200(&pair.code)!=0 || FUN_002a116c(&pair.code)!=0) FUN_00126fb8(owner); }
}
