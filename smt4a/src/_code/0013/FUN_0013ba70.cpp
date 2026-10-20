/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ba70` (_code @ 0x13ba70, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001482c0(void);
int FUN_0016007c(void);

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_001482c0. */
/* Supplied declaration required: FUN_0016007c. */


void FUN_0013ba70(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0xd68;
  FUN_0016007c();
  if (temp_v0 != 0) {
    FUN_001482c0();
  }
  DAT_00570260 = temp_v0;
  return;
}

} /* extern "C" */
