/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003237cc` (_code @ 0x3237cc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

extern unsigned int FUN_00259510(unsigned int);
extern short FUN_00296f60(void);
/* Supplied declaration required: FUN_003946ac. */


unsigned int FUN_003237cc(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00259510(1);
  FUN_003946ac(DAT_00432fc8 + 0xa8,(int)temp_v0,temp_v1);
  return 1;
}
