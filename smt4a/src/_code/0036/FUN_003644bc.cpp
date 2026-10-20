/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003644bc` (_code @ 0x3644bc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern signed char DAT_005f1633; /* 0x5f1633 */


unsigned char FUN_003644bc(void)

{
  unsigned int *puVar1;
  
  puVar1 = &DAT_005f15fc;
  if (DAT_005f1633 == -1) {
    puVar1 = (unsigned int *)(unsigned int)DAT_005f162e;
  }
  return DAT_005f1633 == -1 && puVar1 == (unsigned int *)0x4;
}

} /* extern "C" */
