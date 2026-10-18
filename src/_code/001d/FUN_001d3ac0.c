/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3ac0` (_code @ 0x1d3ac0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c1f28(void);


unsigned int FUN_001d3ac0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (0 < temp_v0) {
    temp_v0 = FUN_00289640();
    temp_v1 = FUN_00296f60(0);
    if ((temp_v0 < temp_v1) &&
       ((temp_v0 = FUN_002c1f28(), temp_v0 == 0 || (temp_v0 = FUN_00289640(), temp_v0 < 1)))) {
      return 0;
    }
  }
  return 1;
}
