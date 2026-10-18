/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f73c` (_code @ 0x10f73c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471b54; /* 0x471b54 */
extern unsigned char DAT_004e6ef0; /* 0x4e6ef0 */

extern int FUN_002bbb2c(unsigned char *, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5468. */


void FUN_0010f73c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_00471b54 != '\0') && (*(int *)(param_1 + 8) == 0)) {
    temp_v0 = FUN_002bbb2c(&DAT_004e6ef0,param_1,(param_2 + 0xfffU) & 0xfffff000,0);
    if (temp_v0 == 0) {
      FUN_002c5468(0xd8601837);
    }
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  return;
}
