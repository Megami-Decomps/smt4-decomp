/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a0e8` (_code @ 0x29a0e8, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024d94c(int, unsigned int);

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0024d94c. */


void FUN_0029a0e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e144;
  FUN_0024d94c(DAT_0044e144 + 0x1300,param_1);
  *(unsigned char *)(temp_v0 + 0x1e66) = 0;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}

} /* extern "C" */
