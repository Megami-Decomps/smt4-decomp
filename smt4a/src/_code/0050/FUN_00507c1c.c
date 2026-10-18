/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00507c1c` (_code @ 0x507c1c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int FUN_005093a0(unsigned int);


unsigned int FUN_00507c1c(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_005093a0(*(unsigned int *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (**(romwright_code **)(*piVar2 + 0x44))(piVar2,param_2,param_3);
    }
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}
