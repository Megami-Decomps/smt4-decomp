/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0c74` (_code @ 0x2c0c74, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int aeabi_uidivmod(int);


unsigned int FUN_002c0c74(int *param_1)

{
  unsigned int temp_v0;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0x314c4254)) && (param_1[2] != 0)) {
    temp_v0 = aeabi_uidivmod(param_1[1]);
    return temp_v0;
  }
  return 0;
}
