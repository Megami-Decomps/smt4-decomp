/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ccb0` (_code @ 0x10ccb0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559018; /* 0x559018 */

extern int FUN_002eb624(unsigned int *);


int FUN_0010ccb0(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559018;
  temp_v0 = FUN_002eb624(param_1 + 7);
  return temp_v0 - 0x1c;
}

} /* extern "C" */
