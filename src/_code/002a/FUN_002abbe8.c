/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002abbe8` (_code @ 0x2abbe8, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned char FUN_002abbe8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_r4;
  int temp_v0;
  int *piVar5;
  int temp_v1;
  unsigned char temp_v2;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 0xc);
  while( 1 ) {
    if (piVar1 != piVar5) {
      unaff_r4 = *piVar1;
    }
    if (piVar1 == piVar5 || unaff_r4 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  if (piVar1 != piVar5) {
    piVar2 = piVar1 + 1;
    temp_v1 = (int)piVar5 - (int)piVar2;
    if (0 < temp_v1 >> 2) {
      piVar5 = piVar1;
      if (temp_v1 * 0x20000000 < 0) {
        temp_v0 = *piVar2;
        piVar2 = piVar1 + 2;
        if (temp_v0 != param_2) {
          piVar5 = piVar1 + 1;
          *piVar1 = temp_v0;
        }
      }
      piVar1 = piVar5;
      for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        piVar5 = piVar1;
        if (*piVar2 != param_2) {
          piVar5 = piVar1 + 1;
          *piVar1 = *piVar2;
        }
        piVar3 = piVar2 + 1;
        piVar2 = piVar2 + 2;
        piVar1 = piVar5;
        if (*piVar3 != param_2) {
          piVar1 = piVar5 + 1;
          *piVar5 = *piVar3;
        }
      }
    }
  }
  piVar5 = *(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = piVar1;
  temp_v2 = piVar5 != piVar1;
  if (temp_v2) {
    *(unsigned int *)(param_2 + 0xc) = 0;
  }
  return temp_v2;
}
