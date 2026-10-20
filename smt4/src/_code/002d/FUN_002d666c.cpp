/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d666c` (_code @ 0x2d666c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295eb0(int, int, int);

extern unsigned char DAT_0043da28; /* 0x43da28 */

/* Supplied declaration required: FUN_00295eb0. */


void FUN_002d666c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int temp_v1;
  int unaff_r5;
  int unaff_r7;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  if (param_1 == 0) {
    unaff_r7 = 0;
    unaff_r5 = unaff_r7;
  }
  else {
    unaff_r4 = 0;
  }
  *(char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c8) = (char)param_1;
  if (param_1 != 0) {
    do {
      *(unsigned char *)(temp_v0 + unaff_r4 * 0x8c + 0x3b8) = 0;
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < 2);
    return;
  }
  do {
    temp_v1 = temp_v0 + unaff_r5 * 0x8c;
    *(unsigned short *)(temp_v1 + 0x3b6) = 2;
    FUN_00295eb0(temp_v1 + 0x37c,0x12,0);
    *(unsigned char *)(temp_v1 + 0x3b8) = 1;
    *(int *)(temp_v1 + 0x388) = unaff_r7;
    unaff_r5 = unaff_r5 + 1;
    *(int *)(temp_v1 + 0x38c) = unaff_r7;
    *(int *)(temp_v1 + 0x390) = unaff_r7;
  } while (unaff_r5 < 2);
  return;
}

} /* extern "C" */
