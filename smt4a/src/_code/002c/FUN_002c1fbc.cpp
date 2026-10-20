/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1fbc` (_code @ 0x2c1fbc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

extern unsigned int *DAT_0057f4c4; /* 0x57f4c4 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


unsigned int FUN_002c1fbc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0057f4c4 != (unsigned int *)0x0) && (temp_v0 = FUN_00163e40(*DAT_0057f4c4), temp_v0 != 0)) {
    FUN_001631d0(*DAT_0057f4c4,0);
  }
  return 1;
}

} /* extern "C" */
