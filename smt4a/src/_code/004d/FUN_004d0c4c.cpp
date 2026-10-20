/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0c4c` (_code @ 0x4d0c4c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


void FUN_004d0c4c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001ab888();
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v0 + temp_v2 + 0x1c88) < '\0') {
      temp_v1 = temp_v2 + 1;
      if (temp_v1 >= 0x18) {
        return;
      }
      while (*(char *)(temp_v0 + temp_v1 + 0x1c88) < '\0') {
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 0x18) {
          return;
        }
      }
      *(unsigned char *)(temp_v0 + temp_v2 + 0x1c88) = *(unsigned char *)(temp_v1 + temp_v0 + 0x1c88);
      *(unsigned char *)(temp_v1 + temp_v0 + 0x1c88) = 0xff;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  return;
}

} /* extern "C" */
