/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239108` (_code @ 0x239108, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(void);

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_00239108(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00236038();
  temp_v0 = FUN_00164a9c();
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
  }
  return 1;
}

} /* extern "C" */
