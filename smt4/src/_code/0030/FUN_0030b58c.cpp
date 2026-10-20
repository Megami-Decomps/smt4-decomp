/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b58c` (_code @ 0x30b58c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_0027d98c(void);
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_0030b58c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027d98c();
  FUN_0028dcb0(temp_v0 == 4);
  return 1;
}

} /* extern "C" */
