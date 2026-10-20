/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c22d8` (_code @ 0x3c22d8, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_003f0e20(int, unsigned int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003c22d8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_003f0e20(temp_v2,temp_v0);
  if (temp_v2 != 0) {
    *(int *)(temp_v2 + 0x3b0) = *(int *)(temp_v2 + 0x3b0) + temp_v1;
  }
  return 1;
}

} /* extern "C" */
