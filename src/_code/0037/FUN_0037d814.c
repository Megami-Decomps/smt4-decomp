/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d814` (_code @ 0x37d814, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00235df4; /* 0x235df4 */

extern int FUN_00235df8(int);
/* Supplied declaration required: FUN_002b4fb0. */
/* Supplied declaration required: FUN_002c68bc. */
/* Supplied declaration required: FUN_0037c9e4. */


int FUN_0037d814(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0037c9e4();
  FUN_002b4fb0(param_1 + 0x8c,param_1 + 0x90,0xa00);
  FUN_002c68bc(param_1 + 0x90,&LAB_00235df4,0x50,0x20);
  temp_v0 = FUN_00235df8(param_1 + 0x60);
  return temp_v0 - 0x60;
}
