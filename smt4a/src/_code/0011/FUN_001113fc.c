/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001113fc` (_code @ 0x1113fc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001114f6. */
extern unsigned int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7634. */
/* Supplied declaration required: FUN_002ec9f4. */


void FUN_001113fc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [36];
  
  FUN_002e7634(temp_v1);
  temp_v0 = FUN_002e3390(param_3);
  FUN_002e74c4(temp_v1,param_3,temp_v0,0xffffffff);
  FUN_001114f6(param_1,param_2,temp_v1,param_4);
  FUN_002ec9f4(temp_v1);
  return;
}
