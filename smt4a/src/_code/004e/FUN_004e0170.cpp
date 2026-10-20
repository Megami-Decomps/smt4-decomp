/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e0170` (_code @ 0x4e0170, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e7ef0(int);

extern unsigned char DAT_00571138; /* 0x571138 */

/* Supplied declaration required: FUN_003e7ef0. */


unsigned int FUN_004e0170(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_003e7ef0(*param_1);
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00571138 + 0x4)) + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1f;
  if (*(int *)(param_2 + 0x28) != 0) {
    *(unsigned short *)(*param_1 + 0x3020) = *(unsigned short *)(param_2 + 0x2c);
    *(unsigned short *)(*param_1 + 0x3022) = *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be);
    *(unsigned short *)(*param_1 + 0x3024) = *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0);
    *(unsigned short *)(*param_1 + 0x3026) = 0;
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c6) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c8) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1ca) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c2);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1cc) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c4);
    temp_v1 = *(int *)(param_2 + 0x28);
    temp_v0 = *(int *)(temp_v1 + 0x228);
    if (temp_v0 < 10) {
      *(unsigned short *)(temp_v1 + temp_v0 * 8 + 0x1d6) = *(unsigned short *)(temp_v1 + 0x1be);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x1d8) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x1da) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c2);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x1dc) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c4);
    }
    temp_v0 = *(int *)(*(int *)(param_2 + 0x28) + 0x228) + 1;
    *(int *)(*(int *)(param_2 + 0x28) + 0x228) = temp_v0;
    if (temp_v0 >= 10) {
      *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x228) = 0;
    }
  }
  else {
    *(unsigned short *)(*param_1 + 0x3020) = 0;
    *(unsigned short *)(*param_1 + 0x3022) = 0;
    *(unsigned short *)(*param_1 + 0x3024) = 0;
    *(unsigned short *)(*param_1 + 0x3026) = 0;
  }
  return 1;
}

} /* extern "C" */
