/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb624` (_code @ 0x2eb624, 0x7 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005590d8; /* 0x5590d8 */

extern int func_0x002f59f8(unsigned int *);


int FUN_002eb624(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005590d8;
  temp_v0 = func_0x002f59f8(param_1 + 1);
  return temp_v0 - 4;
}
