/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001784b0` (_code @ 0x1784b0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int FUN_00195034(unsigned int);


unsigned int FUN_001784b0(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00195034(*(unsigned int *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (**(romwright_code **)(*piVar2 + 0x34))(piVar2,param_2);
    }
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}
