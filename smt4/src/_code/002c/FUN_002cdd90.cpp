/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdd90` (_code @ 0x2cdd90, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_00296cc8(int);
int FUN_002b63c0(void);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002b63c0. */


unsigned int FUN_002cdd90(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_002b63c0();
  FUN_0028dcb0(*(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x148));
  return 1;
}

} /* extern "C" */
