/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467840` (_code @ 0x467840, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00547a70; /* 0x547a70 */
extern unsigned char DAT_00547a7c; /* 0x547a7c */


void FUN_00467840(float *param_1)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float in_s0;
  
  if (in_s0 < *param_1) {
                    /* WARNING: GHIDRA has no data in the loadimage at 0x3f800000 */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(&DAT_00547a70 + (unsigned int)*(unsigned char *)(param_1 + 2) * 4))();
    return;
  }
  if (param_1[1] <= in_s0) {
                    /* WARNING: GHIDRA has no data in the loadimage at 0x3f800000 */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(&DAT_00547a7c + (unsigned int)*(unsigned char *)((int)param_1 + 9) * 4))();
    return;
  }
  return;
}
