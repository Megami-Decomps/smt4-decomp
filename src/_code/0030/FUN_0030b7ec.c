/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b7ec` (_code @ 0x30b7ec, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);
/* Supplied declaration required: FUN_00337594. */


void FUN_0030b7ec(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  FUN_00337594(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v1 = FUN_00293c98();
    FUN_0028df54(*(unsigned int *)(temp_v1 + 0x4454));
  }
  return;
}
