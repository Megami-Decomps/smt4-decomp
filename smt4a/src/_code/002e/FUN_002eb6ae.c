/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb6ae` (_code @ 0x2eb6ae, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002eb6ae(int param_1,unsigned short param_2)

{
  return (*(unsigned short *)(param_1 + 0x3c) & param_2) != 0;
}
