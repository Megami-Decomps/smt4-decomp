/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038110c` (_code @ 0x38110c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f2498(unsigned int, int);

extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f2498. */


unsigned int FUN_0038110c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  FUN_003f2498(temp_v0,0x100002b);
  return 1;
}

} /* extern "C" */
