/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460d5c` (_code @ 0x460d64, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(void);

/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_00460d5c(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2 - param_2[1];
  if (param_3 <= (unsigned int)(*param_2 - param_2[1])) {
    temp_v0 = param_3;
  }
  rt_memcpy();
  return temp_v0;
}

} /* extern "C" */
