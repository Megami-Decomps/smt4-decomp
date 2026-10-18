/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbb50` (_code @ 0x2dbb50, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);
extern int FUN_002c615c(int, int);


unsigned int FUN_002dbb50(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  temp_v1 = FUN_002c615c(*(short *)(*(int *)(temp_v1 + 0x28) + 0xe8) * 100,
                       (int)*(short *)(*(int *)(temp_v1 + 0x28) + 0xea));
  FUN_0028df54(temp_v1 <= temp_v0);
  return 1;
}
