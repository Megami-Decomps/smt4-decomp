/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c1c4` (_code @ 0x31c1c4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_002c2950(void);


unsigned int FUN_0031c1c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = FUN_00296cc8(0);
  FUN_0028dcb0(*(short *)(temp_v0 + temp_v1 * 2 + 0xd5c) == 0);
  return 1;
}
