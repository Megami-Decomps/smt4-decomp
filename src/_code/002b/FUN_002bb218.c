/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb218` (_code @ 0x2bb218, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472340; /* 0x472340 */
extern unsigned char DAT_004e9e48; /* 0x4e9e48 */

/* Supplied declaration required: FUN_00140854. */
extern int FUN_002c00d4(unsigned int *);


unsigned char * FUN_002bb218(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00472340 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00472340), temp_v0 != 0)) {
    FUN_00140854(&DAT_004e9e48);
  }
  return &DAT_004e9e48;
}
