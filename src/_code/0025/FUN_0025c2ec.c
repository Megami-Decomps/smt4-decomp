/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c2ec` (_code @ 0x25c2ec, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00259b50. */
extern int FUN_002c08f0(void);


void FUN_0025c2ec(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_00259b50(param_1);
  *(unsigned char *)(temp_v0 + 0x3d) = param_2;
  *(unsigned int *)(temp_v0 + 0x40) = 2;
  return;
}
