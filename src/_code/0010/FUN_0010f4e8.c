/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f4e8` (_code @ 0x10f4e8, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465600; /* 0x465600 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned char FUN_0010f4e8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_002c3aa8(&DAT_004c6410);
  temp_v0 = DAT_00465600 != 0;
  FUN_002c3a24(&DAT_004c6410);
  return temp_v0;
}
