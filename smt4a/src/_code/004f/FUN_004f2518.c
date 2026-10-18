/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2518` (_code @ 0x4f2518, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001f5180. */


void FUN_004f2518(int param_1)

{
/* irregular: irregular input(s): in_s2; 2 native warning(s); review required */
  float in_s2;
  
  FUN_001f5180(param_1 + 0x58,(int)(short)(int)in_s2,0);
  *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) | 0x400000;
  return;
}
