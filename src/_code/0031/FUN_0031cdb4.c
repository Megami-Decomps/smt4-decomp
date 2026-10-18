/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cdb4` (_code @ 0x31cdb4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
extern unsigned int *FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_0031cdb4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  puVar3 = (unsigned int *)FUN_00293c98();
  FUN_00282b94(puVar3,temp_v0);
  if (puVar3 != (unsigned int *)0x0) {
    if (temp_v1 >= 1) {
      temp_v2 = *puVar3 | 0x10000;
    }
    else {
      temp_v2 = *puVar3 & 0xfffeffff;
    }
    *puVar3 = temp_v2;
  }
  return 1;
}
