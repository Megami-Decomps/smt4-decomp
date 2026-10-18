/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029db40` (_code @ 0x29db40, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0024d9e4. */
/* Supplied declaration required: FUN_0029da10. */


void FUN_0029db40(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [1552];
  
  temp_v0 = DAT_0044e144;
  FUN_0029da10(param_1,temp_v1);
  FUN_0024d9e4(temp_v0 + 0x1300,temp_v1);
  *(unsigned char *)(temp_v0 + 0x1e66) = 4;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}
