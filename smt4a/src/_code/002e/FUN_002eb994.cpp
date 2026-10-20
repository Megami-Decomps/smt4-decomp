/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb994` (_code @ 0x2eb994, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055afe0; /* 0x55afe0 */

extern int FUN_002eac34(unsigned int);


unsigned int * FUN_002eb994(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055afe0;
  *(char *)(param_1 + 1) = (char)param_2;
  temp_v0 = FUN_002eac34(param_2);
  *(unsigned int *)(temp_v0 + 4) = (unsigned int)*(unsigned char *)(param_1 + 1);
  return param_1;
}

} /* extern "C" */
