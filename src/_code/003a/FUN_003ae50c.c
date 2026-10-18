/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae50c` (_code @ 0x3ae50c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_00206184(int);


void FUN_003ae50c(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00439ca8;
  temp_v1 = FUN_00206184(DAT_00439ca8 + 0x2460);
  if (temp_v1 != 0) {
    *param_2 = *(unsigned short *)(temp_v0 + 0x7e4e);
    *param_3 = *(unsigned short *)(temp_v0 + 0x7e50);
  }
  return;
}
