/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6f98` (_code @ 0x3e6f98, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd808. */
/* Supplied declaration required: FUN_002c5df8. */
extern int FUN_003e6748(void);
extern unsigned int FUN_003e6794(unsigned int);
/* Supplied declaration required: FUN_003e67e4. */


unsigned char FUN_003e6f98(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_003e6794(*(unsigned int *)(param_1 + 4));
  FUN_003e67e4(temp_v0,param_4);
  temp_v1 = FUN_003e6748();
  if (temp_v1 != 0) {
    FUN_002c5df8(param_2,temp_v1,0x26);
    FUN_002bd808(param_3,temp_v1 + 0x26);
  }
  return temp_v1 != 0;
}
