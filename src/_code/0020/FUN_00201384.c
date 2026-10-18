/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201384` (_code @ 0x201384, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0010f110(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00296f60. */
extern unsigned int FUN_002bf9e8(unsigned int);
/* Supplied declaration required: FUN_002c36ec. */


unsigned int FUN_00201384(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_00296f60(0);
  temp_v0 = FUN_00296f60(1);
  temp_v2 = FUN_0010f110();
  FUN_002c36ec(temp_v0);
  temp_v1 = FUN_002bf9e8(temp_v1);
  FUN_002c36ec(temp_v2);
  FUN_0028df54(temp_v1);
  return 1;
}
