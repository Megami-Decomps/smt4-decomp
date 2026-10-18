/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ce8c` (_code @ 0x25ce8c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002b66ec(void);
extern int FUN_002c0ba8(unsigned int);


unsigned int FUN_0025ce8c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c0ba8(0x410);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002b66ec();
    temp_v2 = *(short *)(temp_v1 + 2) != 0;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 4);
    }
    if (temp_v2 && temp_v1 != 0) {
      return 1;
    }
  }
  return 0;
}
