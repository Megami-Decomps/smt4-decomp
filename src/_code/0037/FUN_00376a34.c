/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376a34` (_code @ 0x376a34, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0037bbb8; /* 0x37bbb8 */
extern unsigned char DAT_00421540; /* 0x421540 */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_00376a34(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421540;
  param_1[1] = 0;
  param_1 = param_1 + 2;
  FUN_002c5f58(param_1,&LAB_0037bbb8,0x10,4);
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  *(unsigned char *)(param_1 + 0x13) = 0;
  *(unsigned char *)((int)param_1 + 0x4d) = 1;
  return;
}
