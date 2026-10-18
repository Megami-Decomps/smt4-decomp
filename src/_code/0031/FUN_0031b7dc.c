/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b7dc` (_code @ 0x31b7dc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0025bed8. */
extern int FUN_002c0c74(void);
/* Supplied declaration required: FUN_002c0cec. */


int FUN_0031b7dc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002c0cec(0x2a,1);
  temp_v0 = FUN_002c0c74();
  temp_v1 = DAT_00433158;
  FUN_0025bed8(DAT_00433158,0x24,1);
  return temp_v1 + temp_v0;
}
