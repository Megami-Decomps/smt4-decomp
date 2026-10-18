/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376988` (_code @ 0x376988, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_0014be8c. */
/* Supplied declaration required: FUN_002bf59c. */


unsigned int FUN_00376988(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = (unsigned int)*(unsigned char *)(param_2 + 0x98) + *(int *)(param_2 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v2,7);
  UnsignedDoesSaturate(temp_v2,7);
  if (param_1[9] != 0) {
    while( 1 ) {
      if (*param_1 < param_1[9]) {
        FUN_002bf59c(param_1,param_1 + 1,param_2 + 0xdc);
        FUN_0014be8c(param_1,param_2);
        *(int **)(param_2 + 0x10) = param_1;
        return 1;
      }
      temp_v2 = param_1[4];
      if ((int *)(temp_v2 - 0xe4) == (int *)0x0) break;
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 - 0x4c) + *(int *)(temp_v2 - 0x94);
      temp_v1 = UnsignedSaturate(temp_v3,7);
      UnsignedDoesSaturate(temp_v3,7);
      if (temp_v0 < temp_v1) {
        return 0;
      }
      (**(romwright_code **)(*(int *)(temp_v2 - 0xe4) + 0x10))();
    }
  }
  return 0;
}
