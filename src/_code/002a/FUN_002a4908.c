/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4908` (_code @ 0x2a4908, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00156688. */
/* Supplied declaration required: FUN_00156814. */
/* Supplied declaration required: FUN_002b5228. */


void FUN_002a4908(int param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x20)) {
    if ((~*(unsigned int *)(param_1 + 0x14) & 2) != 0) {
      temp_v1 = *(int *)(*(int *)(param_1 + 0x20) + 0x20);
      temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
      if (temp_v0 == temp_v1) {
        *(unsigned char *)(param_1 + 0x13) = 0;
      }
      else {
        if (((temp_v0 != 0) && (-1 < *(int *)(temp_v0 + 0x10))) && (*(int *)(temp_v1 + 0x10) < 0)) {
          *(unsigned char *)(param_1 + 0x12) = 1;
          FUN_002b5228(param_1 + 0x100,0x1015);
          *(unsigned char *)(param_1 + 0xec) = 1;
          *(unsigned char *)(param_1 + 0xe9) = 1;
          *(unsigned char *)(param_1 + 0xe8) = 1;
          *(unsigned char *)(param_1 + 0xea) = 1;
          *(unsigned char *)(param_1 + 0xeb) = 1;
          *(unsigned int *)(param_1 + 0x1c) = 0;
        }
        FUN_00156814(*(unsigned int *)(param_1 + 8),temp_v1);
        *(unsigned char *)(param_1 + 0x13) = 1;
      }
    }
    FUN_00156688(param_1);
    if ((~*(unsigned int *)(param_1 + 0x14) & 1) != 0) {
      if (param_2 == (int *)0x0) {
        param_2 = *(int **)(*(int *)(*(int *)(param_1 + 0x20) + 0x1c) + 0x1ec);
      }
      (**(romwright_code **)(*param_2 + 0xc))(param_2,param_1,*(unsigned int *)(param_1 + 0x20));
    }
    *(unsigned char *)(param_1 + 0xec) = 0;
    *(unsigned char *)(param_1 + 0xe9) = 0;
    *(unsigned char *)(param_1 + 0xe8) = 0;
    *(unsigned char *)(param_1 + 0xea) = 0;
    *(unsigned char *)(param_1 + 0xeb) = 0;
    *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x20);
  }
  return;
}
