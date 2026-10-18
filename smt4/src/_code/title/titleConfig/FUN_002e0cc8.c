/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0cc8` (_code @ 0x2e0cc8, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern unsigned char DAT_0044e0fb; /* 0x44e0fb */

extern int FUN_002c09bc(void);


void FUN_002e0cc8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0x24b7c) = DAT_0044e0f8;
    *(unsigned char *)(temp_v0 + 0x24b7d) = DAT_0044e0f9;
    *(unsigned char *)(temp_v0 + 0x24b7e) = DAT_0044e0fa;
    *(unsigned char *)(temp_v0 + 0x24b7f) = DAT_0044e0fb;
    *(unsigned char *)(temp_v0 + 0x24b80) = 1;
  }
  return;
}
