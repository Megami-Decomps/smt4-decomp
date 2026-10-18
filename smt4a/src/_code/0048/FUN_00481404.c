/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481404` (_code @ 0x481404, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
extern int FUN_0019c06c(void);


void FUN_00481404(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019c06c();
  if ((temp_v0 != 0) && (*(char *)(temp_v0 + 8) == '\x01' || *(char *)(temp_v0 + 8) == '\f')) {
    FUN_00192550();
  }
  return;
}
