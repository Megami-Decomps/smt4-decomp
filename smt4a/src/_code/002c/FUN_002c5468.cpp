/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5468` (_code @ 0x2c5468, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


void FUN_002c5468(void)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v4 = 1;
  if (temp_v4 < *(char *)(temp_v0 + 0xe05) - 1) {
    do {
      temp_v3 = 1;
      if (temp_v3 < *(char *)(temp_v0 + 0xe04) - 1) {
        do {
          temp_v2 = temp_v0 + temp_v4 * 0x78 + temp_v3 * 8;
          if (*(char *)(temp_v2 + 0x3c) != '\x02') {
            *(unsigned char *)(temp_v2 + 0x41) = 0;
          }
          else {
            temp_v1 = (unsigned int)(*(char *)(temp_v2 + 0x34) == '\x01');
            if (*(char *)(temp_v2 + 0x44) == '\x01') {
              temp_v1 = temp_v1 | 2;
            }
            if (*(char *)(temp_v2 - 0x3c) == '\x01') {
              temp_v1 = temp_v1 | 4;
            }
            if (*(char *)(temp_v2 + 0xb4) == '\x01') {
              temp_v1 = temp_v1 | 8;
            }
            *(unsigned char *)(temp_v2 + 0x41) = *(unsigned char *)(temp_v1 + 0x5814a4);
            *(unsigned char *)(temp_v2 + 0x40) = *(unsigned char *)(temp_v1 + 0x5814b4);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(char *)(temp_v0 + 0xe04) - 1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(char *)(temp_v0 + 0xe05) - 1);
  }
  return;
}

} /* extern "C" */
