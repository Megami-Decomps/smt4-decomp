/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f47cc` (_code @ 0x2f47cc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0025c110. */
extern int FUN_002c0e4c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int FUN_002f47cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002c0ec4(0x2d,4);
  temp_v0 = FUN_002c0e4c();
  temp_v1 = DAT_00433158;
  FUN_0025c110(DAT_00433158,0x25,4);
  return temp_v1 + temp_v0;
}
