/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314bf8` (_code @ 0x314bf8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048821c(int, unsigned int);

extern int g_naviMain; /* 0x587f28 */

/* Supplied declaration required: FUN_0048821c. */


void FUN_00314bf8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_naviMain;
  *(unsigned int *)(g_naviMain + 0x28) = param_1;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  FUN_0048821c(temp_v0 + 0x68,param_1);
  return;
}

} /* extern "C" */
