/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259784` (_code @ 0x259784, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003bbb98(unsigned int, int);

extern int g_cecProcess; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbb98. */


unsigned int FUN_00259784(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (g_cecProcess != 0 && param_1 != 0) {
    temp_v0 = *(unsigned int *)(g_cecProcess + 4);
    FUN_003bbb98(temp_v0,param_1);
  }
  return temp_v0;
}

} /* extern "C" */
