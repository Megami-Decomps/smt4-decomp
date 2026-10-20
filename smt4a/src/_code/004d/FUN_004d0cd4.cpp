/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0cd4` (_code @ 0x4d0cd4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);
extern int FUN_004bd730(int);


int FUN_004d0cd4(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_001ab888();
  temp_v1 = FUN_001ab888();
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v1 + temp_v2 + 0x1c88) < '\0') break;
    temp_v2 = temp_v2 + 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v2 < 0x18);
  if (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x1ca3)) {
    temp_v0 = FUN_001ab888();
    temp_v1 = 0;
    do {
      temp_v2 = FUN_004bd730(temp_v0 + temp_v1 * 300 + 0x68);
      if (temp_v2 == 0) {
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return -1;
}

} /* extern "C" */
