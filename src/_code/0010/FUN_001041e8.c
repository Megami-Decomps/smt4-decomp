/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001041e8` (_code @ 0x1041e8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465240; /* 0x465240 */

/* Supplied declaration required: FUN_0010e574. */
/* Supplied declaration required: FUN_002c3510. */
extern int FUN_002c3dfc(void);


int FUN_001041e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0010e574();
  temp_v0 = FUN_002c3dfc();
  FUN_002c3510();
  if (-1 < temp_v0) {
    DAT_00465240 = 0;
  }
  return temp_v0;
}
