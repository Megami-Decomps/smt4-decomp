/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f50c` (_code @ 0x10f50c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465600; /* 0x465600 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


unsigned char FUN_0010f50c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_002c38a4(&DAT_004c6410);
  temp_v0 = DAT_00465600 != 0;
  FUN_002c3820(&DAT_004c6410);
  return temp_v0;
}
