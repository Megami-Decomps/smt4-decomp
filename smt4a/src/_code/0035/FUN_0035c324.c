/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c324` (_code @ 0x35c324, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(unsigned int);
extern int FUN_00239288(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0035c324(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00239288();
  temp_v1 = FUN_0018719c(0x581);
  if (temp_v1 != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x66);
  }
  else {
    temp_v2 = 0xffffffff;
  }
  FUN_003283ac(temp_v2);
  return 1;
}
