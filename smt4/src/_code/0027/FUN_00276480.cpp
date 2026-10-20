/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276480` (_code @ 0x276480, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039c57c(int);

extern int g_naviMain; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039c57c. */


void FUN_00276480(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = g_naviMain;
  puVar2 = (unsigned int *)(g_naviMain + 0xc);
  *(unsigned int *)(g_naviMain + 0x14) = param_3;
  *puVar2 = param_1;
  *(unsigned int *)(temp_v0 + 0x10) = param_2;
  FUN_0039c57c(temp_v0 + 0x40);
  return;
}

} /* extern "C" */
