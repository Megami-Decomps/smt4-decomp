/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312598` (_code @ 0x312598, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002939f4. */
extern int FUN_003367c4(void);


unsigned char FUN_00312598(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002939f4();
  temp_v0 = FUN_003367c4();
  return temp_v0 != 0;
}
