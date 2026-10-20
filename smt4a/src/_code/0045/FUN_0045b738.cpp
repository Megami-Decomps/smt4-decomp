/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b738` (_code @ 0x45b738, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5700(...);
int FUN_0046135c(...);

extern int FUN_004613d4(...); /* 0x4613d4 */
extern unsigned char DAT_0055bd14; /* 0x55bd14 */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_0046135c. */


unsigned int * FUN_0045b738(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055bd14;
  if (*(char *)((int)param_1 + 0x59) == '\0') {
    temp_v0 = 0;
    do {
      FUN_0046135c(param_1 + temp_v0 * 4 + 2,param_1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)((int)param_1 + 0x59) = 1;
    *(unsigned char *)(param_1 + 0x16) = 0;
    param_1[1] = 0;
    param_1[0x13] = 0x3f800000;
    param_1[0x12] = 0x3f800000;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  FUN_002e5700(param_1 + 2,FUN_004613d4,0x10,4);
  return param_1;
}

} /* extern "C" */
