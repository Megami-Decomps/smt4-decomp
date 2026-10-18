/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cd04` (_code @ 0x31cd04, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int *FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_0031cd04(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00296f60();
  puVar2 = (unsigned int *)FUN_00293c98();
  FUN_00282b94(puVar2,temp_v0);
  if (puVar2 != (unsigned int *)0x0) {
    FUN_0028df54((*puVar2 & 0x10000) != 0);
  }
  else {
    FUN_0028df54(0);
  }
  return 1;
}
