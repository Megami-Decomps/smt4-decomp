/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c97e` (_code @ 0x10c97e, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0010c97e(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  *(int *)(param_1 + 0x90) = param_2;
  *(int *)(param_2 + 0x74) = param_1;
  iStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  (**(romwright_code **)(**(int **)(param_1 + 0x90) + 0x5c))
            (&iStack_10,*(int **)(param_1 + 0x90),*(unsigned int *)(param_1 + 0x70));
  return;
}
