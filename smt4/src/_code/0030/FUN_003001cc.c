/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003001cc` (_code @ 0x3001cc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_003001cc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  FUN_00296cc8(1);
  temp_v1 = FUN_002939f4();
  FUN_00282924(temp_v1,temp_v0);
  FUN_0028dcb0();
  return 1;
}
