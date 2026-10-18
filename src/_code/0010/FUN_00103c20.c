/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103c20` (_code @ 0x103c20, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465228; /* 0x465228 */

/* Supplied declaration required: FUN_002c3714. */
/* Supplied declaration required: FUN_002c3724. */
extern int FUN_002c4000(void);


int FUN_00103c20(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c3724();
  temp_v0 = FUN_002c4000();
  FUN_002c3714();
  if (-1 < temp_v0) {
    DAT_00465228 = 0;
  }
  return temp_v0;
}
