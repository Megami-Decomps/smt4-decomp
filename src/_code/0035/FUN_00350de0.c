/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350de0` (_code @ 0x350de0, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


unsigned int FUN_00350de0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v4 = SCARRY4(param_3,1);
  temp_v2 = param_3 + 1;
  temp_v3 = param_3 == -1;
  if (-2 < param_3) {
    temp_v0 = *(int *)(param_1 + 0x2e8);
    temp_v4 = SBORROW4(temp_v0,param_3);
    temp_v2 = temp_v0 - param_3;
    temp_v3 = temp_v0 == param_3;
  }
  if (temp_v3 || temp_v2 < 0 != temp_v4) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = param_1 + param_2 * 4;
    piVar4 = (int *)(temp_v0 + 0x46c);
    temp_v2 = *piVar4;
    if ((temp_v2 != param_3) && (-1 < temp_v2)) {
      (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 4))
                (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                 *(unsigned int *)(param_1 + temp_v2 * 4 + 0x2ec));
      *(unsigned int *)(param_1 + *piVar4 * 4 + 0x2ec) = 0;
      *piVar4 = -1;
    }
    if (-1 < param_3) {
      temp_v2 = (**(romwright_code **)**(unsigned int **)(param_1 + 0x1b8))
                        (*(unsigned int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                         param_1 + param_3 * 0x28 + 0x30c,param_1 + param_3 * 4 + 0x2ec);
      if (temp_v2 == 0) {
        *(unsigned int *)(param_1 + 0x550) = *(unsigned int *)(param_1 + 0x550) | 0x800;
        return 0;
      }
      *(int *)(temp_v0 + 0x46c) = param_3;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
