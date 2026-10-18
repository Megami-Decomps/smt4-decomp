/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbe54` (_code @ 0x2dbe54, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern int FUN_00296f60(void);


unsigned int FUN_002dbe54(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  FUN_0028df54((int)(*(unsigned char *)(temp_v1 + 0x44b4) + 1) <= temp_v0);
  return 1;
}
