/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ccf7c` (_code @ 0x1ccf7c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

/* Supplied declaration required: rt_memcpy_w. */


unsigned int *
FUN_001ccf7c(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int *param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  for (; param_5 >= 0x81; param_5 = param_5 - 0x80) {
    *param_2 = *param_4;
    param_2[1] = param_3 | 0x7ff0000;
    rt_memcpy_w(param_2 + 2,param_4 + 1,0x1fc);
    param_2[0x81] = 0xead0fead;
    param_4 = param_4 + 0x80;
    param_2 = param_2 + 0x82;
  }
  *param_2 = *param_4;
  puVar2 = param_2 + 2;
  param_2[1] = (param_5 * 0x100000 - 0x100000) | param_3 | 0xf0000;
  rt_memcpy_w(puVar2,param_4 + 1,param_5 * 4 - 4);
  puVar2 = puVar2 + param_5;
  puVar1 = puVar2 + -1;
  if ((param_5 & 1) == 0) {
    puVar2[-1] = 0xead0fead;
    puVar1 = puVar2;
  }
  return puVar1;
}

} /* extern "C" */
