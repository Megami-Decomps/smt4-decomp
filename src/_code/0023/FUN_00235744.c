/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235744` (_code @ 0x235744, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0040b890; /* 0x40b890 */
extern unsigned char DAT_0040b89c; /* 0x40b89c */


void FUN_00235744(float *param_1)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float in_s0;
  
  if (in_s0 < *param_1) {
                    /* WARNING: GHIDRA has no data in the loadimage at 0x4 */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(&DAT_0040b890 + (unsigned int)*(unsigned char *)(param_1 + 2) * 4))();
    return;
  }
  if (param_1[1] <= in_s0) {
                    /* WARNING: GHIDRA has no data in the loadimage at 0x4 */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(&DAT_0040b89c + (unsigned int)*(unsigned char *)((int)param_1 + 9) * 4))();
    return;
  }
  return;
}
