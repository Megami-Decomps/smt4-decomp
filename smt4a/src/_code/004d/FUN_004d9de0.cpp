/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9de0` (_code @ 0x4d9de0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetOptions(void);


unsigned int FUN_004d9de0(void)

{
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = gameGetOptions();
  if ((*(unsigned short *)(temp_v1 + 0x130) & 1) != 0) {
    temp_v0 = *(short *)(temp_v1 + 0x132);
    temp_v2 = temp_v0 == 0;
    if (temp_v2) {
      temp_v0 = *(short *)(temp_v1 + 0x134);
    }
    temp_v3 = temp_v2 && temp_v0 == 0;
    if (temp_v2 && temp_v0 == 0) {
      temp_v3 = *(short *)(temp_v1 + 0x136) == 0;
    }
    if (!temp_v3) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
