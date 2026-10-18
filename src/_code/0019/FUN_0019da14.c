/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019da14` (_code @ 0x19da14, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028c920. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int FUN_002c5e3c(unsigned int, unsigned int *, unsigned int, unsigned int);


unsigned int FUN_0019da14(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int uStack_10;
  
  uStack_10 = param_4;
  temp_v0 = FUN_002c5e3c(param_1,(unsigned int *)&uStack_10,1,0x80);
  temp_v1 = temp_v0;
  FUN_0028c920();
  FUN_002c4360(temp_v0);
  return temp_v1;
}
