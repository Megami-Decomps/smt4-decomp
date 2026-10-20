/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c51c` (_code @ 0x31c51c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

extern unsigned int *DAT_0057f554; /* 0x57f554 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


unsigned int FUN_0031c51c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0057f554 != (unsigned int *)0x0) && (temp_v0 = FUN_00163e40(*DAT_0057f554), temp_v0 != 0)) {
    FUN_001631d0(*DAT_0057f554,0);
  }
  return 1;
}

} /* extern "C" */
