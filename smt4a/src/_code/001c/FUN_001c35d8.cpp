/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c35d8` (_code @ 0x1c35d8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005c1d20; /* 0x5c1d20 */
extern unsigned int DAT_0064776c; /* 0x64776c */
extern unsigned int *DAT_00647770; /* 0x647770 */
extern unsigned int *DAT_00647774; /* 0x647774 */

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_001c35d8(void)

{
  int temp_v0;
  
  if (((DAT_005c1d20 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c1d20), temp_v0 != 0)) {
    DAT_00647770 = (unsigned int *)&DAT_00647770;
    DAT_0064776c = 0;
    DAT_00647774 = (unsigned int *)&DAT_00647770;
  }
  return &DAT_0064776c;
}

} /* extern "C" */
