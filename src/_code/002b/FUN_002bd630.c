/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd630` (_code @ 0x2bd630, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472364; /* 0x472364 */
extern unsigned char DAT_004ea4c8; /* 0x4ea4c8 */

/* Supplied declaration required: FUN_00140910. */
extern int FUN_002c00d4(unsigned int *);


unsigned char * FUN_002bd630(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00472364 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00472364), temp_v0 != 0)) {
    FUN_00140910(&DAT_004ea4c8);
  }
  return &DAT_004ea4c8;
}
