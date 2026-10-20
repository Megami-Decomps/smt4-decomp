/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239194` (_code @ 0x239194, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);

extern unsigned int *DAT_0057f678; /* 0x57f678 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_002e3328. */


unsigned int FUN_00239194(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0057f678 != (unsigned int *)0x0) {
    temp_v0 = FUN_00163e40(*DAT_0057f678);
    if (temp_v0 != 0) {
      return 0;
    }
    if (DAT_0057f678 != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_0057f678 = (unsigned int *)0x0;
    }
  }
  return 1;
}

} /* extern "C" */
