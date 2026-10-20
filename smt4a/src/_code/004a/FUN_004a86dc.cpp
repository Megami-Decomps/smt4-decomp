/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a86dc` (_code @ 0x4a86dc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


int FUN_004a86dc(unsigned int param_1)

{
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001ab888();
  temp_v1 = 0;
  if (temp_v1 < *(unsigned char *)(temp_v0 + 0x1ca3)) {
    do {
      temp_v2 = (int)*(char *)(temp_v0 + temp_v1 + 0x1c88);
      if ((-1 < temp_v2) && (temp_v2 = temp_v0 + temp_v2 * 300, *(unsigned short *)(temp_v2 + 0xca) == param_1)) {
        return temp_v2 + 0x68;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned char *)(temp_v0 + 0x1ca3));
  }
  return 0;
}

} /* extern "C" */
