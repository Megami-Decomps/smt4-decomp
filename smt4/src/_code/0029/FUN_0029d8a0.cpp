/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d8a0` (_code @ 0x29d8a0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024d7d0(int, unsigned char [1552]);
int FUN_0029d770(unsigned int, unsigned char [1552]);

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0024d7d0. */
/* Supplied declaration required: FUN_0029d770. */


void FUN_0029d8a0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [1552];
  
  temp_v0 = DAT_0044e144;
  FUN_0029d770(param_1,temp_v1);
  FUN_0024d7d0(temp_v0 + 0x1300,temp_v1);
  *(unsigned char *)(temp_v0 + 0x1e66) = 4;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}

} /* extern "C" */
