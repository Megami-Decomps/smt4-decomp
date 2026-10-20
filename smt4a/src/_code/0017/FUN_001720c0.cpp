/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001720c0` (_code @ 0x1720c0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b7e8; /* 0x55b7e8 */


void FUN_001720c0(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)&DAT_0055b7e8;
    puVar1[1] = (unsigned int)param_1;
  }
  return;
}

} /* extern "C" */
