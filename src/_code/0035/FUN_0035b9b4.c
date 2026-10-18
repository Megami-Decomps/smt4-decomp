/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b9b4` (_code @ 0x35b9b4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0035b9b4(int param_1,int *param_2)

{
  *(unsigned char *)(*param_2 + 8) = 0;
  *(unsigned short *)(*param_2 + 10) =
       *(unsigned short *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 0;
}
