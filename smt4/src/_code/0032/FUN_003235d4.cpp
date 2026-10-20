/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003235d4` (_code @ 0x3235d4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00394490(int, int, unsigned int);

extern int DAT_00432fc8; /* 0x432fc8 */

extern unsigned int FUN_002592d8(unsigned int);
extern short FUN_00296cc8(void);
/* Supplied declaration required: FUN_00394490. */


unsigned int FUN_003235d4(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002592d8(1);
  FUN_00394490(DAT_00432fc8 + 0xa8,(int)temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
