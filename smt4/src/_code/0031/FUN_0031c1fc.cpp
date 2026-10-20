/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c1fc` (_code @ 0x31c1fc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(int);

/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_002c2950(void);


unsigned int FUN_0031c1fc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002c2950();
  temp_v0 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(0);
  *(unsigned short *)(temp_v1 + temp_v2 * 2 + 0xd5c) = temp_v0;
  return 1;
}

} /* extern "C" */
