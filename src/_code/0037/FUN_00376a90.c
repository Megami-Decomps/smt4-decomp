/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376a90` (_code @ 0x376a90, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0037bbd8(); /* 0x37bbd8 */
extern unsigned char DAT_00421540; /* 0x421540 */

/* Supplied declaration required: FUN_002c68bc. */
/* Supplied declaration required: FUN_0037bb60. */


unsigned int * FUN_00376a90(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421540;
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    temp_v0 = 0;
    do {
      FUN_0037bb60(param_1 + temp_v0 * 4 + 2,param_1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)((int)param_1 + 0x55) = 1;
    *(unsigned char *)(param_1 + 0x15) = 0;
    param_1[1] = 0;
    param_1[0x13] = 0x3f800000;
    param_1[0x14] = 0;
    param_1[0x12] = 0x3f800000;
  }
  FUN_002c68bc(param_1 + 2,FUN_0037bbd8,0x10,4);
  return param_1;
}
