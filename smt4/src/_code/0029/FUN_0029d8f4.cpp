/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d8f4` (_code @ 0x29d8f4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlBuildUnitSnapshot(int, unsigned int);

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: btlBuildUnitSnapshot. */


void FUN_0029d8f4(unsigned int param_1,int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = DAT_0044e144;
  btlBuildUnitSnapshot(DAT_0044e144 + 0x1300,param_1);
  if (param_2 == 0) {
    temp_v1 = 2;
  }
  else {
    temp_v1 = 6;
  }
  *(unsigned char *)(temp_v0 + 0x1e66) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x1e70) = param_3;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  *(unsigned char *)(temp_v0 + 0x1e71) = 0;
  return;
}

} /* extern "C" */
