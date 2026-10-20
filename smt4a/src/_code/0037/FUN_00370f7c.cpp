/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370f7c` (_code @ 0x370f7c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f260; /* 0x57f260 */

extern unsigned int FUN_003e4d68(unsigned int);
extern int FUN_004801ac(unsigned int, unsigned int, unsigned int);


void FUN_00370f7c(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f260;
  if (DAT_0057f260 != 0) {
    temp_v4 = 0;
    *(unsigned int *)(DAT_0057f260 + 0x334) = param_1;
    do {
      temp_v1 = *(unsigned int *)(temp_v0 + temp_v4 * 4 + 0x2c4);
      *(unsigned char *)(temp_v0 + temp_v4 + 0x338) = 0;
      if (-1 < (int)temp_v1) {
        temp_v2 = FUN_003e4d68(temp_v1 & 0xffff);
        temp_v3 = FUN_004801ac(temp_v2,*(unsigned int *)(temp_v0 + 0x334),1);
        if (temp_v3 != 1) {
          *(unsigned char *)(temp_v0 + temp_v4 + 0x338) = 1;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xc);
  }
  return;
}

} /* extern "C" */
