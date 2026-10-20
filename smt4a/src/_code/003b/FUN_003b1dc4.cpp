/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1dc4` (_code @ 0x3b1dc4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_003b1dc4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  *(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x2344) = temp_v0;
  return 1;
}

} /* extern "C" */
