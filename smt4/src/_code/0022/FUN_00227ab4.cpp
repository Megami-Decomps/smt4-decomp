/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227ab4` (_code @ 0x227ab4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, int);

/* Supplied declaration required: FUN_00282924. */


void FUN_00227ab4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = param_2 + temp_v2 * 10;
    *(unsigned short *)(temp_v0 + 0x9d4) = 0;
    temp_v1 = *param_1;
    FUN_00282924(temp_v1,temp_v2);
    if (temp_v1 != 0) {
      *(unsigned short *)(temp_v0 + 0x9d4) = *(unsigned short *)(temp_v1 + 0x1b4);
      *(unsigned short *)(temp_v0 + 0x9d6) = *(unsigned short *)(temp_v1 + 0x1b6);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  return;
}

} /* extern "C" */
