/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd498` (_code @ 0x2bd498, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam0044e8b0; /* 0x44e8b0 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd498(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int unaff_r6;
  unsigned char temp_v4;
  
  temp_v1 = *param_1;
  temp_v3 = *(int *)(unaff_r6 + 0x9c);
  temp_v2 = uRam0044e8b0 - *(int *)(temp_v3 + 4);
  temp_v4 = (temp_v2 & 8) != 0;
  temp_v0 = uRam0044e8b0;
  if (temp_v4) {
    temp_v0 = temp_v2 + 0x18;
  }
  *(unsigned int *)(temp_v3 + 0xc) = temp_v2;
  if (temp_v4) {
    *(unsigned int *)(temp_v3 + 0xc) = temp_v0;
  }
  else {
    *(unsigned int *)(temp_v3 + 0xc) = temp_v2 + 0x20;
    if (temp_v0 < *(unsigned int *)(temp_v1 * 0x400)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
