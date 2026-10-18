/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ed7a` (_code @ 0x30ed7a, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short FUN_00100790(void);


void FUN_0030ed7a(int param_1)

{
  short temp_v0;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 4);
  if (psVar2 == (short *)0x0) {
    return;
  }
  for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
    temp_v0 = FUN_00100790();
    *psVar2 = temp_v0;
  }
  return;
}
