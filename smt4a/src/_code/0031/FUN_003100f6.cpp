/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003100f6` (_code @ 0x3100f6, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00114a88(void);
int rt_malloc(unsigned int);

extern unsigned long long FUN_0011499c(void);
/* Supplied declaration required: FUN_00114a88. */
/* Supplied declaration required: rt_malloc. */


void FUN_003100f6(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v1 = FUN_0011499c();
  temp_v0 = (unsigned int)((unsigned long long)temp_v1 >> 0x20);
  if ((unsigned int)temp_v1 < temp_v0) {
    *(unsigned char *)(param_1 + 0x1c) = *(unsigned char *)(param_1 + 0x1c) & 0xfb;
  }
  if ((int)((unsigned int)*(unsigned char *)(param_1 + 0x1c) << 0x1d) < 0) {
    FUN_00114a88();
    return;
  }
  rt_malloc(temp_v0);
  return;
}

} /* extern "C" */
