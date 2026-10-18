/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350cd4` (_code @ 0x350cd4, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002bb490. */


unsigned int FUN_00350cd4(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v4 = SCARRY4(param_2,1);
  temp_v2 = param_2 + 1;
  temp_v3 = param_2 == -1;
  if (-2 < param_2) {
    temp_v1 = *(int *)(param_1 + 0x484);
    temp_v4 = SBORROW4(temp_v1,param_2);
    temp_v2 = temp_v1 - param_2;
    temp_v3 = temp_v1 == param_2;
  }
  if (temp_v3 || temp_v2 < 0 != temp_v4) {
    return 0;
  }
  if (*(int *)(param_1 + 0x548) != param_2) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(unsigned int *)(param_1 + 0x550) = *(unsigned int *)(param_1 + 0x550) | 0x1000;
      return 0;
    }
    temp_v0 = *(char *)(param_1 + 0x54c);
    while (temp_v0 == '\x01') {
      FUN_002bb490(500000,0);
      temp_v0 = *(char *)(param_1 + 0x54c);
    }
    temp_v2 = *(int *)(param_1 + 0x548);
    if ((temp_v2 != param_2) && (-1 < temp_v2)) {
      (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 0xc))
                (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                 *(unsigned int *)(param_1 + temp_v2 * 4 + 0x488));
      *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x488) = 0;
      *(int *)(param_1 + 0x548) = -1;
    }
    if (-1 < param_2) {
      (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 8))
                (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                 param_1 + param_2 * 0x10 + 0x4a8,param_1 + param_2 * 4 + 0x488);
      *(int *)(param_1 + 0x548) = param_2;
    }
  }
  return 1;
}
