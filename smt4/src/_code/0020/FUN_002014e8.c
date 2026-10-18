/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002014e8` (_code @ 0x2014e8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0010f134(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
extern unsigned int FUN_002bf810(unsigned int);
/* Supplied declaration required: FUN_002c34e8. */


unsigned int FUN_002014e8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v0 = FUN_00296cc8(1);
  temp_v2 = FUN_0010f134();
  FUN_002c34e8(temp_v0);
  temp_v1 = FUN_002bf810(temp_v1);
  FUN_002c34e8(temp_v2);
  FUN_0028dcb0(temp_v1);
  return 1;
}
