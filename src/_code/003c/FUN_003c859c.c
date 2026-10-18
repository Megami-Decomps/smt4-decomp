/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c859c` (_code @ 0x3c859c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b6e60(void);


unsigned int FUN_003c859c(void)

{
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = FUN_002b6e60();
  if ((*(unsigned short *)(temp_v1 + 0x608) & 1) != 0) {
    temp_v0 = *(short *)(temp_v1 + 0x60a);
    temp_v2 = temp_v0 == 0;
    if (temp_v2) {
      temp_v0 = *(short *)(temp_v1 + 0x60c);
    }
    temp_v3 = temp_v2 && temp_v0 == 0;
    if (temp_v2 && temp_v0 == 0) {
      temp_v3 = *(short *)(temp_v1 + 0x60e) == 0;
    }
    if (!temp_v3) {
      return 1;
    }
  }
  return 0;
}
