/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb244` (_code @ 0x3cb244, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0023ce90. */


unsigned int FUN_003cb244(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0023ce90(*param_1);
  *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1d;
  if (*(int *)(param_2 + 0x28) != 0) {
    *(unsigned short *)(*param_1 + 0x2f20) = *(unsigned short *)(param_2 + 0x2c);
    *(unsigned short *)(*param_1 + 0x2f22) = *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c);
    *(unsigned short *)(*param_1 + 0x2f24) = *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e);
    *(unsigned short *)(*param_1 + 0x2f26) = 0;
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x154) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x156) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x158) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x150);
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x15a) =
         *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x152);
    temp_v1 = *(int *)(param_2 + 0x28);
    temp_v0 = *(int *)(temp_v1 + 0x184);
    if (temp_v0 < 5) {
      *(unsigned short *)(temp_v1 + temp_v0 * 8 + 0x15c) = *(unsigned short *)(temp_v1 + 0x14c);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x15e) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x160) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x150);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + temp_v0 * 8 + 0x162) =
           *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x152);
    }
    temp_v0 = *(int *)(*(int *)(param_2 + 0x28) + 0x184) + 1;
    *(int *)(*(int *)(param_2 + 0x28) + 0x184) = temp_v0;
    if (temp_v0 >= 5) {
      *(unsigned int *)(*(int *)(param_2 + 0x28) + 0x184) = 0;
    }
  }
  else {
    *(unsigned short *)(*param_1 + 0x2f20) = 0;
    *(unsigned short *)(*param_1 + 0x2f22) = 0;
    *(unsigned short *)(*param_1 + 0x2f24) = 0;
    *(unsigned short *)(*param_1 + 0x2f26) = 0;
  }
  return 1;
}
