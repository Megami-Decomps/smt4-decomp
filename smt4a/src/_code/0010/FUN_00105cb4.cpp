/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105cb4` (_code @ 0x105cb4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);

extern unsigned char DAT_005587fc; /* 0x5587fc */

extern int FUN_002ea00c(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */


void FUN_00105cb4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005587fc;
  temp_v0 = FUN_002ea00c(param_1 + 0x1c);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}

} /* extern "C" */
