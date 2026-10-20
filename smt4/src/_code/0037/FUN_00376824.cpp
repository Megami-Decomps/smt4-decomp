/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376824` (_code @ 0x376824, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_0037b9a8; /* 0x37b9a8 */
extern unsigned char DAT_004218f8; /* 0x4218f8 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_00376824(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_004218f8;
  param_1[1] = 0;
  param_1 = param_1 + 2;
  FUN_002c5d5c(param_1,&LAB_0037b9a8,0x10,4);
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  *(unsigned char *)(param_1 + 0x13) = 0;
  *(unsigned char *)((int)param_1 + 0x4d) = 1;
  return;
}

} /* extern "C" */
