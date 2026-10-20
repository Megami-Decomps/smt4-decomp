/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00383674` (_code @ 0x383674, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b63c0(void);

/* Supplied declaration required: FUN_002b63c0. */


unsigned short FUN_00383674(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)(*(unsigned int *)(param_1 + 0xd0c) & 0xffff);
  FUN_002b63c0();
  return *puVar1;
}

} /* extern "C" */
