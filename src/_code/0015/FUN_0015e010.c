/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e010` (_code @ 0x15e010, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern int FUN_0015e808(unsigned char *);


void FUN_0015e010(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0015e808(&DAT_004e6f64);
  if (-1 < temp_v0) {
    *(int *)(param_1 + 0x30) = temp_v0 + *(int *)(param_1 + 0x30);
  }
  return;
}
