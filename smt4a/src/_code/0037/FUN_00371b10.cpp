/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371b10` (_code @ 0x371b10, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int rt_aeabi_memclr(unsigned char *, int);

extern unsigned char DAT_005e2114; /* 0x5e2114 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned char * FUN_00371b10(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  rt_aeabi_memclr(&DAT_005e2114,0x80);
  if (param_2 != 1) {
    FUN_00100388(&DAT_005e2114,"sdds4game%d.sav",param_1);
  }
  else {
    FUN_00100388(&DAT_005e2114,"%ssdds4game%d.sav","sdds4/",param_1);
  }
  return &DAT_005e2114;
}

} /* extern "C" */
