/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375c70` (_code @ 0x375c70, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00375d28. */
extern unsigned int FUN_00376130(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00376280. */


unsigned int FUN_00375c70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1;
  FUN_00375d28();
  if (-1 < (int)temp_v1) {
    *(unsigned int *)(param_1 + 0x10) = param_1;
    temp_v0 = FUN_00376130(param_1,param_2);
    temp_v1 = temp_v0 | temp_v1;
    if (-1 < (int)temp_v1) {
      FUN_00376280(param_1,param_2);
      temp_v1 = param_1 | temp_v1;
    }
  }
  return temp_v1;
}
