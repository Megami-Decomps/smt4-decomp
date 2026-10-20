/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027fa98` (_code @ 0x27fa98, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049fa98; /* 0x49fa98 */


void FUN_0027fa98(int param_1)

{
/* irregular: irregular input(s): in_s0 */
  int *piVar1;
  int in_s0;
  
  piVar1 = DAT_00447e88;
  if (*DAT_00447e88 != param_1) {
    *DAT_00447e88 = param_1;
    piVar1[1] = 0;
    if (param_1 == 1) {
      in_s0 = 0x40a00000;
    }
    piVar1[2] = 0;
    if (param_1 == 1) {
      piVar1[0x16] = in_s0;
    }
    else if (param_1 != 3) {
      DAT_0049fa98 = 0;
    }
  }
  return;
}

} /* extern "C" */
