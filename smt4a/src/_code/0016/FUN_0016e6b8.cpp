/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e6b8` (_code @ 0x16e6b8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern signed char DAT_00589286; /* 0x589286 */
extern unsigned char DAT_0061a684; /* 0x61a684 */


void FUN_0016e6b8(void)

{
  int temp_v0;
  
  if (DAT_00589286 != '\0') {
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_0061a684 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_0061a684 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    DAT_00589286 = '\0';
  }
  return;
}

} /* extern "C" */
