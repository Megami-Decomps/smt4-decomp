/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5c70` (_code @ 0x3f5c70, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e930; /* 0x44e930 */
extern romwright_code *DAT_0044e934; /* 0x44e934 */

/* Supplied declaration required: FUN_0016b118. */


unsigned int FUN_003f5c70(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = (param_3 / 0x28) * 0x200;
  param_1[3] = temp_v0;
  if (temp_v0 - param_1[2] != 0 && param_1[2] <= temp_v0) {
    param_1[2] = temp_v0;
    if (param_1[1] != 0) {
      (*DAT_0044e934)();
    }
    temp_v0 = (*DAT_0044e930)(param_1[2]);
    param_1[1] = temp_v0;
    if (temp_v0 == 0) {
      return 0;
    }
  }
  temp_v3 = param_1[1];
  temp_v4 = 0;
  temp_v0 = param_1[3] >> (param_1[5] & 0xffU);
  temp_v0 = (int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x18)) >> 8;
  if (0 < temp_v0) {
    do {
      temp_v1 = param_1[5];
      temp_v2 = 0;
      if (temp_v2 < temp_v1) {
        do {
          *(int *)(*param_1 + temp_v2 * 0x1d0) = param_2;
          *(int *)(*param_1 + temp_v2 * 0x1d0 + 4) = temp_v3 + temp_v2 * 2;
          FUN_0016b118(*param_1 + temp_v2 * 0x1d0);
          temp_v1 = param_1[5];
          temp_v2 = temp_v2 + 1;
          param_2 = param_2 + 0x28;
        } while (temp_v2 < temp_v1);
      }
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v3 + temp_v1 * 0x200;
    } while (temp_v4 < temp_v0);
  }
  return 1;
}
