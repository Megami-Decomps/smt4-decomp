/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c0c0` (_code @ 0x33c0c0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);

/* Supplied declaration required: FUN_002b9024. */


unsigned short FUN_0033c0c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  FUN_002b9024();
  return *(unsigned short *)(temp_v0 + 0x2a);
}

} /* extern "C" */
