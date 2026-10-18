/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed4d4` (_code @ 0x1ed4d4, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00100bd4(void);
extern int FUN_001eb2ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00259510. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned char FUN_001ed4d4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  FUN_00259510(1);
  temp_v1 = FUN_00100bd4();
  temp_v2 = FUN_001eb2ac(temp_v0,temp_v1);
  return temp_v2 != 0;
}
