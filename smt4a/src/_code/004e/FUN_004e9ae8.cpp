/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e9ae8` (_code @ 0x4e9ae8, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c5f90(void);

extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_004c5f90. */


void FUN_004e9ae8(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (param_3 >= 2) {
    temp_v0 = 0;
    temp_v3 = 0;
    do {
      temp_v1 = (int)*(short *)(*(int *)(*param_1 + 0x1ffc) + *(int *)(param_2 + temp_v3 * 4) * 0x408 +
                             8);
      FUN_004c5f90();
      if ((temp_v1 != 0) && ((param_4 != 0 || (temp_v2 = lcgRandomRange(99), temp_v2 <= temp_v1)))) {
        temp_v0 = 1;
        *(unsigned int *)(param_2 + temp_v3 * 4) = 0xffffffff;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_3);
    if (temp_v0) {
      temp_v3 = param_3;
      if (0 < param_3) {
        do {
          temp_v3 = temp_v3 - 1;
        } while (temp_v3 != 0);
      }
      if (0 < param_3) {
        do {
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
