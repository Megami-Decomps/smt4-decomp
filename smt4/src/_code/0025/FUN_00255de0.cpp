/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255de0` (_code @ 0x255de0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_idivmod(unsigned int, int);

extern unsigned int g_randState; /* 0x435e48 */

/* Supplied declaration required: __aeabi_idivmod. */


int FUN_00255de0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = param_2;
  if (param_2 < param_1) {
    temp_v0 = param_1;
    param_1 = param_2;
  }
  g_randState = g_randState * 0x41c64e6d + 0x3039;
  __aeabi_idivmod(g_randState >> 0x10,(temp_v0 - param_1) + 1);
  return temp_v1 + param_1;
}

} /* extern "C" */
