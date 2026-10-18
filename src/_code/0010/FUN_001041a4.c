/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001041a4` (_code @ 0x1041a4, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465240; /* 0x465240 */

/* Supplied declaration required: FUN_0010e550. */
/* Supplied declaration required: FUN_002c3714. */
extern int FUN_002c4000(void);


int FUN_001041a4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0010e550();
  temp_v0 = FUN_002c4000();
  FUN_002c3714();
  if (-1 < temp_v0) {
    DAT_00465240 = 0;
  }
  return temp_v0;
}
