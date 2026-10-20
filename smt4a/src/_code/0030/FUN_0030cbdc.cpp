/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cbdc` (_code @ 0x30cbdc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559028; /* 0x559028 */

extern int FUN_0010ccb0(unsigned int *);


int FUN_0030cbdc(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559028;
  temp_v0 = FUN_0010ccb0(param_1 + 6);
  return temp_v0 - 0x18;
}

} /* extern "C" */
