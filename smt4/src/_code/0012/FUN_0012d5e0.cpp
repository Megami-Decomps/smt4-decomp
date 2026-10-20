/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d5e0` (_code @ 0x12d5e0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00421644; /* 0x421644 */


void FUN_0012d5e0(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)&DAT_00421644;
    puVar1[1] = (unsigned int)param_1;
  }
  return;
}

} /* extern "C" */
