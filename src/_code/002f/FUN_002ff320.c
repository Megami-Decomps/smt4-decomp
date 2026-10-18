/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff320` (_code @ 0x2ff320, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);


unsigned int FUN_002ff320(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  FUN_0028df54(*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x126) >> 10 == 3);
  return 1;
}
