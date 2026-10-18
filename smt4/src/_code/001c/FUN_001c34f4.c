/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c34f4` (_code @ 0x1c34f4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00296cc8(void);
extern int FUN_002bf244(void);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_001c34f4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002bf244();
  if (temp_v1 != 0) {
    FUN_002c43b4(temp_v0,0);
  }
  return 1;
}
