/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103850` (_code @ 0x103850, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00103880; /* 0x103880 */

/* Supplied declaration required: FUN_001107d4. */
extern int FUN_002e783c(int);
extern unsigned int FUN_002e784e(int, unsigned char *, unsigned int);


void FUN_00103850(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = FUN_002e783c(param_2);
    temp_v1 = FUN_002e784e(temp_v0 + 1,&LAB_00103880,0);
    *param_1 = temp_v1;
    FUN_001107d4(param_2,temp_v1,temp_v0 + 1);
    return;
  }
  *param_1 = 0;
  return;
}
