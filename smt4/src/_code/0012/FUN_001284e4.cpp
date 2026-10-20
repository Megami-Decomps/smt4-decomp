/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001284e4` (_code @ 0x1284e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern signed char DAT_0044e45a; /* 0x44e45a */
extern unsigned char DAT_004c64a4; /* 0x4c64a4 */


void FUN_001284e4(void)

{
  int temp_v0;
  
  if (DAT_0044e45a != '\0') {
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    DAT_0044e45a = '\0';
  }
  return;
}

} /* extern "C" */
