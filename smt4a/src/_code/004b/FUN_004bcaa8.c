/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bcaa8` (_code @ 0x4bcaa8, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */


int FUN_004bcaa8(int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  
  if (param_5 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 0;
    FUN_00184310();
    temp_v4 = 0;
    do {
      temp_v2 = param_1 + temp_v4 * 4;
      temp_v0 = *(short *)(temp_v2 + 0x52);
      if (temp_v0 != 0) {
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x50);
      }
      if (temp_v0 != 0 && param_2 < temp_v2) {
        temp_v3 = 0;
        do {
          psVar6 = (short *)(param_3 + temp_v3 * 2);
          if (*psVar6 == temp_v0) break;
          if (psVar6[1] == temp_v0) {
            temp_v3 = temp_v3 + 1;
            break;
          }
          temp_v3 = temp_v3 + 2;
        } while (temp_v3 < 8);
        if (temp_v3 >= 8) {
          temp_v3 = temp_v1 * 2;
          temp_v1 = temp_v1 + 1;
          *(short *)(param_4 + temp_v3) = temp_v0;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
  }
  return temp_v1;
}
