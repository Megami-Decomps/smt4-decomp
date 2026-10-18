/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dc44` (_code @ 0x19dc44, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3bc0; /* 0x5b3bc0 */
extern unsigned int *DAT_005b3bc4; /* 0x5b3bc4 */


int FUN_0019dc44(unsigned int *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&DAT_005b3bc0;
  if (DAT_005b3bc0 != 0) {
    puVar1 = DAT_005b3bc4;
  }
  if (!(DAT_005b3bc0 != 0 && param_1 < puVar1)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = DAT_005b3bc0 + (int)param_1 * 0x2c;
  }
  return temp_v0;
}
