/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105e98` (_code @ 0x105e98, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004e3aa0; /* 0x4e3aa0 */
extern int DAT_004e3b18; /* 0x4e3b18 */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */
extern unsigned char DAT_004e3be1; /* 0x4e3be1 */


void FUN_00105e98(int param_1,unsigned char param_2)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return;
      }
      if (DAT_004e3aa0 != 0x500) {
        DAT_004e3be0 = param_2;
      }
    }
    if (DAT_004e3b18 != 0x500) {
      DAT_004e3be1 = param_2;
      return;
    }
  }
  else if (DAT_004e3aa0 != 0x500) {
    DAT_004e3be0 = param_2;
  }
  return;
}

} /* extern "C" */
