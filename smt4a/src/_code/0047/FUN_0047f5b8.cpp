/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f5b8` (_code @ 0x47f5b8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int lcgRandomRange(unsigned int);
extern int FUN_003e4d68(unsigned int);
extern int FUN_003e4d98(void);


unsigned int FUN_0047f5b8(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [13];
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = FUN_003e4d68(temp_v2 & 0xffff);
    temp_v1 = FUN_003e4d98();
    if (temp_v1 != 0) {
      temp_v4[temp_v3] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 0xc);
  if (temp_v3 != 0) {
    temp_v3 = lcgRandomRange((temp_v3 - 1U) & 0xffff);
    temp_v0 = 0;
    do {
      if (*(unsigned int *)(temp_v0 * 8 + 0x57a46c) == temp_v4[temp_v3]) {
        return *(unsigned int *)(temp_v0 * 8 + 0x57a470);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0xb);
  }
  return 0;
}

} /* extern "C" */
