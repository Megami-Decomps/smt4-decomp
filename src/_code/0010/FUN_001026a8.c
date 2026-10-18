/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001026a8` (_code @ 0x1026a8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_00446db8; /* 0x446db8 */

/* Supplied declaration required: FUN_002c50f4. */
extern int FUN_002c5210(void);


unsigned int FUN_001026a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00446db0 == '\0') && (temp_v0 = FUN_002c5210(), temp_v0 == 1)) && (DAT_00446db1 != '\0')) {
    FUN_002c50f4(DAT_00446db8,1);
  }
  return 0;
}
