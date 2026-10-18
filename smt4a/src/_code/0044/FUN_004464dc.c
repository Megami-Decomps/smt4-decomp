/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004464dc` (_code @ 0x4464dc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b620; /* 0x55b620 */


unsigned int * FUN_004464dc(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055b620;
  (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))((int *)param_1[0x82],param_1[0x83]);
  if (param_1[3] != 0) {
    param_1[3] = 0;
    param_1[5] = 0;
  }
  if (param_1[4] != 0) {
    param_1[4] = 0;
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}
