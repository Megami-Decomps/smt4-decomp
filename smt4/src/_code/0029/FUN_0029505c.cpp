/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029505c` (_code @ 0x29505c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0029505c(int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    temp_v1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      *(unsigned char *)(param_1 + 0x3c) = 1;
      *(int **)(param_1 + 0x10) = piVar3;
      if (*piVar3 != 0x57444b4e) {
        *(unsigned int *)(param_1 + 0x10) = 0;
      }
      else {
        piVar4 = piVar3 + 10;
        *(int **)(param_1 + 0x14) = piVar4;
        piVar4 = piVar4 + (unsigned int)*(unsigned short *)(piVar3 + 1) * 8;
        *(int **)(param_1 + 0x18) = piVar4;
        piVar4 = piVar4 + piVar3[2] * 10;
        *(int **)(param_1 + 0x1c) = piVar4;
        temp_v0 = *(unsigned short *)((int)piVar3 + 6);
        *(int **)(param_1 + 0x20) = piVar4 + temp_v0;
        *(int **)(param_1 + 0x24) = piVar4 + temp_v0 + (unsigned int)*(unsigned short *)(piVar3 + 3) * 6;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
