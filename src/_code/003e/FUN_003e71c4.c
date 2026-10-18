/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e71c4` (_code @ 0x3e71c4, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd9ec. */
/* Supplied declaration required: FUN_002c5ff4. */
extern int FUN_003e6974(void);
extern unsigned int FUN_003e69c0(unsigned int);
/* Supplied declaration required: FUN_003e6a10. */


unsigned char FUN_003e71c4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_003e69c0(*(unsigned int *)(param_1 + 4));
  FUN_003e6a10(temp_v0,param_4);
  temp_v1 = FUN_003e6974();
  if (temp_v1 != 0) {
    FUN_002c5ff4(param_2,temp_v1,0x26);
    FUN_002bd9ec(param_3,temp_v1 + 0x26);
  }
  return temp_v1 != 0;
}
