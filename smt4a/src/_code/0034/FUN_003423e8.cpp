/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003423e8` (_code @ 0x3423e8, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00387240(int, int, int);

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Supplied declaration required: FUN_00387240. */


void FUN_003423e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int temp_v1;
  int unaff_r5;
  int unaff_r7;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  if (param_1 == 0 || param_1 == 2) {
    unaff_r7 = 0;
    unaff_r5 = unaff_r7;
  }
  else {
    unaff_r4 = 0;
  }
  *(char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5e4) = (char)param_1;
  if (param_1 == 0 || param_1 == 2) {
    do {
      temp_v1 = temp_v0 + unaff_r5 * 0x8c;
      *(unsigned short *)(temp_v1 + 0x3b6) = 2;
      FUN_00387240(temp_v1 + 0x37c,10,0);
      *(unsigned char *)(temp_v1 + 0x3b8) = 1;
      *(int *)(temp_v1 + 0x388) = unaff_r7;
      unaff_r5 = unaff_r5 + 1;
      *(int *)(temp_v1 + 0x38c) = unaff_r7;
      *(int *)(temp_v1 + 0x390) = unaff_r7;
    } while (unaff_r5 < 4);
    return;
  }
  do {
    *(unsigned char *)(temp_v0 + unaff_r4 * 0x8c + 0x3b8) = 0;
    unaff_r4 = unaff_r4 + 1;
  } while (unaff_r4 < 4);
  return;
}

} /* extern "C" */
